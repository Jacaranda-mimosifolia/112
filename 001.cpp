#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p1;
char array[]="hello world!";

int main()
{
//此方法没能把array储存到开辟的内存空间中，只是让p指向了array
	p1=(char*)malloc(sizeof(char)*strlen(array));//精准开辟内存区域 
	printf("p1=%d\n",p1);
	p1=array;//p指向array 
	printf("array=%d,p1=%d\n",array,p1);
	printf(p1);
	free(p1); 
	p1=NULL;
	return 0;
}
