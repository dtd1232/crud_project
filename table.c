#include <string.h>
#include <ctype.h>
#include "table.h"

int createTable(Table *p){
    while(1){

    printf("�̿��� ���ڴ�? ");
    scanf("%d", &p->guestNumber);
    
    if(!isdigit(&p->guestNumber)){
        printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ֽʽÿ�. \n");
        continue;
    }

    printf("�� �̿� �ݾ���? ");
    scanf("%d", &p->tableSum);
    
    if(!isdigit(&p->tableSum)){
        printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ֽʽÿ�. \n");
        continue;
    }
    break;
    }

    return 1;
}

void printTableFormat(){
    printf("���̺��ȣ    �ο���   �� �̿� �ݾ�\n");
    printf("========================================================\n");
}

int readTable(Table p){
    printf("%7d �� %8d ��\n", p.guestNumber, p.tableSum);
}


void listTable(Table p[], int count){

    printTableFormat();

    for(int i =0 ; i<count; i++){
        if(p[i].guestNumber == -1)
            continue;
        printf("%d �� ���̺�", i+1);
        readTable(p[i]);
    }
    printf("\n");
}



int selectTableNo(Table p[], int count){
    int no;
    listTable(p, count);
    printf("��ȣ�� (��� :0)? ");
    scanf("%d", &no);
    return no;
}


int updateTable(Table* p){

    printf("�ο�����? ");
    scanf("%d", &p->guestNumber);

    printf("�ֹ� ������? ");
    scanf("%d", &p->tableSum);

    printf("==> ��������! \n");
    
    return 1;

}

int deleteTable(Table* p){
    p->guestNumber = -1;
    p->tableSum = -1;
    
    return 1;
}

int selectMenu()
{
    int menu;
    printf("*** ���̺� ���� �ý��� ***\n");
    printf("1. ���̺���ȸ\n");
    printf("2. ���̺��߰�\n");
    printf("3. ���̺����\n");
    printf("4. ���̺����\n");
    printf("5. ���̺�����\n");
    printf("6. ���̺� �ο��� �˻�\n");
    printf("6. ���̺� �ο��� �˻�\n");
    printf("0. ����\n\n");
    printf("=> ���ϴ� �޴���? ");
    scanf("%d", &menu);

    return menu;
}
