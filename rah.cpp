#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int flag=0,i;
	gets(str);
	char chk[30];
	
	for(i=0;i!='\0';i++)
	{
		if(strrev(str[i])==str[i])
		{
			flag=1;
		}

	}
	if(flag=1)
	{printf("\n it is palindrome\n");
	}
	else 
	printf("it is not palindrome");
}
