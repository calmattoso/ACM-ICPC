#include <stdio.h>

#define min(a,b)  ((a<b)?a:b)

int n, k;

int ans(){
	int i, ans = 20000000;

	/*
	// Brute Force Solution
	for(i = n; i >= 0; i--){ // 2 
		for(int j = n; j >= 0; j--){ // 
			for(int _k = n; _k >= 0; _k--){
				for(int l = n; l >= 0; l--){
					if((i*2 + j*3 + _k*4 + l*5) == k && (i + j + _k + l) == n){
						ans = min(ans, i);
					}
				}
			}
		}
	}*/

	/* Carletti's Solution */
	if(k / n >= 3)
		return 0;

	float q = ((float) k) / n;
	if(q >= 2.0 && q < 3.0 )
		return (n - (k % n));
}

int main(int argc, char const *argv[])
{
	scanf(" %d %d ", &n, &k);	

	printf("%d\n", ans());

	return 0;
}