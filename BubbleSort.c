#include<stdio.h>
void BubbleSort(int A[], int n) {
	int i,j;
	for(i=0; i<n-1; i++) {
		int sc=0;
		for(j=0; j<n-1-i; j++) {
			if(A[j] > A[j+1]) {
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				sc++;
			}
		}
		if(sc==0) {
			break;
		}
	}
}

int main() {
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0; i<n; i++) {
		scanf("%d",&A[i]);
	}
	BubbleSort(A, n);
	for(i=0; i<n; i++) {
		printf("%d ",A[i]);
	}
}
