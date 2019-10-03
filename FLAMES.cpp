#include<stdio.h>
#include<string.h>
#include<conio.h>



int main()
{
    char Name1[100], Name2[100],flames[6];
    flames[6]='FLAMES';
    int a, b,i,j,W,option,count=0,c;
    printf("Enter Your Name:\n");
    gets(Name1);
    printf("Enter Your Partner Name:\n");
    gets(Name2);

    a=strlen(Name1);
    b=strlen(Name2);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(Name1[i]==Name2[j]){
                count++;
                Name1[i]=NULL;
                Name2[j]=NULL;
            }
        }
    }
    c=a+b-(2*count);


    printf("Not Match %d Word",c);


    for(int k=6; k>=1; k--){
        W=c%k;
        flames[W]=NULL;
    }
    /*for(int l=0;l<6;l++){
        if(flames[l]!=NULL){
            option=l;
        }
    }*/
    switch(c)
    {
        case 0: printf ("\nFriends"); break;
        case 1: printf ("\nLovers"); break;
        case 2: printf ("\nAnger"); break;
        case 3: printf ("\nMarriage"); break;
        case 4: printf ("\nEngaged"); break;
        case 5: printf ("\nSweethearts"); break;
    }

    return 0;
}
