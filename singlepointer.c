#include<stdio.h>
#include<string.h>
#include<conio.h>

pritam(int*y){
    printf(" THE VALUE OF Y IS : %d\n",*y);
    *y = 10;
    printf(" THE VALUE OF Y AFTER CHANGING IS : %d \n" , *y);

}
void main(){

    int z= 5;
    pritam(&z);
    printf(" THE VALUE OF Z IS %d",z);
    getch();

}
