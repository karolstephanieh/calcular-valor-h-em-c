#include<stdio.h>
	int main(){  	
	float n, h;
	
	printf ("Insira um número:");
	scanf("%f",&n);
	
	for (h = 1; n > 1; n--){
		h = h + 1 / n;
	}

	printf("%.2f\n",h);
	
	return 0;
}
