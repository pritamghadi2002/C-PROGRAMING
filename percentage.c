#include<stdio.h>
#include<conio.h>

void main() {
    int mark[5], i, sum = 0;
    float per;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &mark[i]);
    }

    for(i = 0; i < 5; i++) {
        sum = sum + mark[i];
    }

    printf("Total marks = %d\n", sum);
    per = (sum / 500.0) * 100;
    printf("Percentage = %.2f%%", per);

    getch();
}
