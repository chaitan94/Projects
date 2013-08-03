#include<stdio.h>
#include<stdlib.h>

int *fibbo = (int *)calloc(200*sizeof(int));

int fibb(int n){
	if(fibbo[n])
		return fibbo[n];
	else {
		if(n<=1){
			fibbo[n] = 1;
		}
		else{
			fibbo[n] = fibb(n-1)+fibb(n-2);
		}
		return fibbo[n];
	}
}

void printFibbUpto(int n){
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", fibb(i));
	}
}

int main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	printFibbUpto(n);
	return 0;
}