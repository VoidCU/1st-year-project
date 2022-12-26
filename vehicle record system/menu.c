#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
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


void menu()
{

    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t%c  WELCOME  %c",204,185);
    printf("\n\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                         MENU                                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf("\n\t\t\t\t  %c                                        List:                                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Register New Vehicle                       >>>>>>> 1                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Information                                >>>>>>> 2                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Owner's Transformation                     >>>>>>> 3                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Renew Price                                >>>>>>> 4                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Lost Vehicle                               >>>>>>> 5                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c         Modify mistake                             >>>>>>> 6                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c          Exit                                      >>>>>>> 0                           %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                _________________________________________                               %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                     Choose From (1/2/3/4/5/6/0)                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c                                                                                        %c",186,186);
    printf("\n\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    FILE*sp;
    printf("\n\n\t\tLast Recorded\t\t ||Private\t||Public\t||Government \t||NCR   \t||Tourist\t");
    printf("\n\t\tTwo wheeler:\t");
    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Two\\Private\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
        printf("\tT-P-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Two\\Public\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
        printf("\tT-P-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Two\\Government\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tT-G-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Two\\Ncv\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tT-N-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Two\\Tourist\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tT-T-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");




    printf("\n\t\tFour wheeler:\t");
    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Four\\Private\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
      printf("\tF-P-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Four\\Public\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tF-Q-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Four\\Government\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tF-G-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Four\\Ncv\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tF-N-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Four\\Tourist\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
        printf("\tF-T-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");





    printf("\n\t\tHeavy Vehicle:\t");
    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Heavy\\Private\\last.txt","r");

    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tH-P-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Heavy\\Public\\last.txt","r");

    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tH-Q-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Heavy\\Government\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
        if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tH-G-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Heavy\\Ncv\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tH-N-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Heavy\\Tourist\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tH-T-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");




    printf("\n\t\tother vehicle:\t");
    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Ambulance\\Private\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tE-P-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Ambulance\\Public\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tE-Q-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Ambulance\\Government\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tE-G-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Ambulance\\Ncv\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tE-N-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");
    sp=fopen("RECORD\\Ambulance\\Tourist\\last.txt","r");
    fread(&in.lastno,sizeof(in.lastno),1,sp);
    if(sp==NULL)
    {
        printf("\t NO record");
    }
    else
    {
       printf("\tE-T-%s",in.lastno);
    }
    fclose(sp);

    strcpy(in.lastno,"");





    printf("\n\n\n\n");


}
