#include<stdio.h>
int Partition(int A[], int low, int high) {
	int pivot = A[low];
	int i = low;
	int j = high;
	while(i < j) {
		// search for bigger value than pivot
		while(A[i] <= pivot && i <= high-1) {
			i++;
		}
		//search for low value than pivot
		while(A[j] > pivot && j >= low+1) {
			j--;
		}
		//then swap them
		//you are moving bigger value to right and smaller value to left
		if(i < j) {
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	A[low] = A[j];
	A[j] = pivot;
	return j;
}

void QuickSort(int A[], int low, int high) {
	if (low > high) return;
	int p_index = Partition(A, low, high);
	QuickSort(A, low, p_index-1);
	QuickSort(A, p_index+1, high);
}
int main() {
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0; i<n; i++) {
		scanf("%d",&A[i]);
	}
	QuickSort(A,0,n-1);
	for(i=0; i<n; i++) {
		printf("%d ",A[i]);
	}
}


