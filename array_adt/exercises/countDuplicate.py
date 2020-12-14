# find the duplicate elements in an sorted array using hash table

# space and time is O(n)
def duplicate(array, array2):
	for i in range(len(array)):
		array2[array[i]] += 1

	for i in range(len(array2)):
		if (array2[i] > 1):
			print(f'{i} is occurred {array2[i]} times')


if __name__ == '__main__':
	array = [3,6,8,8,10,12,15,15,15,20]
	array2 = 21*[0]
	duplicate(array, array2)