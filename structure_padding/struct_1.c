#include<stdio.h>
#include<stdlib.h>
#pragma pack(2)//it is used to set the cpu cycle as 2 bytes
struct person
{
	int id; //4 bytes 1
	char gender;//1 byte 1
	char name[20];//20 bytes 5

}p1;
int main()
{
	printf("The size of struct_1 %d",sizeof(p1));
	return 0;
}


