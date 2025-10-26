#include<stdio.h>
int search(int arr[], int n, int key){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}
int main(){
    int arr[10], key, result, i;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = search(arr, 10, key);
    printf("Index: %d", result);
    return 0;
}
