//This project is brought you by @hemang vellore

#include <stdio.h>

int main() {

	int inp1, inp2;
	char inp, ad = '+', su = '-', mu = 'x', de = '/', mo = '%';
	printf("What do you want to calculate(+,-,x,/,%%(Mod)\n");
	scanf_s("%c", &inp);
	if (inp == ad) {
		printf("Enter your first value:");
		scanf_s("%d", &inp1);
		printf("Enter your secound value:");
		scanf_s("%d", &inp2);
		int sum = inp1 + inp2;
		printf("This is the sum:%d", sum);
	}
	else if (inp == su) {
		printf("Enter your first value:");
		scanf_s("%d", &inp1);
		printf("Enter your secound value:");
		scanf_s("%d", &inp2);
		int sum = inp1 - inp2;
		printf("This is the sum:%d", sum);
	}
	else if (inp == mu) {
		printf("Enter your first value:");
		scanf_s("%d", &inp1);
		printf("Enter your secound value:");
		scanf_s("%d", &inp2);
		int sum = inp1 * inp2;
		printf("This is the sum:%d", sum);
	}
	else if (inp == de) {
		printf("Enter your first value:");
		scanf_s("%d", &inp1);
		printf("Enter your secound value:");
		scanf_s("%d", &inp2);
		int sum = inp1 / inp2;
		printf("This is the sum:%d", sum);
	}
	else if (inp == mo) {
		printf("Enter your first value:");
		scanf_s("%d", &inp1);
		printf("Enter your secound value:");
		scanf_s("%d", &inp2);
		int sum = inp1 % inp2;
		printf("This is the sum:%d", sum);
	}
	return 0;

}