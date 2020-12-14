# find the multiple missing numbers in an sorted array

# input Array elements
# find difference between currentArrayValue and value's index
# while i < arrayLength
# while difference < currentElementDifference (if missing elements are more than 1 at a time)
# then print the missing number (difference + currentIndex)
# increment the difference


print("Enter the elements", end=' ')
array = list(map(int, input().split()))
difference = array[0] - 0 # firstValue - index

# time is O(n)
for i in range(len(array)):
    while (difference < array[i]-i):
        print(f'Missing value is {i+difference}')
        difference += 1

# print missing values in one line
diff = array[0] - 0
missingValues = list()

for i in range(len(array)):
    while (diff < array[i]-i):
        missingValues.append((i+diff))
        diff += 1

print(f'The missing values are', end=' ')
for i in missingValues:
    print(i, end=' ')

print()