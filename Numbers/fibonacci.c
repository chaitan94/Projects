#include <stdio.h>
#include <stdlib.h>

unsigned long long fibb(unsigned long long n){
	unsigned long long a=1;
	unsigned long long b=1;
	while(n-->2){
		b=a+b;
		a=b-a;
	}
	return b;
}

int main(){
	unsigned long long n;
	printf("Enter an integer: ");
	scanf("%lld", &n);
	printf("%lld",fibb(n));
	return 0;
}