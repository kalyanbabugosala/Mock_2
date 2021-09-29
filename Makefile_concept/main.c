#include<stdio.h>
#include "area.h"
int main()
{
	int r,b,h;
	printf("enter radius:");
	scanf("%d",&r);

	printf("Area of circle is %f",*Area_circle(r));
	printf("enter b and h:");
	scanf("%d %d",&b,&h);
	printf("Area of rectangle is %f",*Area_rectangle(b,h));
	return 0;
}
