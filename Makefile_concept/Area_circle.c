//#include"area.h"
#include<stdio.h>
#define pi 3.141
double* Area_circle(int r)
{	
	static double res;
	res=pi*(r*r);
	
	
	return &res;
}

