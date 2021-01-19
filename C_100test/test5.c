#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,temp;
	printf("%s\n", "Please enter 3 number:");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b){
		temp = a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp = a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp = b;
		b=c;
		c=temp;
	}
	printf("%s %d,%d,%d\n", "3 number is:",a,b,c);
	return 0;
}