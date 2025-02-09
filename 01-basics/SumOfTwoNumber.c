//Write a program to find the sum of two numbers.

#include<stdio.h>
#include<conio.h>

void main() {
	int a,b,sum;
	printf("Enter the two number: \n");
	scanf("%d %d", &a, &b);
	sum = a+b;
	printf("Sum of %d + %d = %d", a,b,sum);
	getch();
}

