#include<stdio.h>
int main(){
    int choice,a,b;
    printf("Enter first number");
    scanf("%d",a);
    printf("Enter second number");
    scanf("%d",b);
    printf("1. Find sum");
    printf("2. Find difference");
    printf("3. Find product");
    printf("4. Find divide");
    printf("Enter your choice : ");
    scanf("%d",choice);
    int sum,diff,prod,div;
    if (choice==1){
        sum=a+b;
        printf("The sum is %d",sum);
    }
    if (choice==2){
        diff=a-b;
        printf("The difference is %d",sum);
    }
    if (choice==3){
        prod=a*b;
        printf("The product is %d",sum);
    }
    if (choice==4){
        div=a/b;
        printf("The divide is %d",sum);
    }
    return 0;
}