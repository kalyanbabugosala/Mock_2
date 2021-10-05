#include<stdio.h>
#include<string.h>
int m=0,c=0;;
int fun(char s1[],char s2[])
{
	int n1=strlen(s1);//6
	int n2=strlen(s2);
	if(n1!=n2)
	{
		return 0;
	}
	else if(m<n1)
	{
		if(s1[m]==s2[m])
			c++;
			m++;
			fun(s1,s2);
	}
	if(c==m)
		return 1;
	return 0;
}	
				
void string_compare()
{
		char s1[100],s2[100];
		fgets(s1,30,stdin);
		fgets(s2,30,stdin);
		int (*fptr)(char[],char[]) = fun;
		int res = fptr(s1,s2);
		if(res)
		printf("strings are same");
		else
		printf("not same");
}
