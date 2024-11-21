#include<stdio.h>

int square(int num) {
	return num * num;
}

int main() {
	int number, result;
	
	printf("enter a number to find its square :");
	scanf("%d", &number);
	
	result = square(number);
	
	printf("the square of %d is %d\n", number, result);
	
	return 0;
}
