#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p3;

int main()
{
////�˷���û�ܰ��ַ������浽���ٵ��ڴ�ռ��У�ֻ����pָ�����ַ���
	p3=(char*)malloc(sizeof(char)*strlen("hello world!"));//��׼�����ڴ����� 
	printf("p3=%d\n",p3);
	p3="hello world!"; 
	printf("p3=%d\n",p3);
	printf(p3);
	free(p3); 
	p3=NULL;
	return 0;
}
