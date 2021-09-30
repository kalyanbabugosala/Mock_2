#include<stdio.h>
#include "area.h"
int main()
{
	int r,b,h;
	double *p1,*p2;
	printf("enter radius:");
	scanf("%d",&r);

	//printf("Area of circle is %f",*Area_circle(r));
	p1=Area_circle(r);
	printf("Area of circle is:%f",*p1);
	
	
	printf("\nenter b and h:");
	scanf("%d %d",&b,&h);
	
	//printf("Area of rectangle is %f",*Area_rectangle(b,h));
	p1=Area_rectangle(b,h);
	printf("Area of rectangle is:%f",*p1);
	
	return 0;
}
