//#include"area.h"
#include<stdio.h>
double* Area_rectangle(int b,int h)
{
	static double res;
	res=(b*h);
	return &res;
}

