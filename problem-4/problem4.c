#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void problem4(int a[], int n){
    int dau = 0;
    int cuoi = n - 1;
    for (int i = 0; i < cuoi;i++){
        if ( a[i] < 1){
            swap(&a[i], &a[dau]);
            dau++;
        }
        else if( a[i] > 1){
            swap(&a[i], &a[cuoi]);
            cuoi--;
            i--;   
        }
    }
}
int main(){
    int a[] = {0, 2, 1, 1, 2, 0, 0, 1, 2, 2, 1, 0, 0};
    int n = sizeof(a)/sizeof(a[0]);
    problem4(a, n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    int b[] = {0, 0, 2, 2, 0, 0, 2};
    int m = sizeof(b)/sizeof(b[0]);
    printf("\n");
    problem4(b, m);
    for (int i = 0; i < m; i++){
        printf("%d ", b[i]);
    }
    return 0;
}