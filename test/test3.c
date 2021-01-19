#include <stdio.h>
#define SQ(x) ((x)*(x))

int main(){
	/*
	int i = 1;
	while(i<5){
		printf("%d^2 = %d\n",i,SQ(i++));
	}*/
	#ifdef _DEBUG
		printf("%s\n", "DEBUG model");
	#endif
	printf("char = %d\n", sizeof(char));
	printf("int = %d\n", sizeof(int));
	return 0;
}