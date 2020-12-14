# n == 3, fn calls are 15 (2^4-1) == 2^(n+1) - 1
# n == 2, function calls are 7

# time is O(2^n)
def tower_of_hanoi(n, A, B, C):
    if n > 0:
        tower_of_hanoi(n-1, A, C, B)
        print(f'Move from {A} to {C}')
        tower_of_hanoi(n-1, B, A, C)
    return None

print(tower_of_hanoi(3, 1, 2, 3))