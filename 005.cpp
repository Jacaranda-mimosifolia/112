#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p;
char array[]="hello world!";
char array1[]="morning";
char array2[]="NULL";

int main()
{
	p=(char*)malloc(sizeof(char)*strlen(array));
	printf("p=%p\n",p);
	strcpy(p,array); 
	printf("array=%p,p=%p\n",array,p);
	printf(p);
	strcpy(p,array1); 
	printf(p);
	strcpy(p,array2); 
	printf(p);
	free(p); 
	p=NULL;
	return 0;
}
