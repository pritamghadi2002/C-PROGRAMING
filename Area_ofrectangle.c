#include<stdio.h>
#include<conio.h>
int main(){
    float length, breadth;

    printf(" PLAEASE ENTER THE LENGTH OF RECTANGLE :\n ");
    scanf("%f" , &length);

    printf("ENTER THE BREADTH OF RECTANGLE :\n ");
    scanf("%f" , &breadth);

    printf(" THE AREA OF RECTANGLE IS : %f " , length * breadth);

    getch();
    return 0;
}