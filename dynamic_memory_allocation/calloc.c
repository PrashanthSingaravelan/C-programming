#include<stdio.h>
#include<stdlib.h>

int main() {
	int n=5;
	int *ptr = (int*)calloc(5,sizeof(int));

	if (ptr==NULL) {
		printf("Memory is not allocated");
		exit(0);
	}
	else if (ptr!=NULL) {
		printf("Memory is successfully allocated");

		for(int i=0;i<n;i++) {	ptr[i] = i + 1;	}

	printf("\nThe elements of the array : ");
	for(int i=0;i<n;i++) { printf("%d ", ptr[i]);    }
	}
	return 0;
}
