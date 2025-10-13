#include<stdio.h>
#include<math.h>
void main(){

    double base, power, result;
    printf("enter the base and power\n");
    scanf("%lf\n %lf", &base, &power);

    power = pow(base, power);
    printf("the result is %lf\n", power);

}