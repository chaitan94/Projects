#include<stdio.h>
#include<Math.h>
typedef int bool;
#define true 1
#define false 0

bool prime(int n){
	int i = 0;
	for (i = 2; i < pow(n, 0.5) + 1; ++i)
	{
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int option=(int)'\r';
	int n = 2;
	do{
		system("cls");
		do n++; while(!prime(n));
		printf("%d\n", n);
		printf("Press Enter for next prime..\n");
	}while((option = (int)getch())==(int)'\r');
	printf("Program ended.\n");
	return 0;
}