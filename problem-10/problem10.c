#include<stdio.h>
void problem10(int a[], int n){
    int counter = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            if(a[j] == a[i]){
                counter++;
            }
        }
        if (counter > n/2){
            printf("%d\n", a[i]);
            return;
        }
        counter = 0;
    }
    printf("no majority element found\n");
}
int main(){
    int a[] ={4, 5, 4, 2, 4, 1, 3, 4, 4, 3, 4, 4};
    int n = sizeof(a)/sizeof(a[0]);
    problem10(a, n);
    int b[] ={4, 3, 5, 6, 5, 7, 8, 2, 3, 4, 5};
    int m = sizeof(b)/sizeof(b[0]);
    problem10(b, m);
    return 0;
}