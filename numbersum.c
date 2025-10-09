#include<stdio.h>
#include<conio.h>
void main(){
    int i=0, sum=0;
    printf("NUMBER FOR 1 TO 10 IS:\n");
    for(int i=0; i<=10; i++){
        printf(" %d ",i);
        sum=sum+i; 
          
    }
    printf("\nSUM OF 1 TO 10 IS: %d",sum);
    
        
    getch();
}