
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
void renew(char t)
{
    int cc;
    long int reprice;
    long int triprice;
    long int total;
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
    cc=in.cc;
    if(cc==0)
    {
        reprice=0;
    }
    else if(cc<=125)
    {
         reprice=2750;
    }
    else if(cc<=250)
    {
        reprice=4400;
    }
    else if(cc<=400)
    {
         reprice=8800;
    }
    else if(cc<=800)
    {
        reprice=16500;
    }
    else if(cc<=1000)
    {
        reprice=20900;
    }
    else if(cc<=1500)
    {
         reprice=23100;
    }
    else if(cc<=2000)
    {
        reprice=25300;
    }
    else if(cc<=2500)
    {
        reprice=35200;
    }
    else if(cc<=2900)
    {
        reprice=40700;
    }
    else
    {
        reprice=58300;
    }

    if(cc=0)
    {
        reprice=0;
    }
    else if(cc<151)
    {
         triprice=1707;
    }
    else if(cc<250)
    {
        triprice=1933;
    }
    else if(cc<801)
    {
        triprice=2159;
    }
    else if(cc<1001)
    {
        triprice=7357;
    }
    else if(cc<1600)
    {
        triprice=8487;
    }
    else
    {
        triprice=10747;
    }

    printf("\n\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                        Price For Renew                                 %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf("\n\n\n\t\t\t\t\t\t\t\tVehicle Number::%c-%c-%s",in.type,t,in.vehicle);
    printf("\n\t\t\t\t\t\t\t\tName::%s",in.name);
    printf("\n\t\t\t\t\t\t\t\tVehicle::%s",in.obj);
    printf("\n\t\t\t\t\t\t\t\tcc::%d",in.cc);

    printf("\n\n\t\t\t\t\t\t\t\t\t RENEW FEE :::%ld",reprice);
    printf("\n\t\t\t\t\t\t\t\t\tThird party insurance FEE :::%ld",triprice);
    total=reprice+triprice;
    printf("\n\n\t\t\t\t\t\t\t\t\t Total cost each year:: %ld",total);
    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    getch();
    main();
}
