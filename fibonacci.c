#include<stdio.h>
void main(){

    int a= 0, b= 1, r, i ,c;
    printf("ENTER YOUR RANGE\n");
    scanf("%d",&r);

    printf("\n%d%d",a,b);

    for(i=2;i<r;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }

}