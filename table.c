#include "table.h"

int createTable(Table *p){
	printf("이용자 숫자는? ");
	scanf("%d", &p->guestNumber);
	printf("총 이용 금액은? ");
	scanf("%d", &p->tableSum);
	
	return 1;
}

void readTable(Table p){
	printf("%d, %d\n", p.guestNumber, p.tableSum);
}

int updateTable(Table *p){
	printf("이용자 숫자는? ");
	scanf("%d", &p->guestNumber);
	printf("총 이용 금액은? ");
	scanf("%d", &p->tableSum);
	printf("수정 성공!\n");

	return 1;
}

int deleteTable(Table *p){
	p->guestNumber = -1;
	p->tableSum = -1;
	return 1;
}

int selectMenu(){
	int menu;
	printf("*** 테이블 관리 시스템 ***\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);

	return menu;
}

void listTable(Table *p, int count){
	printf("No Guest Sum\n");
	printf("============\n");
	for(int i = 0; i <count; i++){
		if(p[i].guestNumber == -1) continue;
		printf("%2d", i+1);
		readTable(p[i]);
	}
}

int selectTableNo(Table *p, int count){
	listTable(p, count);
	int no;
	printf("번호는 (취소: 0)? ");
	scanf("%d", &no);
	return no;
}
