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
	
	if(a == 1 || a == 0){
		printf("This number is power of 2 \n");
	} else {
		printf("This number isn't power of 2 \n");
	}
}
