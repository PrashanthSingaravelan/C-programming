#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 5; // initial size of the block
	int *ptr = (int*)malloc(n*sizeof(int));

	if (ptr==NULL) {
			printf("Memory not allocated successfully");
			exit(0);
	}

	else {
			printf("Memory allocated successfully");

			/* Filling the elements of array from index-0 to index-4 */
			for(int i=0;i<n;i++) {	ptr[i] = i+1;	}

			/* Print the elements of the array from index-0 to index-4 */
	        printf("\n(Before)The elements of the array are: ");
	        for (int i = 0; i < n; ++i) { printf("%d, ", ptr[i]);     }

			// increasing the size of block
			n = n + 5;   // n=10
			ptr = realloc(ptr,n*sizeof(int));

			/* Filling the elements of array from index-5 to index-9 */
			 for (int i = 5; i < n; ++i) { ptr[i] = i + 1;     }

	        /* Print the elements of the complete array */
	        printf("\n(After) The elements of the array are: ");
	        for (int i = 0; i < n; ++i) { printf("%d, ", ptr[i]); }

	        free(ptr);
    }
}

