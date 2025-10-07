#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is the greatest number");
    }
    else if (b>a && b>c){
        printf("b is the greatest number");
    }
    else {
        printf("c is the greatest number");
    }
   
    
        getch();
        return 0;

}