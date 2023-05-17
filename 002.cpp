#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p2;
char array[]="hello world!";

int main()
{
//使用strcpy将array复制到p2，即将array储存所开辟的区域中 
	p2=(char*)malloc(sizeof(char)*strlen(array));//精准开辟内存区域 
	printf("p2=%p\n",p2);//%p打印地址 
	strcpy(p2,array); 
	printf("array=%p,p2=%p\n",array,p2);
	printf(p2);
	free(p2); 
	p2=NULL;
	return 0;
}
