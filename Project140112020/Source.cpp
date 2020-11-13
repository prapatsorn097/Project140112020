#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct book getData();
void printData(struct book);

struct book {
    char name[11];
    char age[11];
};

int main()
{
    int i = 0, num = 2;
    char tmp[10];
    struct book age[10];
    system("cls");

    do {
        printf("How many name do you want to know age (Maximum:10) : ");
        gets_s(tmp);
    } while (atoi(tmp) < 0 || atoi(tmp) > 10);
    num = atoi(tmp);
    printf("Please add data\n");
    for (i = 0; i < num; i++) {
        age[i] = getData();
    }
    printf("\nData list\n");
    for (i = 0; i < num; i++) {
        printData(age[i]);
    }
    _getch();
}

struct book getData() {
    struct book input;

    printf("Enter name : ");
    gets_s(input.name);
    printf("Enter age : ");
    gets_s(input.age);
    return input;
}

void printData(struct book input) {
    printf("%s\t%s\n", input.name, input.age);
}