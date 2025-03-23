# include <stdio.h>

int main()
{
	char letter = 0;
	printf("Enter the letter: ");
	scanf(" %c", &letter);

	if(letter >= 97 && letter <= 122){
		printf("Result is: %c \n", (letter ^ 32));
	}else if(letter >= 65 && letter <= 97){
		printf("Result is: %c \n", (letter | 32));
	}else{
		printf("Enter a letter!");
	}
}
