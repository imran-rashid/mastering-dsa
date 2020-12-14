
# Recursive way
def func(n):
	if (n > 0):
		func(n-1)
		print(n)
	return;

# Loop
def func2(n):
	for i in range(1, n+1):
		print(i)

if __name__ == '__main__':
	func(3);
	func2(3);