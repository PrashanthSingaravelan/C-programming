#include<stdio.h>
#include<conio.h>

int A[3][3] = {90,91,92,80,81,82,70,71,72};

void Display(int n) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}

void Display_pointers(int n) {
    int *ptr;
	ptr = &A[0][0];  // points to the 1st row of the array (1st 1D array)
	// ptr = A[0];

	for(int i=0;i<3;i++) {
		printf("%d ",*ptr);
		ptr++;
	}
}

void Represent_pointers() {
    int *ptr;
	ptr = A[0];
	printf("\nptr : %d",ptr);
	
	printf("\nA   : %d",A);
	printf("\n*A  : %d",*A);
	printf("\n&A  : %d",&A);
	
	printf("\n&A[0][0] : %d",&A[0][0]);
	printf("\nA[0] : %d",A[0]);
}

void Next() {
    printf("\nA+1  : %d",A+1);
    printf("\n*(A+1): %d",*(A+1));
	printf("\n&A[1] : %d",&A[1]);
	
	printf("\n&A[1][0] : %d",&A[1][0]);
	printf("\nA[1] : %d",A[1]);
}

void Element(int i,int j) {
	printf("\nUsing array indexing : %d",A[i][j]);
	printf("\nUsing pointers : %d", * (*(A+i)+j) );
}

int main() {
	
	printf("Normal display\n");
	Display(3);
	
	printf("\nDisplaying with pointers\n");
    Display_pointers(3);
    
    printf("\n\nDifferent methods of printing pointers");
    Represent_pointers();

    printf("\n\nPointing to the next in array");
    Next();

    printf("\n\nElement at a particular index using pointers");
    Element(1,2);

    /* Question ???
    *(a+1) -->
    *(*a+1) --> 
    */
    printf("\n\n*(A+1)  : %d",*(A+1));
    printf("\n*(*A+1) : %d",*(*A+1));
    printf("\n**A : %d",**A);

    int *ptr;
    ptr = &A[0][0];
    //printf("\n**ptr : %d",**ptr); --> ptr --> Arr[0][0], *ptr prints the value --> Arr[0][0], **ptr --> error

     /* Question ???
    a[1]+1  -->
    &a[1]+1 --> 
    */

    printf("\n\n1D array");
	int arr1[] = {45,46,47};
	printf("\narr1  : %d",arr1);
    printf("\n&arr1 : %d",&arr1);
	printf("\narr1 + 1  : %d",arr1+1);
	printf("\n&arr1 + 1 : %d",&arr1+1); // (complete array --> 12)
    
    // back to the question
    printf("\n\nA[1] + 1  : ,%d",A[1]+1);
    printf("\n&A[1] + 1 : ,%d",&A[1]+1); 
    // &arr1[1] --> (Complete 2nd 1-D array --> 12) and then points to the 3rd 1-D array
    printf("\n(&A[1]+1) : %d",(&A[1]+1));

    return 0;
}
