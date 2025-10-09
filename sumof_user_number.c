#include<stdio.h>
#include<conio.h>
void main(){
    int num, i,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (i=1; i<=num; i++)
    {
         sum=sum+i;
         
    }
    printf("The sum of %d is %d, ",num,sum);  
        getch();

}