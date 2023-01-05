#include <stdio.h>

void Arr(int* A, int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void Bsort(int* A, int n){
    int temp;
    for(int i=0; i<n-1; i++){
        printf("Working on Pass: %d\n",i+1);
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

}



int main(){
    int A[]={999, 888,777,666,555,444};
    int n=6;
    Arr(A,n);
    Bsort(A,n);
    Arr(A,n);
    return 0;
}