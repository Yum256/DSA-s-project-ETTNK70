#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void problem6 (int a[], int n){
    for ( int i = 1; i <= n-2 ; i+=2){
        if ( a[i - 1] > a[i]){
            swap(&a[i - 1], &a[i]);
        }
        if ( a[i] < a[i + 1]){
            swap(&a[i], &a[i + 1]);
        }
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 6, 7, 8};
    int b[] = {6, 7, 4, 6, 5, 9, 8};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    problem6(a, n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    problem6(b, m);
    for (int i = 0; i < m; i++){
        printf("%d ", b[i]);
    }
    return 0;
}