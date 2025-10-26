#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter %d elements(0 to %d):\n", n, n - 1);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        freq[i] = 0;
    }
    for(i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    printf("Duplicate elements are:\n");
    int found = 0;
    for(i = 0; i < n; i++){
        if(freq[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if(!found) printf("-1");
    return 0;
}
