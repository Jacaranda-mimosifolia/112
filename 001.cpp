#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p1;
char array[]="hello world!";

int main()
{
//�˷���û�ܰ�array���浽���ٵ��ڴ�ռ��У�ֻ����pָ����array
	p1=(char*)malloc(sizeof(char)*strlen(array));//��׼�����ڴ����� 
	printf("p1=%d\n",p1);
	p1=array;//pָ��array 
	printf("array=%d,p1=%d\n",array,p1);
	printf(p1);
	free(p1); 
	p1=NULL;
	return 0;
}
