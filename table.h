#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLE_NUMBER 10

typedef struct{
	int guestNumber;
	int tableSum;
} Table;

int createTable(Table *p);

void printTableFormat();

int readTable(Table p);

void listTable(Table p[], int count);

int selectTableNo(Table p[], int count);

int updateTable(Table *p);

int deleteTable(Table *p);

int selectMenu();
