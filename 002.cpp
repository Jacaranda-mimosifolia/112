#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p2;
char array[]="hello world!";

int main()
{
//ʹ��strcpy��array���Ƶ�p2������array���������ٵ������� 
	p2=(char*)malloc(sizeof(char)*strlen(array));//��׼�����ڴ����� 
	printf("p2=%p\n",p2);//%p��ӡ��ַ 
	strcpy(p2,array); 
	printf("array=%p,p2=%p\n",array,p2);
	printf(p2);
	free(p2); 
	p2=NULL;
	return 0;
}
