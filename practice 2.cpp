#include<stdio.h>
main()
{
	int a, b;
	printf("C prog to calculate Addition, Subtraction, Multiplication & Division of two numbers");
	
	printf("\nEnter first value: ");
	scanf("%d",&a);
	printf("Enter second value: ");
	scanf("%d",&b);
	printf("\nAddition %d+%d=%d",a,b,a+b);
	printf("\nSubtraction %d-%d=%d",a,b,a-b);
	printf("\nMultiplication %d*%d=%d",a,b,a*b);
	printf("\nDivision %d/%d=%d",a,b,a/b);
	return 0;
}