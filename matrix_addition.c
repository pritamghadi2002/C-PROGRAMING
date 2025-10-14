// #include<stdio.h>
// void main(){
//     int x,y, result=1, i;

//     printf("enter cofficient of the number:\n");
//     scanf("%d", &x);

//     printf("enter of the power of the coefficient:\n");
//     scanf("%d", &y);
    
//     for(i=1; i<=y; i++){
//         result = result * x;
//     }

//     printf("the result is: %d", result);
// }

// #include<stdio.h>
// void main(){
//     int i, j, k, n = 10;

//     for(i = n; i >= 1; i--){           
//         for(j = i; j < n; j++){        
//             printf(" ");
//         }
//         for(k = 1; k <= (2*i - 1); k++){ 
//             printf("*");
//         }
//         printf("\n");                   
//     }
// }

#include<stdio.h>
void main(){

    int a[2][2], b[2][2], c[2][2], i, j, k;

    printf("enter first matrix:\n");
    for ( i=0; i<2; i++)
    { 
        for( j=0; j<2; j++)
        {
          scanf("%d", &a[i][j]);
        }       
    }
   

    printf("enter second matrix:\n");
    for ( i=0; i<2; i++)
    { 
        for( j=0; j<2; j++)
        {
          scanf("%d", &b[i][j]);
        }             
    }

    printf("addition of two matrix is:\n");
     for ( i=0; i<2; i++)
    { 
        for( j=0; j<2; j++)
        {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d ", c[i][j]);
        }  
        
        printf("\n");
    }
        
    
}