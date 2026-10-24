#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void problem7(int a[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 0 ){
            swap(&a[i], &a[j]);
            j++;
        }
    }
}
int main(){
    int a[] = {6, 9, 8, 0, 4, 0, 5, 0, 5, 0};
    int n = sizeof(a)/sizeof(a[0]);
    problem7(a, n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    int m = sizeof(b)/sizeof(b[0]);
    problem7(b, m);
    for(int i = 0; i < m; i++){
        printf("%d ", b[i]);
    }
    return 0;
}