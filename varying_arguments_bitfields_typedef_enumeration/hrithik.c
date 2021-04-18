#include<stdio.h>
#include<stdlib.h>
int* arr(int n,int *A)
{
    int i;
    int *B;
    B = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)  {   B[i]=A[i]*A[i];     }
    return B;
}
int main()
{
    int n;
    int A[4] = {10,20,30,40};
    int *ptr=arr(4,A);    // int *ptr=arr(n,&A);
    for(int i=0;i<4;i++)
        printf("%d\t",ptr[i]);

}
