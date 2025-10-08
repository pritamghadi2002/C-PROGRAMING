#include<stdio.h>
#include<conio.h>
void main(){
    int mark ,i,sum=0;
    float per;
    printf("enter mark of 5 subjects\n");
    
    for(i=0; i<5 ; i++){

      scanf("%d",&mark);
    }
    for(i=0; i<5 ; i++){
        sum=sum+mark;
    }
    printf("Total mark is %d",sum);
    per=(sum/500.0)*100;
    printf("\nPercentage is %f",per);
        
   
    return 0;
}