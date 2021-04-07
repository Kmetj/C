// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
	double a=0,b=0,c=0,d;
	double x1,x2;
	printf("zadajte a:");
	scanf_s("%lf",&a);
	printf("\nzadajte b:");
	scanf_s("%lf",&b);
	printf("\nzadajte c:");
	scanf_s("%lf",&c);
	d=b*b-4*a*c;
	printf("\ndiskriminant je: %lf" ,d);
	if (d<0)
		printf("\nnema riesenie v mnozine realnych cisel");
	if (d>0)
		{
	x1=(-b-sqrt(d))/(2*a);
	x2=(-b+sqrt(d))/(2*a);
	printf("\n koren: %lf",x1);
	printf("\n koren: %lf",x2);
	    }
	if (d=0)
		{
    x1=(-b-sqrt(d))/(2*a);
	printf("\n koren: %x1",x1);
	    }
	getchar();
	getchar();
	return 0;
}

