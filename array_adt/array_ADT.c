// Array Abstract data types

#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *array;
    int size;
    int length;
};

// time complexity is O(n)
void display(struct Array *arr){
    printf("values are ");
    for(int i = 0; i < arr->length; i++){
        printf("%d ", arr-> array[i]);
    }
    printf("\n");
}

// time complexity is O(n)
void insert(struct Array *arr, int value, int index){
    if (index >= 0 && index <= arr->length){
        for(int i = arr->length; i > index; i--){
            arr->array[i] = arr->array[i-1];
        }
        arr->array[index] = value;
        arr->length += 1;
    } else {
        printf("Out of range\n");
    }
}

// time complexity is O(1)
void append(struct Array *arr, int value){
    arr->array[arr->length] = value;
    arr->length += 1;
}

// time complexity is O(n)
void delete_(struct Array *arr, int index){
    if (index >= 0 && index <= arr->length){
        int value = arr->array[index];

        for(int i = index; i < (arr->length - 1); i++){
            arr->array[i] = arr->array[i + 1];
        }
        arr->length--;
    } else {
        printf("Out of range\n");
    }
}

// time complexity is O(1)
int get(struct Array *arr, int index){
    return arr->array[index];
}

// time complexity is O(1)
void set(struct Array *arr, int value, int index){
    if (index >= 0 && (index <= arr->length)){
        arr->array[index] = value;
    } else {
        printf("Out of range\n");
    }
}

// time complexity is O(n)
int isSorted(struct Array *arr){
    for(int i = 0; i < arr->length - 1; i++){
        if (arr->array[i] > arr->array[i+1]){
            return 0;
        }
    }
    return 1;
}

// time complexity is O(n)
void reverse(struct Array arr){
    printf("Reverse values are ");
    for(int i = arr.length - 1; i >= 0; i--){
        printf("%d ", arr.array[i]);
    }
    printf("\n");
}

// time complexity is O(n)
int max(struct Array *arr){
    int max_value = arr->array[0];
    for(int i = 0; i < arr->length; i++){
        if (arr->array[i] > max_value){
            max_value = arr->array[i];
        }
    }
    return max_value;
}

// time complexity is O(n)
int min(struct Array *arr){
    int min_value = arr->array[0];
    for(int i = 0; i < arr->length; i++){
        if (arr->array[i] < min_value){
            min_value = arr->array[i];
        }
    }
    return min_value;
}

// time complexity is O(n)
void merge(struct Array *arr){
    int n, index = 0;
    int array2[n];
    
    printf("Number of elements ");
    scanf("%d", &n);

    printf("Enter the elements ");
    for(int i = 0; i < n; i++){
        scanf("%d", &array2[i]);
    }

    int l = (n + arr->length);
    int mergeArray[l];
    // copy the 1st array's value
    for(int i = 0; i < arr->length; i++){
        mergeArray[index] = arr->array[i];
        index++;
    }

    // copy the 2nd array's value
    for(int i = 0; i < n; i++){
        mergeArray[index] = array2[i];
        index++;
    }

    printf("After merging the array is ");
    for(int i = 0; i < l; i++){
        printf("%d ", mergeArray[i]);
    }
    printf("\n");
}

// time complexity is O(n)
void insertSort(struct Array *arr, int value, int index){
    if (isSorted(arr)){
        int i = arr->length;
        while (i > index) {
            arr->array[i] = arr->array[i-1];
            i--;
        }
        arr->array[index] = value;
        arr->length++;
    } else {
        printf("please sort the array first\n");
    }
}

// time complexity is O(n)
void deleteSort(struct Array *arr, int index){
    if (isSorted(arr)){
        int i = arr->length;
        while (index < i-1){
            arr->array[index] = arr->array[index+1];
            index++;
        }
        arr->length--;
    } else {
        printf("please sort the array first\n");
    }
}

// time complexity is O(n)
void minMaxExchange(struct Array *arr){
    int min = arr->array[0];
    int max = arr->array[0];
    int min_pos = arr->array[0];
    int max_pos = arr->array[0];

    for(int i = 0; i < arr->length; i++){
        if (arr->array[i] > max){
            max = arr->array[i];
            max_pos = i;
        } else if (arr->array[i] < min){
            min = arr->array[i];
            min_pos = i;
        }
    }

    // swaping smallest and largest
    for(int i = 0; i < arr->length; i++){
        if (max_pos == i){
            arr->array[i] = min;
        } else if (min_pos == i){
            arr->array[i] = max;
        }
    }

    // print the values
    printf("Values are ");
    for(int i = 0; i < arr->length; i++){
        printf("%d ", arr->array[i]);
    }
    printf("\n");
}

int isEmpty(struct Array *arr){
    if (arr->length == 0){
        return 1;
    }
    return 0;
}

int main(){
    struct Array array_;
    array_.length = 0;
    array_.size = 10;
    array_.array = (int *)malloc(array_.size*sizeof(int));

   insert(&array_, 5,0);
   insert(&array_, 6,1);
   insert(&array_, 7,2);
   display(&array_); // 5 6 7
   printf("%d\n", get(&array_, 1)); // 6
   set(&array_, 100, 1); //
   display(&array_); // 5 100 7
   delete_(&array_, 0); // 5
   display(&array_); // 100 7
   printf("%d\n", isEmpty(&array_)); // 0
   insert(&array_, 50, 0); // 50 100 7
   printf("%d\n", max(&array_)); // 100
   printf("%d\n", min(&array_)); // 7
   minMaxExchange(&array_); // 50 7 100
   display(&array_); // 50 7 100
   printf("%d\n", isSorted(&array_)); // 0
   reverse(array_);
   merge(&array_);

   display(&array_);
   insertSort(&array_, 50, 1);
   deleteSort(&array_, 1);

   free(array_.array);
}