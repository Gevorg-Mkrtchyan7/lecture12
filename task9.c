# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	int n = 0;
	printf("Enter the index: ");
	scanf("%d", &n);

	num = (num >> n);

	if((num & 1) == 1){
		printf("The %dth index's number is 1 \n", n);
	} else {
		printf("The %dth index's isn't 1 \n", n);
	}
}
