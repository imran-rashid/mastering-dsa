// linear search on an array

#include <cstdio>

int linearSearch(int array[], int length, int value){
    for (int i = 0; i < length; i++){
        if (value == array[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("How many elements ");
    scanf("%d", &n);
    int array[n];

    printf("Enter elements ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    int value;
    printf("Which value do you want to search ");
    scanf("%d", &value);
    int length = sizeof(array)/sizeof(int);
    int result = linearSearch(array, length, value);

    if (result == -1){
        printf("Element not found at given index\n");
    } else {
        printf("Element found at index %d\n", result);
    }
}