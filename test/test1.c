#include <stdio.h>
int main(){
	puts("My First C Program");
	int led = 1;
	int a = led++;
	printf("%p, %d",&a,led);
	printf("%s\n", "ssss");
	printf("%d",isalpha("skk"));
	return 0;
} 