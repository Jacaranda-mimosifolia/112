#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<stdlib.h>
//void* malloc(size_t size); 
//1.malloc开辟内存空间，以void*形式返回内存首地址;
//2.malloc()中,存储数据所占空间  e.g：malloc(sizeof(int)*n); 
//3.使用时要强行转换类型  e.g：(int*)malloc()，指针类型; 
//4.使用完后需要释放内存空间  e.g：free(p)；p=NULL；释放内存，且令p变为空指针;
//5.若无法分配内存则返回：NULL; 因此需要检查返回值; 
char *p=NULL;
int n=10;

int main()
{
	//指针=(指针类型*)malloc(sizeof(指针类型)*数据数量); 
	p=(char*)malloc(sizeof(char)*n);
	printf("p=%d\n",p);
	strcpy(p,"hello world!");
	printf(p);
	free(p);
	p=NULL;
	return 0;
}

