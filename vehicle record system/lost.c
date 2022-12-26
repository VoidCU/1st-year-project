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
void lost(char);                  // to store lost vehicle
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
void lost(char t)
{
    int i=1;
    SCREEN_CLS;
     char vn[8];
     char ch;
    fflush(stdin);
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

    strcat(in.path,"lost.txt");
    FILE*fp;
    fp=fopen(in.path,"r");
    printf("\n\n\n\n\t\t\tLost vehicles::::\n");

     if(fp==NULL)
     {
       printf("\n\t\tNo vehicles are lost\n\n");
     }


    while(fgets(vn,10,fp)!=NULL)
    {
        printf("\t\t%d. %s",i,vn);
        i++;
    }
    fclose(fp);
    printf("\n\t\t\t Total lost::    %d",i-1);



printf("\n\n\n\t\tPress 1 to add lost vehicles\n\t\tPress 0 to return to main menu");
    ch=getch();
   switch (ch)
   {
   case '1':
       SCREEN_CLS;
      printf("\nEnter Vehicle no: ");
      gets(vn);
       strcpy(in.path,"\0");
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
    strcat(in.path,vn);
    FILE *fp;
    fp=fopen(in.path,"rb");
    if(fp==NULL)
    {
        SCREEN_CLS
        printf("\n\t NO file");
        getch();
        main();
        }
        fread(&in,sizeof(in),1,fp);


        if(in.status=='L');
        {
            printf("\n\nAlready recorded in Lost file\n \t\t Press any key to return to menu");
            getch();
            main();
        }
        displayinfo(t);
      fclose(fp);
    gotoxy(70,33);
            printf("Press Ctrl + S to Add in lost vehicle");
            gotoxy(70,35);
            printf("Press Any other key to cancel");
            ch = getkey();
            if(ch == 19)
        {
             strcpy(in.path,"\0");
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
            strcat(in.path,vn);
            fp=fopen(in.path,"wb+");
            in.status='L';
            fwrite(&in, sizeof(in), 1, fp);
            fclose(fp);
             strcpy(in.path,"\0");
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
        strcat(in.path,"lost.txt");
        fp=fopen(in.path,"a");

        fputs(vn,fp);
        fputs("\n",fp);
        fclose(fp);
        lost(t);
        }
        else
            {
                SCREEN_CLS;
                main();
            }
      break;

   case '0':
    main();
    break;

   default:
    lost(t);
    break;
   }


    getch();
}
