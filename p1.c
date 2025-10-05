#include<stdio.h>
int main()
{
	char ch = 'A';
	int x = 1234;
	float f = 4.5f;
	double d = 22.8;

	printf("ch = %c\n",ch);
	printf("x = %d\n",x);
	printf("f = %f\n",f);
	printf("d = %lf\n",d);
        printf("ch = %c x = %d f = %f d = %lf\n",ch,x,f,d);

	ch = 'B';
	x = 2345;
	f = 25.4;
	d = 45.6;
        printf("ch = %c x = %d f = %f d = %lf\n",ch,x,f,d);
}
