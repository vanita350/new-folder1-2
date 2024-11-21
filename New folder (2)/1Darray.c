#include<stdio.h>

int main(){
	
	int a[10] = {1,5,7,3,2,9};
	
	int n = 6;
	int i;
	
	printf("original array :");
	for (i = 0; i < n; i++){
		printf("%d", a[i]);
	}
	
	printf("\nreversed array :");
	for (i = n - 1; i >= 0; i--){
			printf("%d", a[i]);
	}
	printf("\n");
}
