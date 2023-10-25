//This is input and output program------------

#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter first number = ");
    scanf("%d",&a);

    printf("Enter second number = ");
    scanf("%d",&b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    double div = a / b;
    int mod = a % b;

    printf("Summation is = %d\n",sum);
    printf("Subtraction is = %d\n",sub);
    printf("Multiplication is = %d\n",mul);
    printf("Division is = %0.3lf\n",div);
    printf("Modulus is = %d\n",mod);



    return 0;
}

