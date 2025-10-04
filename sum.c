#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    printf("PLEASE ENTER YOUR FIRST NUMBER :\n ");
    int a, b , c;
    scanf("%d" , &a);
    printf("PLEASE ENTER YOUR  SECOND NUMBER :\n ");
    scanf("%d" , &b); 
    c = a + b;
    printf("THE SUM OF TWO NUMBER IS : %d" , c); 

    getch();
    return 0;

}
