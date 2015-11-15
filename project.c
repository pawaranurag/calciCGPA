/*****************************************************************************
 * Copyright (C) Anurag Bhujangrao Pawar. mail id= pawarab14.it@coep.ac.in
 *            In case of emergency mail id = panuragpawar67@gmail.com
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//declaring here some thing

void choiceoflife(void);
void userdetail(void);
char A= 0;
char B=0;

void mainmenu(void);
//void menu(void);
void menu_two(void);
void lines(void);
void getsubject(void);
void getCalculation(void);
void about(void);
int marksToGP(int marks);

int sumh = 0;
double sumchxGP = 0;
char Subjectname[100];
char studentname[100][100];
int  id;
int loop;
int numSubject;
int ch[100];
float GP[100];
int TargetCGPA;
char namesubject[100][40];
float mark[100];

void point();
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();

// show on sreen


void main()
{ 
choiceoflife();
}


void choiceoflife(void)
{
int choiceoflife ;
	printf("\n * * * * * * * * * * WHAT U WANT TO SEE FIRST CGPA CALCULATOR OR MATHEMATICAL CALCULATOR FIRSTLY: * * * * * * * * * * *\n\n");
        printf("\n                                (1) = CGPA CALCULATOR\n");
	printf("\n                                (2) = CALCULATOR\n\n");
	printf("\n What you choose first here 1 or 2: ");  
	scanf("%d", &choiceoflife);
	
	
	if(choiceoflife == 1)
	{
	mainmenu();
	}
	else (choiceoflife == 2);
	{
	point();
	}
} 
void mainmenu(void) 
{
	int choice;
	printf("\n -------------------------------------------------------------------------------------------------------------------\n\n");
	
	printf("                                         FINDING UR LIFE TURN SCORE                                                   \n\n");

	printf("\n -------------------------------------------------------------------------------------------------------------------\n\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
	lines();
	
	printf("	\t<1> Enter ur happy score information about this year with subject\n\n");
	
	lines();
	
	printf("	\t<2> about this\n\n");
	
	lines();
	
	printf("	\t<3> .....EXIT.......\n\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
	lines();

	printf("	\tEnter what u want to do now..... :  ");
	scanf("%d", &choice);
	printf("\n ===================================================================================================================\n\n");
	
     	
	if (choice == 1)
	{
	userdetail();
	getsubject();
        
    	}
    	else if (choice == 2)
    	{
        	about();
       		getchar();
        	mainmenu();
    	}
    	else if (choice == 3)
    	{
        	system("cls");
        	printf("*****   ***** ***** ***** THANK YOU FOR USING MY MINI PROJECT PROGRAM ***** ***** ***** ***** \n");
       	 getchar();
    	}
    	else
    	{
        	printf("\a\a HAHAHHAHAHAHHAHAHHA  WRONG INPUT!.. U SHOULD REVISE UPPER CHOICES  \n");
        	lines();
        	getchar();
        	system("cls");
        	mainmenu();
    }
}
void lines(void)
{
    printf("********");
}
void userdetail(void)
{
  
    printf("\n\n\n********Enter your full name :  ");
    scanf("%s", studentname);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   
    lines();
    printf("Enter your student ID :   ");
    scanf("%d",&id);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}

void getsubject(void)
{
    	int temp;

 //   	system("cls");

    	printf("````````````````````````````````````STUDENT DETAILS``````````````````````````````\n\n");
    	printf("Enter total subject :     ");
    	scanf("%d", &numSubject);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    	

	for (loop = 0; loop <= numSubject-1; loop++)
    	{
        printf("Subject %d \n", loop+1);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	printf("Enter subject name (4 character only) : ");
	scanf("%s", namesubject[loop]);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

        printf("Credit hour :");
        scanf("%d", &ch[loop]);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	printf("Enter your mark (type ur score like 10-20-30-40-50 ):");
        scanf("%f", &mark[loop]);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	GP[loop] = marksToGP(mark[loop]);

	printf("Your Grade pointer is : %d\n", &GP[loop]);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

	//strcpy(id[loop], markToid(mark[loop]));

	

	}



	    printf("==============Enter your targeted CGPA for this semester :");
	    scanf("%d", &TargetCGPA);
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	    lines();
	    printf("Press \" ENTER \" or any button\n\n");
	    getchar();
//	    system("cls");
	    menu_two();
}
	
	 void menu_two(void)	
	    {
	    int choice;
	    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	    printf("\n\nEnter \"1\" - CGPA CALCULATION\n");
	    printf("ENTER \"2\" - ABOUT ME \n");
	    printf("Enter \"3\" - EXIT\n");
	    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	    

	    printf("\n\n\t*** ***Enter your choice :");
	    scanf("%d", &choice);

	  if (choice == 1)
	    {
		system ("cls");
		getCalculation();
	    }
	    else if (choice == 2)
	    {
		system("cls");
		about();
	    }
	    else if (choice == 3)
	    {
//		system("cls");
		printf("\t\t*** *** *** *** ***THANK YOU FOR USING MY MINI PROJECT PROGRAM =D *** *** *** *** *** ***\n");
		getchar();
	    }
	    else
	    {
		printf("\a\a WRONG INPUT! \n");
		getchar();
//		system("cls");
		menu_two();
	    }
}

	void getCalculation(void)
	    {
		
	//    system("cls");
		

	    
	    printf("\n\nStudent Name : %s", studentname);
	    printf("\n\nStudent ID : %d", id);
	    

	  
	    printf("\n\n No.\t Subject name\t  Credit Hour\t  mark\t  \tGrade Point\t");
	 


	    for (loop = 0; loop <= numSubject-1; loop++)
	    {
		printf("\n%d\t %s\t \t\t%d\t %f\t %f\t", loop+1, namesubject[loop], ch[loop], mark[loop], GP[loop]);
	    }

	    for (loop = 0; loop <= numSubject-1; loop++)
	    {
		sumh = sumh + ch[loop];
		sumchxGP = sumchxGP + ch[loop] * GP[loop];
	    }

	    printf("\n\n...................");
	    printf("Total credit hour is = %d\n\n", sumh);
	    printf("...................");
	    printf("Total credit hour X grade point is = %f\n\n", sumchxGP);
	    
	    printf("...................");

	    printf("Grade point average is = %.2f", sumchxGP / sumh);
	    printf("\n ===============================================================================================================\n\n");
	    lines();
	    getchar();
	    //menu();
		about();
   }




	void about(void)
	{
//	    system("cls");

	    lines();
	printf("\n -------------------------------------------------------------------------------------------------------------------\n\n");
	printf("\n\n\n\n****************** ANURAG CHA MINI PROJECT****************************** \n\n\n\n");
	printf("\n -------------------------------------------------------------------------------------------------------------------\n\n");
	
	printf("Created By :COEP Student [ANURAG BHUJANG PAWAR] \n\n\n");
	
	printf("Institute Name : COLLEGE OF ENGINEERING PUNE\n\n\n");
	
	printf("Branch IT,S3,MIS NUMBER is 111408047\n");
	printf("\n\n*******************END OF UR RESULT OF CGPA CALCULATION HERE************************\n\n");
	printf("$$$$$$$$$$$$$$$$$$ YOU CAN ALSO CALCULATE YOUR RESULT AFTER IN CALCULATOR $$$$$$$$$$$$$$$$$$$\n\n\n");

	}

	int marksToGP(int marks)
	{
	    if (marks == 90 && marks <=100)
	    {
		return(float)9.00;
	    }
	    else if (marks== 80 && marks <=90)
	    {
		return(float)8.00;
	    }
	    else if (marks ==70 && marks <= 80 )
	    {
		return(float)7.00;
	    }
	    else if (marks == 60 && marks <= 70)
	    {
		return(float)6.00;
	    }
	    else if (marks == 55 && marks <= 60)
	    {
		return(float)5.00;
	    }
	    else if ( marks ==50&& marks <= 55 )
	    {
		return(float)4.80;
	    }
	    else if (marks == 45 && marks <= 50)
	    {
		return(float)4.70;
	    }
	    else if (marks  == 40 && marks <= 45)
	    {
		return(float)4.60;
	    }
	    else if (marks  == 35 && marks <= 40)
	    {
		return(float)4.50;
	    }
	    else if (marks== 30 && marks <= 35)
	    {
		return(float)3.00;
	    }
	    else if (marks == 25 && marks <= 30)
	    {
		return(float)2.00;
	    }
	    else if (marks == 20 && marks <= 25)
	    {
		return(float)1.00;
	    }
	    else
	    {
		    return(float)0.00;
	    }
	} 

// Calculator example using C code

#define KEY "Enter the calculator Operation you want to do:"


// Function prototype declaration


// Starting of Main Program
void point()
{
	int X=1;
   	char Calc_oprn;
	
	// Function call 
    	calculator_operations();
	while(X)
    	{
		 printf("\n");
		 printf("%s : ", KEY);

		Calc_oprn=getchar();

		switch(Calc_oprn)
		{
		    case '+': addition();
		              break;

		    case '-': subtraction();
		              break;

		    case '*': multiplication();
		              break;

		    case '/': division();
		              break;

		    case '?': modulus();
		              break;

		    case '!': factorial();
		              break;

		    case '^': power();
		              break;

		    case 'H':
		    case 'h': calculator_operations();
		              break;

		    case 'Q':
		    case 'q': exit(0);
		              break;
		    case 'c':
		    case 'C': 
		              calculator_operations();
		              break;
		     /*default:	
				printf("\n**********You have entered unavailable option");
	    			printf("***********\n");
	    			printf("\n*****Please Enter any one of below available ");
	    			printf("options****\n");*/
				
		
	    
		}
	    }
	
	}
//function defination
void calculator_operations()
{
    //system("clear");  use system function to clear 
    //screen instead of clrscr();
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n                                           Welcome to C calculator \n\n");
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("-------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n******* Press 'Q' or 'q' to quit  ");
    printf("to get back ********\n\n");
    printf("****** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("=====Enter 'C' or 'c' to clear the screen and");
    printf(" display available option =====\n\n");	
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");

   printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
}
void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}
void subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}

void multiplication()
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    
}



