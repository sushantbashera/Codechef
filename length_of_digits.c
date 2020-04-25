#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	unsigned long th=1234555334;
	int nDigits = floor(log10(abs(th))) + 1;
	printf("%d",nDigits);
	getch();
	return 0;
}
