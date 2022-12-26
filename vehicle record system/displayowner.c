#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define SCREEN_CLS system("cls");\
                    printf("\n\n\t\t\t\t\t\t\t\t    VEHICLE RECORD BOOSTER");\
                    printf("\n\t\t\t\t\t\t\t\t           C'Project'      ");

void gotoxy();
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

void displayowner(char t)
{
    int i,j;
    char some[15]="\0";
    for(i=45;i<=130;i++)
    {
        gotoxy(i,5);
        printf("%c",205);
    }
      for(j=6;j<=33;j++)
    {
        gotoxy(44,j);
        printf("%c",186);
        gotoxy(131,j);
        printf("%c",186);
    }
     for(i=45;i<=130;i++)
    {
        gotoxy(i,33);
        printf("%c",205);
    }
    switch (t)
    {
    case 'p':
        strcpy(some,"Private");
        break;
    case 'q':
        strcpy(some,"Public");
        break;
    case 'g':
        strcpy(some,"Government");
        break;
    case 'n':
        strcpy(some,"Ncv");
        break;
    case 't':
        strcpy(some,"Tourist\\");
        break;
    default:
        break;
    }
    gotoxy(44,5);
    printf("%c",201);
    gotoxy(131,5);
    printf("%c",187);
    gotoxy(44,33);
    printf("%c",200);
    gotoxy(131,33);
    printf("%c",188);
    gotoxy(70,7);
    printf("OWNER TRANSFORMATION (%s)",some);
    for(i=45;i<=130;i++)
    {
        gotoxy(i,9);
        printf("%c",205);
    }
    gotoxy(44,9);
    printf("%c",204);
    gotoxy(131,9);
    printf("%c",185);
    gotoxy(63,11);
    printf("VEHICLE NO.   :  %s",in.vehicle);
    gotoxy(52,13);
    printf("TYPE           :    %c",in.type);
    gotoxy(52,14);
    printf("VEHICLE        :    %s",in.obj);
    gotoxy(105,14);
    printf("STATUS      :   %c",in.status);
    gotoxy(52,15);
    printf("BRAND          :    %s",in.brand);
    gotoxy(52,16);
    printf("COLOR          :    %s",in.color);
    gotoxy(52,17);
    printf("MANU. DATE     :    %s",in.manudate);
    gotoxy(52,18);
    printf("ENGINE NO      :    %s",in.engineno);
    gotoxy(52,19);
    printf("CASS NO        :    %s",in.cassno);
    gotoxy(105,19);
    printf("FUEL TYPE    :   %c",in.fuel);
    gotoxy(52,20);
    printf("CC             :    %d",in.cc);
    for(i=45;i<=130;i++)
    {
        gotoxy(i,22);
        printf("%c",205);
    }
     gotoxy(44,22);
    printf("%c",204);
    gotoxy(131,22);
    printf("%c",185);
    gotoxy(77,24);
    printf("OWNER INFORMATION");
    gotoxy(52,26);
    printf("NAME          :                                   (%s)",in.name);
    gotoxy(52,27);
    printf("CITIZENSHIP N0 :                                  (%s)",in.czno);
    gotoxy(52,28);
    printf("DATE OF BIRTH  :                                  (%s)",in.dob);
    gotoxy(52,29);
    printf("ADDRESS        :                                  (%s)",in.add);
    gotoxy(52,30);
    printf("PHONE NUMBER   :                                  (%s)",in.pn);
    gotoxy(52,31);
    printf("Gender         :                                  (%c)",in.ge);
    gotoxy(135,29);
    printf("Gender:");
    gotoxy(135,30);
    printf("M for male");
    gotoxy(135,31);
    printf("F for Female");
    gotoxy(135,14);
    printf("Status:");
    gotoxy(135,15);
    printf("R for Running");
    gotoxy(135,16);
    printf("L for Lost");
    gotoxy(25,26);
    printf("Fuel type::");
    gotoxy(25,27);
    printf("P for petrol");
    gotoxy(25,28);
    printf("D for disel");
    /*gotoxy(135,29);
    printf("Engine no: XXXXXXXXXXX");
    gotoxy(135,30);
    printf("Cass no  : XXXXXXX");
    gotoxy(25,28);
    printf("For cc::");
    gotoxy(25,29);
    printf("T:: 125<cc>1000");
    gotoxy(25,30);
    printf("F:: 1000<cc>5000");
    gotoxy(25,31);
    printf("H:: 1000<cc");
    gotoxy(25,32);
    printf("E::  Put 0");*/
    gotoxy(52,34);






}
