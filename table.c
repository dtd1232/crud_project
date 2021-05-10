#include <string.h>
#include <ctype.h>
#include "table.h"

int createTable(Table *p){
    while(1){

    printf("이용자 숫자는? ");
    scanf("%d", &p->guestNumber);
    
    if(!isdigit(&p->guestNumber)){
        printf("잘못 입력하셨습니다. 다시 입력해주십시오. \n");
        continue;
    }

    printf("총 이용 금액은? ");
    scanf("%d", &p->tableSum);
    
    if(!isdigit(&p->tableSum)){
        printf("잘못 입력하셨습니다. 다시 입력해주십시오. \n");
        continue;
    }
    break;
    }

    return 1;
}

void printTableFormat(){
    printf("테이블번호    인원수   총 이용 금액\n");
    printf("========================================================\n");
}

int readTable(Table p){
    printf("%7d 명 %8d 원\n", p.guestNumber, p.tableSum);
}


void listTable(Table p[], int count){

    printTableFormat();

    for(int i =0 ; i<count; i++){
        if(p[i].guestNumber == -1)
            continue;
        printf("%d 번 테이블", i+1);
        readTable(p[i]);
    }
    printf("\n");
}



int selectTableNo(Table p[], int count){
    int no;
    listTable(p, count);
    printf("번호는 (취소 :0)? ");
    scanf("%d", &no);
    return no;
}


int updateTable(Table* p){

    printf("인원수는? ");
    scanf("%d", &p->guestNumber);

    printf("주문 가격은? ");
    scanf("%d", &p->tableSum);

    printf("==> 수정성공! \n");
    
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
    printf("*** 테이블 관리 시스템 ***\n");
    printf("1. 테이블조회\n");
    printf("2. 테이블추가\n");
    printf("3. 테이블수정\n");
    printf("4. 테이블삭제\n");
    printf("5. 테이블저장\n");
    printf("6. 테이블 인원수 검색\n");
    printf("6. 테이블 인원수 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);

    return menu;
}
