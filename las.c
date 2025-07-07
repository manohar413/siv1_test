#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strrev(char *p,char *q)
{
	int i,j;
	for(i=0,j=strlen(p);j>=0;i++,j--)
	{
		q[i]=p[j];
	}
	q[i]='\0';
}
int main(){
	char s1[100],s2[100];
	gets(s1);
	strrev(s1,s2);
	printf("%s",s1);
}
