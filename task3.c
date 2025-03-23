# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int a = 0;

	while(num){
		a += num & 1;
		num = num >> 1;
	}
	
	printf("Result is: %d \n", a);
}
