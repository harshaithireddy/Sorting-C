#include<stdio.h>

void Insertion_Sort(int A[], int n){
	int i;
	for(i=0; i<n-1; i++){
		int j = i+1;
		int temp = A[j];
		while(temp < A[j-1] && j > 0){
			A[j] = A[j-1];
			j--;
		}
		A[j] = temp;
	}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    Insertion_Sort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}
