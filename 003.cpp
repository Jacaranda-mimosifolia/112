#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p3;

int main()
{
////此方法没能把字符串储存到开辟的内存空间中，只是让p指向了字符串
	p3=(char*)malloc(sizeof(char)*strlen("hello world!"));//精准开辟内存区域 
	printf("p3=%d\n",p3);
	p3="hello world!"; 
	printf("p3=%d\n",p3);
	printf(p3);
	free(p3); 
	p3=NULL;
	return 0;
}
