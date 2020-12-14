# find the duplicates element in an sorted array

def duplicateElement(array):
	lastDuplicate = 0
	for i in range(len(array)-1):

		if (array[i] == array[i+1] and array[i] != lastDuplicate):
			print(f'Duplicate value is {array[i]}')
			lastDuplicate = array[i]


if __name__ == '__main__':
	array = [3,6,8,8,10,12,15,15,15,20]
	duplicateElement(array)
	
