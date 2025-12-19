#include<stdio.h>
int calculator(int num,int A,int B)
{
 
    switch(num)
    {
        case 1:
         printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
            printf("%d",A+B);
            break;
        case 2:
          printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
            printf("%d",A-B);
            break;
        case 3:
        printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
            printf("%d",A*B);
            break;
        case 4:
         printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
            printf("%d",A/B);
            break;
        case 5:
             printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
              printf("%d",A%B);
            break;
        case 6:
               printf("enter the  value of A :");
    scanf("%d",&A);
     printf("enter the value of B:");
    scanf("%d",&B);
               printf("%d",A%B);
            break;
        default:
            printf("wrong choice");
    }
 }
int main()
{
    int num,A,B;
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for dividation\n");
    printf("press 5 for modulation\n");
    printf("press 0 for exit\n");
    printf("enter the number:");
    scanf("%d",&num);
    
    
    calculator(num,A,B);

}