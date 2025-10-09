#include<stdio.h>
#include<conio.h>
void main()
{
    int num , i , sum=0;
    printf("ENTER THE NUMBER WHICH YOU WANT TO PRINT THE MULTIPLICATION TABLE OF:\n");
    scanf("%d",&num);
    for(i=1; i<=10; i++)
    {
        sum=num*i;
        printf("%d * %d = %d\n",num,i,sum);
    }
    
    
    getch();
        
}
   

