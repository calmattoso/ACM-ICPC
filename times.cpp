#include <stdio.h>

typedef struct time
{
	int h, m;
} Time;

Time palin[] = {
	{0,0},   {1,10},  {2,20},  {3,30},  {4,40}, {5,50}, 
	{10,1}, {11,11}, {12,21}, {13,31}, {14,41}, 
	{15,51}, {20,2},  {21,12}, {22,22}, {23,32} 
};

int main(){
	int h, m, mil, i, n = 16;
	
	scanf(" %d %*c %d ", &h, &m);
	
	mil = h*60 + m;
	for(i = 0; i < n && (mil >= (palin[i].h*60 + palin[i].m)); i++);


	if(palin[i%n].h < 10)
		printf("0");
	printf("%d:", palin[i%n].h);


	if(palin[i%n].m < 10)
		printf("0");
	printf("%d\n", palin[i%n].m);

	return 0;
}
