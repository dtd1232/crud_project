#include <stdio.h>
#include <string.h>
#include "manager.h"

int main()
{
    Table p[100];
    int count = 0, index = 0;
    int menu;

    count = loadTable(p);
    index = count; 

    while (1)
    {
        menu = selectMenu();
        if (menu == 0)
            break;
        if (menu == 1 || menu == 3 || menu == 4)
            if (count == 0){
                printf(" 데이터가 없습니다.\n");
                continue;
            }

        if (menu == 2)
        {
            count += createTable(&p[index++]);
        }
        else if (menu == 1)
        {
            listTable(p, index);
        }
        else if (menu == 3)
        {
            int no = selectTableNo(p, index);
            if (no > 0)
                updateTable(&p[no - 1]);
            else
                printf("취소됨!\n");
        }
        else if (menu == 4)
        {
            int no = selectTableNo(p, index);
            if (no > 0)
            {
                printf("정말로 삭제하시겠습니까?(삭제:1) ");
                int delok;
                scanf("%d", &delok);
                if (delok == 1)
                {
                    if (deleteTable(&p[no - 1]))
                        count--;
                }
            }
        }
        else if (menu == 5)
        {
            saveTable(p, index);
        }

        else if (menu == 6)
        {
            searchTable(p, index);
        }
    }
        printf("종료됨!\n");
        return 0;
}