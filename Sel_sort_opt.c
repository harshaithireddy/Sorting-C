#include<stdio.h>
void sel_sort(int A[], int n){
    int i,j;
    for(i=0;i<n;i++){
        int min_ind=i;
        for(j=i;j<n;j++){
            if(A[min_ind] > A[j])
            {
                min_ind=j;
            }
        }
        int temp = A[min_ind];
        A[min_ind] = A[i];
        A[i] = temp;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    sel_sort(A,n);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}
