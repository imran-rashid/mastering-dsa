# nCr == n! / r!*(n-r)! (combination formula)

# n! or r! or (n-r)!
# time is O(n), space O(1)
def factorial(n):
    if n > 1:
        return n*factorial(n-1)
    return 1

def main(n, r):
    t1 = factorial(n)
    t2 = factorial(r)
    t3 = factorial(n-r)

    return t1 // (t2*t3)

if __name__ == '__main__':
    print(main(5, 2)) # 6