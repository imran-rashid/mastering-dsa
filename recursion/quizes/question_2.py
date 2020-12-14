# https://www.geeksforgeeks.org/pass-by-reference-vs-value-in-python/
# https://realpython.com/python-pass-by-reference/
# https://www.geeksforgeeks.org/is-python-call-by-reference-or-call-by-value/

def foo(n, sum):
    k = 0
    j = 0
    if (n == 0): return
    k = n % 10
    j = n // 10
    sum += k
    foo(j, sum)
    print(k) # 2 0 4 8 (returning time)

sum = 0 # since sum is containing primitive value(immutable) sum is passed as by value.
foo(2048, sum)
print(sum) # 0