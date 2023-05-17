#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* p=NULL;
char array[]="hello\0 world!";

int main()
{
	p=(char*)malloc(100);  // 指针指向用malloc开辟区域的首地址;
	strcpy(p,array);  // 将array的首地址strcpy到p的首地址; 
	printf(p);  // 打印指针首地址,编译器会识别到'\0',才停止; 
	free(p);  // 释放所开辟的内存区域; 
	p=NULL;  // 将p指向NULL以防指针指向未知值 
	
	p=(char*)malloc(10);
	strcpy(p,"hello world!");
	printf("\n%s\n",p);  // 也可以这么输出; 
	free(p);
	return 0;
}
