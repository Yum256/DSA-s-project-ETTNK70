#include<stdio.h>
void problem8 ( int a[], int b[], int n, int m){
    int temp[n+m];
    int u = 0;
    int v = 0;
    for (int i = 0; i < n + m; i++){
        if (u < n && (v >= m || a[u] <= b[v])){
            temp[i] = a[u];
            u++;
        }
        else{
            temp[i] = b[v];
            v++;
        }
    }
    printf("A = ");
    for (int i = 0; i < n; i++){
        printf("%d ", temp[i]);
    }
    printf("\nB = ");
    for (int i = 0; i < m; i++){
        printf("%d ", temp[i + n]);
    }
    printf("\n");
}
int main(){
    int a1[] = {1, 4, 6, 7, 8, 9};
    int b1[] = {2, 5, 12, 13};
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(b1)/sizeof(b1[0]);
    problem8(a1, b1, n, m);
    int a2[] = {1, 1, 1, 2, 3, 3, 4};
    int b2[] = {1, 2, 2, 2, 2};
    n = sizeof(a2)/sizeof(a2[0]);
    m = sizeof(b2)/sizeof(b2[0]);
    problem8(a2, b2, n, m);
    return 0;
}