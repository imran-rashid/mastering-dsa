# calculate the exponent using recursion and loop
# https://www.geeksforgeeks.org/write-an-iterative-olog-y-function-for-powx-y/

# optimized solution

# time complexity is O(logn)
def power2(m, n):
	if n > 0:
		# when n is odd
		if n & 1:
			return m*power2(m*m, n//2)
		return power2(m*m, n//2)
	return 1


# time complexity is O(logn) and space is extra O(1)
def power(x, y):
	res = 1

	while y > 0:
		# when y is odd
		if y & 1:
			res *= x

		y //= 2
		x *= x

	return res

print(power2(2, 9))
print(power(2, 9))
