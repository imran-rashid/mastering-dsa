# find the result of this below program

def f(x, c):
    c -= 1
    if (c == 0): return 1
    x += 1
    return f(x, c) * x

p = 5
print(f(p,p)) # 3024