#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<stdlib.h>
//void* malloc(size_t size); 
//1.malloc�����ڴ�ռ䣬��void*��ʽ�����ڴ��׵�ַ;
//2.malloc()��,�洢������ռ�ռ�  e.g��malloc(sizeof(int)*n); 
//3.ʹ��ʱҪǿ��ת������  e.g��(int*)malloc()��ָ������; 
//4.ʹ�������Ҫ�ͷ��ڴ�ռ�  e.g��free(p)��p=NULL���ͷ��ڴ棬����p��Ϊ��ָ��;
//5.���޷������ڴ��򷵻أ�NULL; �����Ҫ��鷵��ֵ; 
char *p=NULL;
int n=10;

int main()
{
	//ָ��=(ָ������*)malloc(sizeof(ָ������)*��������); 
	p=(char*)malloc(sizeof(char)*n);
	printf("p=%d\n",p);
	strcpy(p,"hello world!");
	printf(p);
	free(p);
	p=NULL;
	return 0;
}

