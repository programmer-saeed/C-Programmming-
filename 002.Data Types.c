#include<stdio.h>
int main ()
{
    int x = 100;       // integer number assign
    printf("The given integer number is  = %d\n",x);

    float y = 10.5;    // float number assign
    printf("The given floating number is = %.3f\n",y); //.3f means that three integer number after decimal point in floating data types

    double z = 100;    // double number assign
    printf("The given double number is   = %.5lf\n",z);  //.5lf means that five integer number after decimal point in double data types

    char a = 'x';   // Character number assign
    printf("The character are            =  %c\n",a);


    return 0;
}
