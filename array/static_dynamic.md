# Static vs Dynamic Memory

static array means the size of the array is fixed and can not be reallocated again. It is constant. Dynamic array means size of the array is not fixed.

In __C__ language memory is allocated(distributed) during run time and size of the array is decided at compile time.

```cpp
int A[5]; // -------- [] this fill up must be constant value
```

In __C++__ language it is possible memory will be allocated during run time and the size of the array is decided at run time.

```cpp
int n;
cin >> n;
int A[n]; // -------- run time
```

__Access array from heap__

```cpp
int *p; // it will take spaces in stack
p = new int [5]; // C++
p = (int *)malloc(5*sizeof(int)); // C

// delete the heap memory
delete []p; // C++
free(p); // C
```
