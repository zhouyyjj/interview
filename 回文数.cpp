#include<stdio.h>
#include<string.h>
int f(char*s)
{
	int i,j;
	for(j=strlen(s)-1,i=0;i<j;i++,j--)
		if(s[i]!=s[j])
			return 0;
		return 1;
}
 int main()
 {
	 char s[100];
	 if(f(gets(s)))
		 printf("1\n");
	 else
		 printf("0\n");
	 return 0;
 }