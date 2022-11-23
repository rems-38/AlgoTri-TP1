#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"




void affiche(int* a, int n){
	int i;
	for (i = 0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");
}


int compare(int* a, int *b, int n){
	int i;
	for(i=0; i < n ; i++){
		if (a[i] != b[i]){
			printf("Comparison FAILED at index %d\n\n", i);
			return i;
		}
	}
	printf("Comparison OK\n\n");
	return -1;	
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int tri_bulle(int* a, int n){
	int swap_number = 0;
	int i, j;
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < n - 1 ; j++){
			if (a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
				swap_number++;
			}
		}
	}
	return swap_number;
}



int tri_insertion(int* a, int n){
	int swap_number = 0;
	int i, j;
	for (i = 1 ; i < n ; i++){
		for (j = i ; j > 0 ; j--){
			if (a[j] < a[j-1]){
				swap(&a[j], &a[j-1]);
				swap_number++;
			}
		}
	}
	return swap_number;
}

