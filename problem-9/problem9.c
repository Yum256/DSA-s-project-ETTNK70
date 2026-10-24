#include<stdio.h>
void problem9 (int a[], int n){
    int counter = 0;
    int flag = 1;
    int max = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            counter++;
        }
    }
    if (counter == 0){
        printf("No zero in array \n");
        return;
    }
    else if (counter == 1){
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                printf("%d\n", i);
                return;
            }
        }
    }
    else{
    int index [counter+1];
    int j = 0;
    for (int i = 0; i < n ; i++){
        if (a[i] == 0){
            index[j] = i;
            j++;
        }
        }
    index[counter] = n;
    for (int i = 1; i < counter; i++){
        if (index[i+1] - index[i-1] > max){
            max = index[i+1] - index[i-1];
            flag = i;
        }
    }
    printf("%d\n", index[flag]);
}
}
int main(){
    int a[] = {1, 0, 0, 1, 1, 0, 1, 1, 0, 1};
    int n = sizeof(a)/sizeof(a[0]);
    problem9(a, n);
    int b[] = {1, 1, 1, 1, 1, 1};
    int m = sizeof(b)/sizeof(b[0]);
    problem9(b, m);
    int c[] = {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    int p = sizeof(c)/sizeof(c[0]);
    problem9(c, p);
    return 0;
}
