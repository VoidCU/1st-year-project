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
int choose(char);                   //choose of vehicle category
int choose2(char);                    //choose of vehicle type
void modifydis(char);                   //display for modify function
int modify(char);                   //modify the errors
void renew(char);                   //to check the cost of that vehicle a year
void lost(char);                    // to store lost vehicle
void fullscreen()          //to make program full screen
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
struct info       //structure containing all the variable
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

int main()
{
    static int y=0;
    if(y==0)
    {
        fullscreen();
        y++;
    }
    fflush(stdin);
    char x;
    in.vehicle[10]=0;
    in.name[50]=0;
    in.czno[15]=0;
    in.dob[11]=0;
    in.add[80]=0;
    in.pn[15]=0;
    in.type=0;
    in.brand[15]=0;
    in.color[10]=0;
    in.manudate[12]=0;
    in.ge=0;
    in.lastno[11]=0;
    in.status=0;
    in.path[30]=0;
    in.engineno[12]=0;
    in.cassno[10]=0;
    in.cc=0;
    in.fuel=0;
    SCREEN_CLS;
    menu();
    x=getch();
    SCREEN_CLS;

   switch (x)
    {
    case '1':
        x=choose('1');
        if(x==0)
        {
            SCREEN_CLS;
            main();
        }
        break;

    case '2':
        x=choose('2');
        if(x==0)
        {SCREEN_CLS;
            main();
        }
        break;

    case '3':
        x=choose('3');
        if(x==0)
        {SCREEN_CLS;
            main();
        }
        break;

   case '4':
       x=choose('4');
        if(x==0)
        {SCREEN_CLS;
            main();
        }
        break;
        break;

    case '5':
        x=choose('5');
        if(x==0)
        {SCREEN_CLS;
            main();
        }
        break;
        break;

    case '6':
        x=choose('6');
        if(x==0)
        {SCREEN_CLS;
            main();
        }
        break;
    case '0':
        exit(0);
        break;

    default:
        SCREEN_CLS;
        main();
        break;

}
return 0;
}

