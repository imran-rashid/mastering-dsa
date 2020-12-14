# find the single missing element in an sorted array

# input Array elements
# find difference between currentArrayValue and value's index
# repeat next 2 steps while i < arrayLength
# if difference < currentElementDifference
# then print the missing number (difference + currentIndex)

print('Enter the elements', end=' ')
array = list(map(int, input().split()))
diff = array[0] - 0

for i in range(len(array)):
    if (diff < array[i]-i):
        print(f'Missing value is {(i+diff)}')