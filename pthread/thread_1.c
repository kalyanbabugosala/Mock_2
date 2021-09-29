
//After getting clearity on this pthread i have given these comments.
#include<stdio.h>
#include<pthread.h>
#include<error.h>

extern int errno;
//void* p;
void* my_thread(void* ptr)
{
	printf("Iam in Thread \n");
	char* p= (char*)ptr;
	puts(p);
	pthread_exit(NULL);
	//return (void*)p;
}

int main()
{
	pthread_t tid;
	int ret;
	
	char* str="Hello world!";
	ret=pthread_create(&tid,NULL,my_thread,str);//My mistake is i have mensioned &str for pointer variable 
	if(ret!=0)
	{
		printf("the thread is not created .\n");
		printf(" the error number is:%d\n",ret);
		printf(" error is: %d\n",strerror(ret));	//i have given strerrorno(ret) instead strerror
	}
	printf("This is main\n");
	pthread_join(tid,NULL);
	pthread_exit(NULL);
	
}


