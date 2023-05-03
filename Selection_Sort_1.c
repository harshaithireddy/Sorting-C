#include<stdio.h>
#include<limits.h>

void selectionSort(int A[], int n){
    int i,j;
    int B[n];
    for(i=0; i<n; i++){
        int min = A[i];
        int min_ind = i;
        for(j=i+1; j<n; j++){
            if(min > A[j]){
                min = A[j];
                min_ind = j;
            }
        }
        B[i] = min;
        A[min_ind] = INT_MAX;
    }
    for(i=0; i<n; i++){
        A[i]=B[i];
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    selectionSort(A, n);

    for(i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    return 0;
}

