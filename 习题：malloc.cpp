#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* p=NULL;
char array[]="hello\0 world!";

int main()
{
	p=(char*)malloc(100);  // ָ��ָ����malloc����������׵�ַ;
	strcpy(p,array);  // ��array���׵�ַstrcpy��p���׵�ַ; 
	printf(p);  // ��ӡָ���׵�ַ,��������ʶ��'\0',��ֹͣ; 
	free(p);  // �ͷ������ٵ��ڴ�����; 
	p=NULL;  // ��pָ��NULL�Է�ָ��ָ��δֵ֪ 
	
	p=(char*)malloc(10);
	strcpy(p,"hello world!");
	printf("\n%s\n",p);  // Ҳ������ô���; 
	free(p);
	return 0;
}
