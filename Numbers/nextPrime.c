#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

bool prime(unsigned long long n){
	unsigned long long i = 0;
	for (i=2; i*i < n+1; ++i)
		if(!(n%i))
			return false;
	return true;
}

int main(){
	int option=(int)'\r';
	unsigned long long n = 2;
	do{
		system("cls");
		do n++; while(!prime(n));
		printf("%d\n", n);
		printf("Press Enter for next prime..\n");
	}while((option = (int)getch())==(int)'\r');
	printf("Program ended.\n");
	return 0;
}