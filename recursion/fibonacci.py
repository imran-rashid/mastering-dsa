# fibonacci series are ... 0 1 1 2 3 5 8 13...
# program for get n-th position's fibonacci number

# when a recursive function is calling itself more than one time with same parameter 
# then it is called excessive recursion
# recursive version, time complexity is ~O(2^n)
def fibonacci(n):
    if n <= 1: return n
    return fibonacci(n-2) + fibonacci(n-1)

print(fibonacci(7)) # 13


# iterative version, time complexity is O(n) & space is O(1)
def IterativeFibonacci(n):
    if n <= 1: return n

    first_num = 0
    result = 0
    second_num = 1

    for _ in range(2, n+1):
        result = first_num + second_num # 13
        first_num = second_num # 8
        second_num = result # 13
    return result
print(IterativeFibonacci(7)) # 13


# this approach is called memoization recursion
# time complexity is O(n+1) which is O(n), space O(n)

n = int(input())
arrays = [-1]*n

def fibonacci2(n):
    if n <= 1:
        arrays[n] = n
        return n

    if (arrays[n-2] == -1): 
        arrays[n-2] = fibonacci2(n-2)
    if (arrays[n-1] == -1): 
        arrays[n-1] = fibonacci2(n-1)

    return arrays[n-2]+arrays[n-1]


print(fibonacci2(n))


