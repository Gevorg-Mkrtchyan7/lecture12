# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int a = 0;
	int num2 = num;

	while(num){
		a += num & 1;
		num = num >> 1;
	}
	if(num2 != 0){
		if((a & 1) == 0){
			printf("The number have couple number 1's \n");
		} else {
			printf("The number have odd number 1's \n");
		}
	} else {
		printf("Don't Enter the 0 \n");
	}
}
