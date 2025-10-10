#include<stdio.h>
#include<conio.h>
void main(){
    int i, num, square;
    printf("enter the number from check the square\n");
     scanf("%d",&num);
    
    for(i=1;i<=num;i++){
       
        
        square=i*i;
          printf("Square of %d is %d\n",i,square);
       
    }
   
    getch();
}