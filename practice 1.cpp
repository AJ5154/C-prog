#include<stdio.h>
main()
{

	char ch = 65;
	int x=9;
	printf("%d, %d, ", sizeof(ch), sizeof(ch));
	printf("%d, %d, ", sizeof(65), sizeof(++x));
	printf("%d, ", x);
	return 0;
}	