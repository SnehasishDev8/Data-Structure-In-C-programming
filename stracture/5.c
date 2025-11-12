#include<stdio.h>
typedef struct{
    float real;
    float imag;
}complex;
int main(){
    complex c1, c2, sum, diff;
    printf("Enter first complex number(real and imaginary part) : ");
    scanf("%f %f",&c1.real,&c1.imag);
    printf("Enter second complex number(real and imaginary part) : ");
    scanf("%f %f",&c2.real,&c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;

    printf("\n----Result----\n");
    printf("First complex number %.2f + %.2fi\n",c1.real,c1.imag);
    printf("second complex number %.2f + %.2fi\n",c2.real,c2.imag);
    printf("sum = %.2f + %.2fi\n",sum.real, sum.imag);
    printf("differance = %.2f + %.2fi\n",diff.real, diff.imag);
    
}