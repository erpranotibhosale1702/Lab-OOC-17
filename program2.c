#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 1st number");
    scanf("%d",&num1);
    printf("Enter 2nd number");
    scanf("%d",&num2);
    printf("Enter 3rd number");
    scanf("%d",&num3);
    int sum=num1+num2+num3;
    printf("The sum of the 3 numbers is %d",sum);
    return 0;
}