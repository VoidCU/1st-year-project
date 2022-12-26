#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define SCREEN_CLS system("cls");\
                    printf("\n\n\t\t\t\t\t\t\t\t    VEHICLE RECORD BOOSTER");\
                    printf("\n\t\t\t\t\t\t\t\t           C'Project'      ");
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

int getkey()
{
    int ch;
    ch = getch();
    if(ch == 0 || ch == 224)
    {
        ch = getch();
        return ch;
    }
    return ch;
}
