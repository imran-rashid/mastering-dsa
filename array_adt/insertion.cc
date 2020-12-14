// program for insert an item at a given index in an array

#include <cstdio>

struct Array {
    int *array;
    int size;
    int length;
};

void insert(struct Array *arr, int index, int value){
    if (index >= 0 and arr->length >= index){
        for(int i = arr->length; i > index; i--){
            arr->array[i] = arr->array[i-1];
        }
        arr->array[index] = value;
        arr->length += 1;
    }
}

void display(struct Array *arr){
    for(int i = 0; i < arr->length; i++){
        printf("array[%d] = %d\n", i, arr->array[i]);
    }
}

int main(){
    struct Array arr_;
    printf("Enter the array size ");
    scanf("%d", &arr_.size);

    arr_.array = new int[arr_.size];
    arr_.length = 0;
    int n;
    printf("Enter the number of elements in the array ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("array[%d] = ", i);
        scanf("%d", &arr_.array[i]);
    }
    arr_.length = n;

    int value, index;
    printf("Enter the position ");
    scanf("%d", &index);
    printf("Enter the number to be inserted ");
    scanf("%d", &value);
    insert(&arr_, index, value);

    printf("The array after insertion of %d is\n", value);
    display(&arr_);
    delete []arr_.array;
    arr_.array = nullptr;
    return 0;
}