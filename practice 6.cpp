#include<stdio.h>
main()
{
	short a=12,b=5;
	short c=a&b;
	short d=a|b;
	short e=a^b;
	short f=~a;
	short g=b<<2;
	short h=a>>1;
	printf("c=%d, d=%d, e=%d, f=%d, g=%d, h=%d",c, d, e, f, g, h);
	return 0;
}