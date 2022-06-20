#include<stdio.h>
	int main(){  	
	float n, h;
	
	h = 0;

  printf ("Insira um número qualquer:");    
	scanf("%f",&n);
	
	while (n >= 1){
		h = h + 1 / n;
		n--;
	}

	printf("%.2f\n",h);
	
	return 0;
}
