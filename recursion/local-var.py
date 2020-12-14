# function for sum of natural numbers

def Sum(n):
    if n > 0:
        return Sum(n-1) + n
    return 0

if __name__ == '__main__':
    print(Sum(5)) # 15

# time complexity is O(n) and space complexity is O(n)