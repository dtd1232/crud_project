#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLE_NUMBER 20

typedef struct
{   
    int guestNumber;
    int tableSum;
    } Table;


int createTable(Table *p);

void listTable(Table p[], int count);

int selectTableNo(Table p[], int count);

int updateTable(Table* p);

int deleteTable(Table* p);

void saveTable(Table p[], int count);

int loadTable(Table *p);

int readTable(Table p);

void searchTable(Table p[], int count);

void printTableFormat();

int selectMenu();
