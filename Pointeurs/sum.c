#include <stdio.h>

double sum1 (double *tab, int size){
	double res = 0;
	for (int i = 0;i<size;i++){
		res = res + tab[i];
	}
	return res;
}

double sum2 (double *tab, int size){
	double res = 0;
	double *tempo = tab;
	for(double *p = tab;p<tempo;p++){
		res = res + *p;
	}
	return res;
}

int main (void){
	double tab[] = {100,10,1,0.1,0.01};
	printf(
	printf(
}
