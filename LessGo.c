#include<stdio.h>
#include<conio.h>
#include<string.h>

void signup();
void information();
void bookingdetails();
void deleterecord();
void exiting();
void book();

char name[50],email[25],password[50],phone[11],ch,search[50],del[50];
int count,confirm=0;
int menu,opt,route,bill,seats=0;
int Malircant=50,Safoora=50,NED=50,Safaripark=50,Nipa=100,Expocenter=100,Kashmir=100,Mazar=100;
int Drigh=50,Karsaz=50,Balochpull=50,Lal=50,Ftc=100,Armygrave=100,National=100,Ittehad=100;
int Nagan=50,Fivestar=50,Abbasi=50,Eidgah=50,Golimar=100,Lasbella=100,Guru=100,MAjinnah=100;
int main()
{

    while(1)
    {
        system("cls");
        printf("\n\t\t\t\a^^^Welcome To LessGo Bus Service^^^\n\n\tSELECT AN OPTION: \n\t\tPRESS [1] FOR SIGN UP\n\t\tPRESS [2] FOR INFORMATION\n\t\tPRESS [3] FOR CHECK BOOKING DETAILS\n\t\tPRESS [4] FOR DELETE RECORD\n\t\tPRESS [5] FOR EXIT \n");
        printf("\n\tEnter Option no: ");
        scanf("%d",&menu);

        switch(menu)
        {
        case 1:
            signup();
            break;
        case 2:
            information();
            break;
        case 3:
            bookingdetails();
            break;
        case 4:
            deleterecord();
            break;
        case 5:
            exiting();
            return 0;
            break;
        default:
            printf("\a\n\t*INVALID OPTION*\n");
        }
    }
}

void signup()
{
    printf("\n\t>Time: %s\t\t\t\t\t",__TIME__);
    printf(">Date: %s\n\n",__DATE__);
    printf("\nEnter your username(no-spaces): ");
    scanf("%s",name);
    printf("\nEnter your 11 digits phone number: ");
    scanf("%s",phone);
    printf("\nEnter your email: ");
    scanf("%s",email);
    printf("\nEnter Your Password: ");
    scanf("%s",password);
    system("cls");

    book();
}

void book()
{
    printf("\n\t\t**ROUTE #1 (MALIR CANTT TO MAZAR E QAID**)\n\n\t\t1.MALIR CANTT             RS 50\n\t\t2.SAFOORA                 RS 50\n\t\t3.NED UNIVERSITY          RS 50\n\t\t4.SAFARI PARK             RS 50\n\t\t5.N.I.P.A                RS 100\n\t\t6.EXPO CENTER            RS 100\n\t\t7.KASHMIR ROAD           RS 100\n\t\t8.MAZAR E QAID           RS 100\n\n");
    printf("\n\t\t**ROUTE #2 (DRIGH ROAD TO ITTEHAD COMMERCIAL**)\n\n\t\t9.DRIGH ROAD                  RS 50\n\t\t10.KARSAZ                     RS 50\n\t\t11.BALOCH PULL                RS 50\n\t\t12.LAL KOTHI                  RS 50\n\t\t13.FTC                       RS 100\n\t\t14.ARMY GRAVEYARD            RS 100\n\t\t15.NATIONAL MEDICAL CENTER   RS 100\n\t\t16.ITTEHAD COMMERCIAL        RS 100\n\n");
    printf("\n\t\t**ROUTE #3 (NAGAN CHORANGI TO MA JINNAH ROAD**)\n\n\t\t17.NAGAN CHORANGI             RS 50\n\t\t18.5-STAR CHORANGI            RS 50\n\t\t19.ABBASI SHAHEED HOSPITAL    RS 50\n\t\t20.EID GAH GROUND             RS 50\n\t\t21.GOLIMAR                   RS 100\n\t\t22.LASBELLA                  RS 100\n\t\t23.GURU MANDIR               RS 100\n\t\t24.M.A JINNAH ROAD           RS 100\n\n");
    printf("Choose Your Route: ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Malircant;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1 )
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: MALIR CANTT.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
        else
            exiting();

        break;
    case 2:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Safoora;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
         scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: SAFOORA.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO OF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
    case 3:
         printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
         printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
         scanf("%d",&seats);

        bill=seats*NED;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: NED UNIVERSITY.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 4:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Safaripark;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: SAFARI PARK.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 5:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Nipa;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: N.I.P.A\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
        else
            exiting();

        break;
        case 6:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Expocenter;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: EXPO CENTER.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 7:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Kashmir;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: KASHMIR ROAD.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 8:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Mazar;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: MAZAR E QUIAD.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 9:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Drigh;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: DRIGH ROAD.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
    case 10:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Karsaz;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: KARSAZ.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO OF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();


        break;
    case 11:
         printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
         printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Balochpull;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: BALOCHPULL.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 12:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Lal;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: LAL KOTHI.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 13:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Ftc;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: FTC.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 14:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Armygrave;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: ARMY GRAVEYARD.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 15:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*National;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: NATIONAL MEDUCAL CENTER.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 16:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Ittehad;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: ITTEHAD COMMERCIAL.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

 case 17:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Nagan;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: NAGAN CHORANGI.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
    case 18:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Fivestar;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: FIVE STAR CHORANGI.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO OF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
    case 19:
         printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
         printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Abbasi;
        if(seats>3)
        {
            bill=bill-50;
        }
         printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: ABBASI SHAHEED HOSPITAL.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 20:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Eidgah;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: EID GAH GROUND.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 21:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Golimar;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: GOLIMAR\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 22:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Lasbella;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: LASBELLA.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;

        case 23:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*Guru;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: GURU MANDIR.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO oF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;
        case 24:
        printf("\n\n**DISCOUNT OF 50-Rs FOR BOOKING OF MORE THEN 3 SEATS**");
        printf("\nHOW MANY SEATS YOU WANT TO BUY: ");
        scanf("%d",&seats);

        bill=seats*MAjinnah;
        if(seats>3)
        {
            bill=bill-50;
        }
        printf("YOUR TOTAL AMOUNT IS: %d\nCONFIRM BOOKING? **1 for YES or 2 for NO** \n",bill);
        scanf("%d",&confirm);

        if(confirm == 1)
        {
            FILE *fptr;
            strcat(name,".txt");

            fptr= fopen(name,"w");

            fputs("YOUR NAME IS: ",fptr);
            fputs(name,fptr);
            fputs("\n",fptr);
            fputs("YOUR EMAIL IS: ",fptr);
            fputs(email,fptr);
            fputs("\n",fptr);
            fputs("YOUR PASSWORD IS: ",fptr);
            fputs(password,fptr);
            fputs("\n",fptr);
            fputs("YOUR PHONE NUMBER IS: ",fptr);
            fputs(phone,fptr);
            fputs("\n",fptr);

            fputs("YOUR DESTINATION IS: M.A JINNAH ROAD.\n",fptr);
            fprintf(fptr,"TOTAL AMOUNT = %d\n",bill);
            fprintf(fptr,"NO OF SEATS = %d\n",seats);

            fclose(fptr);
            printf("\a\nTICKETS CONFIRMED!!!\n");
            system("pause");
        }
         else
            exiting();

        break;


    default:
        printf("INVALID INPUT!");
    }
}
void information()
{
    printf("\n\t>Time: %s\t\t\t\t\t",__TIME__);
    printf(">Date: %s\n\n",__DATE__);
    printf("\n\t\t**ROUTE #1 (MALIR CANTT TO MAZAR E QAID**)\n\n\t\t1.MALIR CANTT             RS 50\n\t\t2.SAFOORA                 RS 50\n\t\t3.NED UNIVERSITY          RS 50\n\t\t4.SAFARI PARK             RS 50\n\t\t5.N.I.P.A                RS 100\n\t\t6.EXPO CENTER            RS 100\n\t\t7.KASHMIR ROAD           RS 100\n\t\t8.MAZAR E QAID           RS 100\n\n");
    printf("\n\t\t**ROUTE #2 (DRIGH ROAD TO ITTEHAD COMMERCIAL**)\n\n\t\t9.DRIGH ROAD                  RS 50\n\t\t10.KARSAZ                     RS 50\n\t\t11.BALOCH PULL                RS 50\n\t\t12.LAL KOTHI                  RS 50\n\t\t13.FTC                       RS 100\n\t\t14.ARMY GRAVEYARD            RS 100\n\t\t15.NATIONAL MEDICAL CENTER   RS 100\n\t\t16.ITTEHAD COMMERCIAL        RS 100\n\n");
    printf("\n\t\t**ROUTE #3 (NAGAN CHORANGI TO MA JINNAH ROAD**)\n\n\t\t17.NAGAN CHORANGI             RS 50\n\t\t18.5-STAR CHORANGI            RS 50\n\t\t19.ABBASI SHAHEED HOSPITAL    RS 50\n\t\t20.EID GAH GROUND             RS 50\n\t\t21.GOLIMAR                   RS 100\n\t\t22.LASBELLA                  RS 100\n\t\t23.GURU MANDIR               RS 100\n\t\t24.M.A JINNAH ROAD           RS 100\n\n");

    system("pause");
}


void bookingdetails()
{
    FILE *fptr;
    printf("\n\t>Time: %s\t\t\t\t\t",__TIME__);
    printf(">Date: %s\n\n",__DATE__);
    printf("ENTER USERNAME TO SEARCH: ");
    scanf("%s",&search);
    strcat(search,".txt");
    fptr = fopen(search,"r");

    system("cls");
    printf("\n\n");
    while ((ch=getc(fptr)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);

    system("pause");


}

void deleterecord()
{
    printf("\n\t>Time: %s\t\t\t\t\t",__TIME__);
    printf(">Date: %s\n\n",__DATE__);
    printf("Enter USERNAME to delete: ");
    scanf("%s",&del);

    strcat(del,".txt");
    count=remove(del);

    if(count == 0)
    {
        printf("\n\a**FILE IS DELETED!!!!!**\n");
    }
    else{
        printf("\n\a**FILE NOT FOUND!!!!**\n");
    }
    system("pause");

}

void exiting()
{
    printf("\n\n\a\t***GOOD BYE! HAVE A NICE ROADTRIP***\n\n");
}
