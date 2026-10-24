#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void problem2( int a[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 1 ){
            swap(&a[i], &a[j]);
            j++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int a[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0};
    int n = sizeof(a)/sizeof(a[0]);
    problem2(a, n);
    int b[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int m = sizeof(b)/sizeof(b[0]);
    problem2(b, m);
    return 0;
}