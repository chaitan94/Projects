#include<stdio.h>
int main(){
	int i = 0, j = 0;
	char bar[20];
	for (i = 0; i < 20; ++i)
	{
		bar[i] = ' ';
	}
	for (i = 0; i < 20; ++i)
	{
		system("cls");
		printf("\n\n%10c[",' ');
		bar[i] = (char)178;
		for (j = 0; j < 20; ++j)
		{
			printf("%c", bar[j]);
		}
		printf("]\n");
		printf("\n%15d %% complete..\n", (i+1)*5);
		int c,d;
		for ( c = 1 ; c <= 10000 ; c++ )
			for ( d = 1 ; d <= 10000 ; d++ )
				{}
	}
	getch();
	return 0;
}