#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define SCREEN_CLS system("cls");\
                    printf("\n\n\t\t\t\t\t\t\t\t    VEHICLE RECORD BOOSTER");\
                    printf("\n\t\t\t\t\t\t\t\t           C'Project'      ");


void gotoxy(short int,short int);   // to go to that coordinate of console
int change(char);                   // change the owner of vehicle
int reg(char);                      //register a new vehicle
int inf(char);                      //shows information of that vehicle no
int getkey();                       //to get a fixed character
void displayinfo(char);                 //display for inf function
void displayowner(char);                //display for change function
void menu();                        //main table
void display(char);                     //display for reg function
int choose(char);                   //choose of vehicle
void modifydis(char);                   //display for modify function
int modify(char);                   //modify the errors
void renew(char);                   //to check the cost of that vehicle a year
void lost(char);

struct info
{
    char vehicle[11];
    char name[50];
    char czno[15];
    char dob[11];
    char add[80];
    char pn[15];
    char type;
    char brand[15];
    char color[10];
    char manudate[12];
    char ge;
    char lastno[11];
    char status;
    char path[30];
    char engineno[12];
    char cassno[10];
    int cc;
    char obj[15];
    char fuel;

}in;
int choose2(char a)
{
    int i;
    char ch;
    char t=0;
        printf("\n\n\n\n\n");
    printf("\n\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                   VEHICLE TYPES                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);

    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                         1  Private vehicle:                                            %c",186,186);
    printf("\n\t\t\t\t  %c                         2  Public vehicle:                                             %c",186,186);
    printf("\n\t\t\t\t  %c                         3  Government vehicle:                                         %c",186,186);
    printf("\n\t\t\t\t  %c                         4  National Corporation vehicle:                               %c",186,186);
    printf("\n\t\t\t\t  %c                         5  Tourist vehicle:                                            %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                           0 Exit                                                       %c",186,186);
    printf("\n\t\t\t\t  %c                  _________________________________________                             %c",186,186);
    printf("\n\t\t\t\t  %c                           Choose (1/2/3/4/5/0)                                         %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);

    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    printf("\n\n\n\n");
    gotoxy(102,30);
    ch =getch();
    switch (ch)
    {
        case '1':
            t='p';
            break;
        case '2':
            t='q';
            break;
        case '3':
            t='g';
            break;
        case '4':
            t='n';
            break;
        case '5':
            t='t';
            break;
        case '0':
            SCREEN_CLS;
            choose(a);
            main();
            break;
        default:
            SCREEN_CLS;
            choose2(a);
            break;
    }
    SCREEN_CLS;
    switch (a)
    {
    case '1':
     i=reg(t);
        break;
    case '2':
        i=inf(t);
        break;
    case '3':
        i=change(t);
        break;
    case '4':
        renew(t);
        break;
    case '5':
        lost(t);
        break;
    case '6':
        i=modify(t);
        break;
    }
    return i;
}


