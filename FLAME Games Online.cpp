#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char str1[20];
    char str2[20];
    int x,y,n,r,counter1,counter2,points=0;

  //clrscr();
  printf("Enter Your Name:\n");
  gets(str1);

  printf("Enter Your Partner Name:\n");
  gets(str2);

  counter1=strlen(str1);
  counter2=strlen(str2);

  for (x=0; x<counter1; x++)
	{  for (y=0; y<counter2; y++)
	  { if (str1[x]==str2[y])
		points++;
		else;}

	  if(points!=0)
		points++;
	}

	for (n=1; n<counter1; n++)
	{ if (str1[0]==str1[n])
		 points++;
	  else;}

	printf ("\n%d \n",points);

	r=points%6;
	switch(r)

  {
   case 1: printf ("\nFriends"); break;
   case 2: printf ("\nLovers"); break;
   case 3: printf ("\nAnger"); break;
   case 4: printf ("\nMarriage"); break;
   case 5: printf ("\nEngaged"); break;
   case 0: printf ("\nSweethearts"); break;
  }



	getch();
	}
