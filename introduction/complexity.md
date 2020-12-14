# Complexity

## Time Complexity

Mostly time complexity depends on what procedure we're following for writing out program

Some examples of time complexity code

```cpp
int sum(int a[], int n){
    int s = 0; --------------------- execute 1 time

    for (int i = 0; i < n; i++){ ------------ execute n+1 times
        s += a[i]; --------------- execute n times
    }
    return s; ---------- execute 1 time
}

/** time complexity of this function is O(n)
 *  a[i] depends on n, repeating n times
 *  space complexity is O(n)
*/
```

```cpp
void swap(int x, int y){
    int temp = x; ---------- execute 1 time
    x = y; ------------ execute 1 time
    y = x; ------------- execute 1 time
}

// time complexity and space complexity of this function is O(1)
```

```cpp
void add(int a, int b, int n){
    int c[][]; ------------------- execute 1 time

    for(int i < 0; i < n; i++){ --------------- execute n+1 times
        for(int j = 0; i < n; j++){ -------------- execute n(n+1) times
            c[i][j] += a[i][j] + b[i][j]; -------------- execute n^2 times
        }
    }
}

// time complexity is O(n^2) and space complexity is O(n^2)
```

```cpp
void fun2(int x[], a){ ------------------------ execute n times
    for(auto & i: x){
        cout << i <<endl;
    }
} 

void fun1(int A[], n){ -------------------- so this n also
    fun2(int A, n);
} 

int main(){
    int A[] = {10,20, 30, 40};
    int n = 4;
    fun1(A, n);
}

// time complexity and space complexity is O(n)
```

## Space complexity

it depends on 2 parts...

- fixed part/constant variable
    - these variables are independent
- variable part / changeable part
     these are dependent other variables

```py
def fun(x, y, z):
    return x*y*z+(x-y)

# space(program) = C(const) + V(var)
    # = 3 + 0
    # = 1
# space complexity is O(1)
```

```py
def rSum(x, n):
    if n == 0: return 0 ------ 1 time
    return rSum(x, n-1) + x[n] -------- n times


# s(p) == C + V
    # == 3n + 1
        # (x == 1, n - 1 == 1, x[n] == 1) is required for rSum 1 time iteration
    # == n
```