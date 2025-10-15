#include<stdio.h>

void main() {

    int year;
  printf(" entetr the year if you want to check it is leap year or not \n");
  scanf("%d", &year);

  if( (year % 400 == 0) || (year % 4 == 0 && year %100!=0) ){
    printf("it is a leap year \n");
  }
 
  else
  {
    printf(" it is not a leap year \n");
  }
  


}