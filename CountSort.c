#include<stdio.h>

int Get_Max(int A[], int n) {
	int i,maxi=A[0];
	for(i=1; i<n; i++) {
		if(maxi < A[i]) 
			maxi = A[i];
	}
	return maxi;
}

void CountSort(int A[], int n) {
	int Maxi = Get_Max(A,n);
	Maxi++;
	int frq[100] = {0};
	int i;
	for(i=0; i<n ;i++) {
		frq[A[i]]++;
	}
	for(i=1; i<100; i++) {
		frq[i] = frq[i] + frq[i-1];
	}
	int B[n];
	for(i=n-1; i>=0; i--) {
		frq[A[i]]--;
		B[frq[A[i]]] = A[i];
	}
	for(i=0; i<n; i++) {
		A[i] = B[i];
	}
}

int main() {
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0; i<n; i++) {
		scanf("%d",&A[i]);
	}
	CountSort(A,n);
	for(i=0; i<n; i++) {
		printf("%d ",A[i]);
	}
}
