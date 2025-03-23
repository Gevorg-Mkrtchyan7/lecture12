# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int a = 1;
	int b = num & a;

	if(b == 1){
		printf("It is odd number \n");
	} else {
		printf("It is couple number \n");
	}
}
