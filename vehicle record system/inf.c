#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define SCREEN_CLS system("cls");\
                    printf("\n\n\t\t\t\t\t\t\t\t    VEHICLE RECORD BOOSTER");\
                    printf("\n\t\t\t\t\t\t\t\t           C'Project'      ");

//all the functions
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
int inf(char t)
{
    fflush(stdin);
    printf("\n\n\n\n\n \t\t\t\t\t\t\t ENTER VEHICLE NO:: ");
    scanf("%s",&in.vehicle);
    SCREEN_CLS;
     strcpy(in.path,"RECORD\\");
    switch (in.type)
    {
    case 'T':
        strcat(in.path,"Two\\");
        break;
    case 'F':
        strcat(in.path,"Four\\");
        break;
    case 'H':
        strcat(in.path,"Heavy\\");
        break;
    case 'E':
        strcat(in.path,"Ambulance\\");
        break;
    default:
        break;
    }
     switch (t)
    {
    case 'p':
        strcat(in.path,"Private\\");
        break;
    case 'q':
        strcat(in.path,"Public\\");
        break;
    case 'g':
        strcat(in.path,"Government\\");
        break;
    case 'n':
        strcat(in.path,"Ncv\\");
        break;
    case 't':
        strcat(in.path,"Tourist\\");
        break;
    default:
        break;
    }
    strcat(in.path,in.vehicle);
    FILE*fp;
    fp=fopen(in.path,"rb");
    if(fp==NULL)
    {
        SCREEN_CLS
        printf("\n\t NO file");
        getch();
        return 0;
        }

    fread(&in,sizeof(in),1,fp);
    fclose(fp);
    displayinfo(t);
    getch();
    return 0;

}
