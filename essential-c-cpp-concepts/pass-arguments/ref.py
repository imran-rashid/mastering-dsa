# python reference the object not the variable
# so anything change won't reflect old

x = 10
y = x
print(x, y) # 10 10
x = 50
print(x, y) # 50 10