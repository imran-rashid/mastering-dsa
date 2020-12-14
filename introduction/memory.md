# Memory

## Static vs Dynamic Memory

The program doesn't use entire memory. It divided into 3 parts.

- code
- heap
- stack

_Stack_

program can directly access stack and code but can't access heap. For access heap have to use pointer. Whatever program has been written it takes spaces in stack. and how much space is required it is decided in compile time... So it is called static memory allocation. How much memory is required it is fixed. After end the function call memory is automatically destroyed. no need to delete explicitly

_Heap_

Heap memory is unorganized. Heap use dynamic memory allocation. Heap is used for extra memory. when required call them and when don't need release them.

In C/c++ it's like

```cpp
int *p;

// C++
p = new int[5]; // allocate 20 bytes.

// C
p = (int *)(malloc(5*sizeof(int)));
```

After working on heap memory should be de-allocated otherwise it is waster of memory and other program can be crushed because previous allocated memory is still there.

```cpp
delete  []p;
```

## Types of data structure

data structure can be classified in 2 types

- physical data structure
    - array
    - linked list
- logical data structure
    - linear
        - stack
        - queue
    - non-linear
        - trees
        - graphs
    - tabular
        - hash table

Physical data structures are meant for storing data. Logical data structures are worked on physical data structures. (searching, sorting)

Array is storing stack/heap and list is storing heap with the help of pointer(address)
logical data structures can be implement either array or linked list or sometimes both.
