#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p1="hello world!";
	printf("p1=%d\n",p1);
	p1=(char*)malloc(sizeof(char)*strlen("hello world!"));//精准开辟内存区域 
	printf("p1=%d\n",p1);
	printf("%s",p1);
	puts(p1);
	free(p1); 
	p1=NULL;
	return 0;
}
