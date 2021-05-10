#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLE_NUMBER 10

typedef struct{
	int guestNumber;
	int tableSum;
} Table;

int createTable(Table *p);
void readTable(Table p);
int updateTable(Table *p);
int deleteTable(Table *p);
int selectMenu();
void listTable(Table *p, int count);
int selectTableNo(Table *p, int count);
