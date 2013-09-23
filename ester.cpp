#include <stdio.h>

char pat[] = "ROYGBIV", pat2[] = "GBIVGB";

int main(){
	int n;
	
	scanf(" %d ", &n);
	
	setvbuf (stdout, NULL, _IONBF, 0);
	for (int i = 0, len = (n/7); i < len; ++i)
	{
		printf("%s", pat);
	}
	for (int i = 0, len = (n%7); i < len; ++i)
	{
		printf("%c", pat2[i]);
	}
	printf("\n");

	return 0;
}
