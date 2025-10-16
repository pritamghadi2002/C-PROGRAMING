#include<stdio.h>

void main()
{

    int mark;
    printf("\nplease enter the mark");
    scanf("%d",mark);
   
    printf("yor mark is under this categori:");;
     mark > 80 ? printf("high")
               :(mark >= 50 ? printf ("moderate")
               :  printf("low") );
               
               
}