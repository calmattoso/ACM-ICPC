#include <stdio.h>

int main(){
	int n;
	
	scanf(" %d ", &n);
	
	if(n % 2 == 0) {
		for(int i = n; i >= 1; i--){
			if(i < n)
				printf(" ");
			printf("%d", i);
		}
	}
	else
		printf("-1");

	printf("\n");

	return 0;
}
