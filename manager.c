#include "manager.h"


void saveTable(Table p[], int count){
    FILE *fp = fopen("Table.txt", "wt"); ///write 모드로 스트림을 생성한 파일 구조체 

    for (int i = 0; i < count; i++)
    {
        if (p[i].guestNumber == -1)
            continue;
            fprintf(fp, "%d %d \n", p[i].guestNumber, p[i].tableSum);
    }

    if (fp == NULL)
        printf("파일 저장에 실패했습니다! \n");

    else
    {
        fclose(fp);
        printf("=>저장됨! \n");
    }
}



int loadTable(Table *p){

    int i = 0; 
    FILE *fp = fopen("Table.txt", "rt");

    if (fp == NULL)
    {
        printf(" \n 파일 없음 \n \n");
        return 0;
    }

    for (; i < 100; i++)
    {
        if (feof(fp))
            break;

    fprintf(fp, "%d %d", &p[i].guestNumber, &p[i].tableSum);
    
   
    }
    i--;
    fclose(fp);
    printf("=> 로딩 성공! \n");

    return i;

}

void searchTable(Table p[], int count){
    int scn = 0, num = 0; //  num -> 검색할 데이터를 선택하기 위한 변수, scn -> 찾은 데이터의 개수를 저장하기위한 변수
    char search[20];// search -> 찾기위한 데이터를 저장하기위한 문자열 변수
    
    printf("검색할 종류를 선택하세요. \n");
    printf("1.인원수 \n");
    printf("2.이용금액 \n");
    
    scanf("%d" , &num);

    switch (num)
    {
    case 1:
        printf("검색할 인원수는? ");
        scanf("%d", search);
        break;
    case 2:
        printf("검색할 이용금액은? ");
        scanf("%d", search);
        break;
  
   
    

    for (int i = 0; i < count; i++)
    {

        if (p[i].guestNumber == -1)
            continue;

        switch (num)
            {
            case 1:
                if (p[i].guestNumber == search)
                {
                    printf("%d ", i + 1);
                    readTable(p[i]);
                    scn++;
                }
                break;
            case 2:
                if (p[i].tableSum == search)
                {
                    printf("%d ", i + 1);
                    readTable(p[i]);
                    scn++;
                }
                break;  
            }

    }
    if (scn == 0)
        printf(" => 검색된 데이터 없음! \n");

    printf("\n");
    getchar();
}