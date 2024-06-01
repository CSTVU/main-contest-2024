#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i, j, sum = 0, max = 0;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++){
        sum = 0;
        for (j = i; j < n; j++){
            sum += arr[j];
            if (sum > max) max = sum;
        }
    }
    printf("%d", max);
    return 0;
}
