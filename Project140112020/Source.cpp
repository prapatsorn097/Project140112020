#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct phonebook getData();
void printData(struct phonebook);

struct phonebook {
    char name[11];
    char tel_num[11];
};

int main()
{
    int i = 0, num = 2;
    char tmp[10];
    struct phonebook phb[5];
    system("cls");

    do {
        printf("How many number do you want to add tel.no (Maximum:5) : ");
        gets_s(tmp);
    } while (atoi(tmp) < 0 || atoi(tmp) > 5);
    num = atoi(tmp);
    printf("Please add data\n");
    for (i = 0; i < num; i++) {
        phb[i] = getData();
    }
    printf("\nData list\n");
    for (i = 0; i < num; i++) {
        printData(phb[i]);
    }
    printf("Already Add !!!\n");
    _getch();
}

struct phonebook getData() {
    struct phonebook phone;

    printf("Enter name : ");
    gets_s(phone.name);
    printf("Enter tel number : ");
    gets_s(phone.tel_num);
    return phone;
}

void printData(struct phonebook pb) {
    printf("%s\t%s\n", pb.name, pb.tel_num);
}