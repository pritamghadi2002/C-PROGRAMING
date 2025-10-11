    #include<stdio.h>
   void sum()
   {

            int x , y , z ;       
            printf("enter two numbers:\n");
            scanf("%d%d",&x,&y);
            z=x+y;
            printf("the sum is %d\n",z);
        } 

   void substraction()
        {
            int x , y , z ;
            printf("enter two numbers:\n");
            scanf("%d%d",&x,&y);
            z=x-y;
            printf("the substraction is %d\n",z);
        }

   void multiplication(x,y,z)
        {
            float x , y , z ;
            printf("enter two numbers:\n");
            scanf("%f%f",&x,&y);
            z=x*y;
            printf("the multiplication is %d\n",z);
        }

void main(){
    int x , y , z ,ch ;
    printf("press 1 for addition:\n");
    printf("press 2 for substraction:\n");
    printf("press 3 for multiplication:\n");
    while (1)
    {
       
        printf("enter your choise:\n");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:{
        sum();
            break;
        }
        case 2:{

            substraction();
            break;
        }

        case 3:{
            multiplication();
            break;
        }
    
        default:

        printf("please input valid number:\n");
        break;
        }
   }
}