#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>//  header file for gotoxy
FILE *fp;
FILE *pf;
FILE *fp2;
FILE *r;
void customer();
void shopkeeper();
void Add();
void Delet();
void View_s();
void Purchase();
void Display_order();
void Bill();
void start();
void sView_s();
void add2();
            struct element
{
char name[50];
int price;
int STOCK ;
int d;
int m;
int y;
}fruit,rp;
  COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
            void gotoxy(int x,int y)
 {
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }//set the position of text in compile screen

            void try()
{
    char ans[10];
    printf("\t\t\tyou want to try again (y or n)=\n");
    gets(ans);
}

            struct elements
{
   char name[50];
   int STOCK;
   int d;
   int m;
   int y;
}p;  //purchasing elements

            int main(void) //show only front page
{
system("COLOR FC");//change the background color and text color also
/*0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/


system("cls");
gotoxy(14,8);
    printf("***************************************************");
gotoxy(14,9);  printf("*");    gotoxy(64,9);    printf("*");
gotoxy(14,10); printf("*");   gotoxy(64,10);  printf("*");
gotoxy(14,11); printf("*");   gotoxy(64,11);  printf("*");
gotoxy(14,12); printf("*");   gotoxy(64,12);  printf("*");
gotoxy(14,13); printf("*");
gotoxy(26,13);
    printf("FRUIT SHOP MANAGEMENT SYSTEM");
gotoxy(64,13);  printf("*");
gotoxy(14,14); printf("*");   gotoxy(64,14);  printf("*");
gotoxy(14,15); printf("*");   gotoxy(64,15);  printf("*");
gotoxy(14,16); printf("*");   gotoxy(64,16);  printf("*");
gotoxy(14,17); printf("*");   gotoxy(64,17);  printf("*");
gotoxy(14,18);
    printf("***************************************************\n");
printf("\n\t\tpress any key for continue...");
getch();

start();

}

            void start()   //the main menu
{

         system("cls");
            int ch;
        char ans;
    while(1)
{
    system("cls");

gotoxy(20,8);
    printf("WHAT YOU WANT TO DO!!!\n");

gotoxy(22,10);
    printf("1.Enter as a Shop keeper ");

gotoxy(22,11);
    printf("2.Enter as a Customer");

gotoxy(22,12);
    printf("3.Exit from shop");

gotoxy(20,15);
    printf("enter the choice=");

scanf("%d",&ch);

            switch(ch)
        {
            case 1: shopkeeper();
                break;
            case 2: customer();
                break;
            case 3:
                        system("cls");

                        gotoxy(25,13);
                        printf("THANKS FOR VISIT.....");

                        getch();
                        exit(0);
            default:printf("\n\t\t\tWrong option\n");

        }

        fflush(stdin);

        printf("\t\t\tyou want to try again (y or n)=");
        scanf("%c",&ans);

        if(ans=='y' || ans=='Y')
        {
            start();
        }

        else

        {
            if(ans=='n' || ans=='N')
            {
                  system("cls");

                        gotoxy(25,13);
                        printf("THANKS FOR VISIT.....");

                        getch();
                        exit(0);

            }

             else

             {      system("cls");
                    gotoxy(24,13);
                    printf("Invalid option....");
                    printf("\n\n\t\t\tpress any key for try again...");
                    getch();
                    start();
             }

        }

}
}

            void customer() //for a custumer
{
int n;
system("cls");
    do
{
    system("cls");
gotoxy(0,8);
        printf("\n                  *********************************************");
        printf("\n                  *            1. Purchase                    *");
        printf("\n                  *            2. Search a fruit              *");
        printf("\n                  *            3. Report of fruits            *");
        printf("\n                  *            4. View the purchased items    *");
        printf("\n                  *            5. Bill                        *");
        printf("\n                  *            6. Back                        *");
        printf("\n                  *********************************************");
        printf("\n\n\tPlease Enter Your Option < 1 / 2 / 3 / 4 / 5 / 6 >:");
scanf("%d",&n);

        switch(n)
    {
                case 1:Purchase();
                    break;
                case 2:sView_s();
                    break;
                case 3:View_s();
                    break;
                case 4:Display_order();
                    break;
                case 5:Bill();
                    break;
                case 6:start();
                    break;
                default:printf("\n Error wrong number is entered please try again");

    }
}

        while(n!=6);

}

            void shopkeeper() //for a shopkeeper
{
int n;
system("cls");
        do
{
    system("cls");
gotoxy(0,8);
printf("\n                  *********************************************");
printf("\n                  *            1. Add any fruit record        *");
printf("\n                  *            2. Delete any fruit record     *");
printf("\n                  *            3. Search of fruit             *");
printf("\n                  *            4. Report of fruits            *");
printf("\n                  *            5. Back                        *");
printf("\n                  *********************************************");
printf("\n\n\tPlease Enter Your Option < 1 / 2 / 3 / 4 / 5 >:");
scanf("%d",&n);

        switch(n)
    {
                case 1:Add();
                    break;
                case 2:Delet();
                    break;
                case 3:sView_s();
                    break;
                case 4:View_s();
                    break;
                case 5:start();
                    break;
                default:printf("\n Error wrong number is entered please try again");
    }
}

    while(n!=5);

}

			void Add()  //input the file in shop
{

system("cls");
char ans;
int i=0,b;

    fp=fopen("mukuls.txt","ab+");

        gotoxy(20,10);
        printf("************************************");

        gotoxy(20,11);
        printf("*");
        gotoxy(55,11);
        printf("*");

        gotoxy(20,12);
        printf("*");
        gotoxy(30,12);
        printf("ADD NEW RECORD ");
        gotoxy(55,12);
        printf("*");

        gotoxy(20,13);
        printf("*");
        gotoxy(55,13);
        printf("*");

        gotoxy(20,14);
        printf("************************************");

        gotoxy(20,16);
        printf("Please enter the following fruits details...");

        f:
        gotoxy(20,18);
        fflush(stdin);
        printf("Enter Fruit Name: ");
        gets(fruit.name);
        for(i=0;fruit.name[i]!=NULL;i++)
        {

            if(isalpha(fruit.name[i])) //isalpha is a function which check if a character is alphabet or not
                continue;
                else
                goto f;
        }

        gotoxy(20,20);
        printf("Price : ");
        scanf("%d",&fruit.price);


        gotoxy(20,22);
        printf("STOCK : ");
        fflush(stdin);
        scanf("%d",&fruit.STOCK);

        b:
        gotoxy(22,24);
        printf("Date :");
        scanf("%d",&fruit.d);
        if(fruit.d>31)
            goto b;

        c:
        gotoxy(22,25);
        printf("Month :");
        scanf("%d",&fruit.m);
        if(fruit.m>13)
            goto c;

        d:
        gotoxy(22,26);
        printf("Year :");
        scanf("%d",&fruit.y);
        if(fruit.y>2017)
            goto d;

        fwrite(&fruit,sizeof(fruit),1,fp);
        fclose(fp);

        gotoxy(20,28);
        printf("you want to add more records<y or n>=");
        fflush(stdin);
        scanf("%c",&ans);

        if((ans=='y') ||(ans=='Y'))
{
        Add();
}
        else
{
    system("cls");
    gotoxy(20,11);
    printf("--------RECORD ADDED SUCCESSFULLY!--------\n\n");
    printf("\t\t\tpress any key for main menu...");
    getch();
    shopkeeper();
}

}

			void Delet() //delete the shop record
{

		system("cls");
        char d[20],ans;
		int f=1,x=0,q=1,t=0;


		fp=fopen("mukuls.txt","r+");
        fp2=fopen("text.txt","ab+");

        gotoxy(20,9);
		printf("********** DELETE THE FRUIT RECORD *********");


        fflush(stdin);
		printf("\n\n\t\tEnter the fruit name =");
   		gets(d);
        while(fread(&fruit,sizeof(fruit),1,fp)==1)
    {
        pf=fopen("mukulc.txt","rb");

        if  (strcmp(d,fruit.name)==0)

            {

            gotoxy(22,14);
            printf("NAME      =%s",fruit.name);

            gotoxy(22,15);
            printf("PRICE     =%d Rs.",fruit.price);

                    f=0;

            gotoxy(22,16);

            while(fread(&p,sizeof(p),1,pf)==1)

            {
                x=0;
                          if(strcmp(fruit.name,p.name)==0)
            {
               x=fruit.STOCK - p.STOCK  ;

                printf("STOCK     =%d",x);
                printf(" Kg");

                   q=0;

            }

            }


                if(q==1)
            {

                printf("STOCK     =%d",fruit.STOCK);
                printf(" Kg");

            }

     }

                    else

        {
                fwrite(&fruit,sizeof(fruit),1,fp2);
                t=1;
        }
    }


    fclose(fp);
    fclose(fp2);

    remove("mukuls.txt");
    rename("text.txt","mukuls.txt");

          if(f==0)
    {
            gotoxy(16,19);
        printf("---- Deleting the fruit record is successful ----");

          fflush(stdin);

        gotoxy(19,21);
        printf("you want to delete more records(y or n)=");
		scanf("%c",&ans);
    }

            else

              if(t==1)
    {
                printf("\n\t\t---- This type of record is not available ----");

        fflush(stdin);

        gotoxy(19,15);
        printf("you want to try again(y or n)=");
		scanf("%c",&ans);


    }
            else
    {

            printf("\n\t\t---- There is no any record for delete----");
                  fflush(stdin);

        gotoxy(19,15);
        printf("press any key for back....");
        getch();
        shopkeeper();    }

                if ((ans=='y') || (ans=='Y'))
		{
                Delet();
		}
               else
        {
                if((ans=='n') ||(ans=='N'))
                {
                     system("cls");
                 gotoxy(20,11);
                 printf("--------RECORDS DELETE SUCCESSFULLY!--------\n\n");
                 printf("\t\t\tpress any key for main menu...");
                 getch();
                 shopkeeper();
                }


                else
        {
                    system("cls");
                    gotoxy(24,13);
                    printf("Invalid option....");
                    printf("\n\n\t\t\tpress any key for try again...");
                    getch();
                    Delet();
        }
    }

}

			void View_s() //view the shop record
{
    int f=1,y=18,x=0;
    fp=fopen("mukuls.txt","rb");


    system("cls");
    gotoxy(20,11);
    printf("---------- DISPLAY THE RECORDS -----------\n");
    gotoxy(8,15);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(8,16);
    printf("|   DATE");
    gotoxy(22,16);
    printf("|         NAME");
    gotoxy(44,16);
    printf("|   PRICE");
    gotoxy(56,16);
    printf("|   STOCK LEFT |\n\n");
    gotoxy(8,17);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	while(fread(&fruit,sizeof(fruit),1,fp)==1)
{
   f=1;
   pf=fopen("mukulc.txt","rb");

    gotoxy(8,y);
    printf("| %d/%d/%d",fruit.d,fruit.m,fruit.y);
    gotoxy(22,y);
    printf("|   %s",fruit.name);

    gotoxy(44,y);
	printf("|   %d Rs.",fruit.price);

	while(fread(&p,sizeof(p),1,pf)==1)
	{
	    if(strcmp(p.name,fruit.name)==0)
	{

	gotoxy(56,y);
	x=(fruit.STOCK) - (p.STOCK);
	printf("|   %d",x);
	printf(" Kg");
    f=0;
	}

	}
	  if(f==1)
        {

        gotoxy(56,y);
        printf("|   %d",fruit.STOCK);
        printf(" Kg");

        }
	gotoxy(71,y);
	printf("|");
	y=y+1;
}
    y=18;
   printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(pf);
    fclose(fp);

    printf("\n\n\t\tpress any key for main menu... ");
    getch();
}

			void Purchase() //input the order
{
        system("cls");

        char c=0;
        int x=0,i;

        pf=fopen("mukulc.txt","ab+");
        fp=fopen("mukuls.txt","r+");
        gotoxy(20,10);
        printf("************************************");

        gotoxy(20,11);
        printf("*");
        gotoxy(55,11);
        printf("*");

        gotoxy(20,12);
        printf("*");
        gotoxy(30,12);
        printf("PURCHASED FRUITS ");
        gotoxy(55,12);
        printf("*");

        gotoxy(20,13);
        printf("*");
        gotoxy(55,13);
        printf("*");

        gotoxy(20,14);
        printf("************************************");

        a:
        gotoxy(22,16);
        printf("Enter the fruit name =");
        fflush(stdin);
        gets(p.name);
          for(i=0;p.name[i]!=NULL;i++)
        {

            if(isalpha(p.name[i])) //isalpha is a function which check if a character is alphabet or not
                continue;
                else
                goto a;
        }

        gotoxy(22,18);
        printf("Enter the Quantity(kg)=");
        scanf("%d",&p.STOCK);


        b:
        gotoxy(24,20);
        printf("Date :");
        scanf("%d",&p.d);
        if(p.d>31)
            goto b;

        c:
        gotoxy(24,21);
        printf("Month :");
        scanf("%d",&p.m);
        if(p.m>13)
            goto c;

        d:
        gotoxy(24,22);
        printf("Year :");
        scanf("%d",&p.y);
        if(p.y>2017)
            goto d;



            while(fread(&fruit,sizeof(fruit),1,fp)==1)
    {

    if( (strcmp(p.name,fruit.name)==0) && (p.STOCK<=fruit.STOCK))

    {
        fwrite(&p,sizeof(p),1,pf);

       	gotoxy(24,24);
        printf("----- Order Are Taken -----");

        gotoxy(18,26);
        fflush(stdin);
        printf("You want to purchase more fruits < y or n >=");
        scanf("%c",&c);
        x=0;

        break;

    }

    else

    {
        x=1;
    }

}
        fclose(fp);
        fclose(pf);


        if(x==1)
    {
                        if(strcmp(p.name,fruit.name)==0)
    {


                        gotoxy(20,24);
                        printf("Quantity of fruit is to high");
                        gotoxy(20,26);
                        fflush(stdin);
                        printf("You want to try again <y or n> =");
                        scanf("%c",&c);

    }

         else

    {
         gotoxy(20,24);
         printf("This fruit and this STOCK not valid");
         gotoxy(20,26);
         fflush(stdin);
         printf("You want to try again <y or n> =");
         scanf("%c",&c);
    }
    }



		if((c=='y') || (c=='Y'))

            {
                Purchase();
            }
        else


            {
                system("cls");
                gotoxy(15,13);
                printf("---------- Have a nice day --------");
                gotoxy(17,15);
                printf("press any key for main menu...");
                customer();
                getch();
            }
}

            void Display_order() // show the order list
{
         int y=18;
    pf=fopen("mukulc.txt","rb");

    system("cls");

    gotoxy(16,11);
    printf("---------- DISPLAY THE PURCHASING ITEMS -----------\n");

    gotoxy(16,15);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(16,16);
    printf("|  DATE");

    gotoxy(30,16);
    printf("|         NAME");

    gotoxy(52,16);
    printf("|   QUANTITY   |\n\n");

    gotoxy(16,17);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	while(fread(&p,sizeof(p),1,pf)==1)
{
    gotoxy(16,y);
    printf("| %d/%d/%d",p.d,p.m,p.y);

    gotoxy(30,y);
    printf("|   %s",p.name);

    gotoxy(52,y);
	printf("|   %d",p.STOCK);
	printf(" Kg");

	gotoxy(67,y);
	printf("|");
	y=y+1;

}

    gotoxy(16,y);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(pf);

    printf("\n\n\t\tpress any key for customer menu... ");
    getch();
}

            void Bill() //print the bill
{
     int y=18,c=0,x=0,total=0,q=0;

    pf=fopen("mukulc.txt","rb");

    system("cls");

    gotoxy(24,11);
    printf("---------- YOUR BILL -----------\n");

    gotoxy(10,15);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(10,16);
    printf("|     NAME");

    gotoxy(30,16);
    printf("|   QUANTITY * PRICE   ");

    gotoxy(55,16);
    printf("|  AMOUNT      |");

    gotoxy(10,17);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	while(fread(&p,sizeof(p),1,pf)==1)
{
   x=0;
   c=0;
    fp=fopen("mukuls.txt","rb");
    gotoxy(10,y);
    printf("|   %s",p.name);

    gotoxy(30,y);
	printf("|    %d",p.STOCK);

	while(fread(&fruit,sizeof(fruit),1,fp)==1)

	{
	     if(strcmp(fruit.name,p.name)==0)
	     {
	        gotoxy(43,y);
	        printf("*");
	        printf("   %d",fruit.price);

	        x=fruit.price;
        }

	}

    gotoxy(55,y);

    c=p.STOCK * x;
    total=c+total;
    printf("|  %d Rs.",c);

	gotoxy(70,y);
	printf("|");
	y=y+1;

}
    gotoxy(10,y);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    gotoxy(10,y+1);
    printf("|");

    gotoxy(30,y+1);
    printf("\t\t\tTOTAL   ");

    gotoxy(55,y+1);
    printf("|");

    gotoxy(55,y+1);
    printf("|  %d",total);
    printf(" Rs.");

    gotoxy(70,y+1);
    printf("|");

    gotoxy(10,y+2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(fp);
    fclose(pf);

    printf("\n\n\t\tpress any key for customer menu... ");
    getch();

}

            void sView_s() //display the particular fruit with the help of fruit name
{
    system("cls");
    int f=1,y=18,x=0;
    char c[50];
    printf("\n\n\t\tEnter the name of fruit :");
    fflush(stdin);
    gets(c);
        fp=fopen("mukuls.txt","rb");
    while(fread(&fruit,sizeof(fruit),1,fp)==1)
    {
      if(strcmp(c,fruit.name)==0)
    {
    system("cls");
    gotoxy(20,11);
    printf("---------- DISPLAY THE RECORDS -----------\n");
    gotoxy(8,15);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    gotoxy(8,16);
    printf("|   DATE");
    gotoxy(22,16);
    printf("|         NAME");
    gotoxy(44,16);
    printf("|   PRICE");
    gotoxy(56,16);
    printf("|   STOCK LEFT |\n\n");
    gotoxy(8,17);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    f=1;
   pf=fopen("mukulc.txt","rb");

    gotoxy(8,y);
    printf("| %d/%d/%d",fruit.d,fruit.m,fruit.y);
    gotoxy(22,y);
    printf("|   %s",fruit.name);

    gotoxy(44,y);
	printf("|   %d Rs.",fruit.price);

	while(fread(&p,sizeof(p),1,pf)==1)
	{
	    if(strcmp(p.name,fruit.name)==0)
	{

	gotoxy(56,y);
	x=(fruit.STOCK) - (p.STOCK);
	printf("|   %d",x);
	printf(" Kg");
    f=0;
	}

	}
	  if(f==1)
        {
        gotoxy(56,y);
        printf("|   %d",fruit.STOCK);
        printf(" Kg");
        }
	gotoxy(71,y);
	printf("|");
	y=y+1;
}
}
    y=18;
   printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(pf);
    fclose(fp);

    printf("\n\n\t\tpress any key for main menu... ");
    getch();

}
