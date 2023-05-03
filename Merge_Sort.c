#include<stdio.h>
void Merge(int A[], int low, int mid, int high){
	int i = low;
	int j = mid+1;
	int B[100];
	int x = 0;

    while(i<=mid && j<=high){
        if(A[i] < A[j])
            B[x++] = A[i++];
        else
            B[x++] = A[j++];
    }

    while(i<=mid)
        B[x++] = A[i++];

    while(j<=high)
        B[x++] = A[j++];
	
	for(i=low; i<=high; i++){
		A[i] = B[i-low];
	}
}

void MergeSort(int A[], int n){
	int low,high,mid,k,j;
	for(k=2; k<=n; k*=2){
		for(j=0; j+k-1<n; j+=k){
			low = j;
			high = k+j-1;
			mid= (low+high)/2;
			Merge(A, low, mid, high);
		}
	}
	if(k/2 < n){
		Merge(A,0,k/2-1,n-1);
	}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    MergeSort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}
