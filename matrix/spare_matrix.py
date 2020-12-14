# 4 x 5 spare matrix
spareMatrix = [
    [0,0,3,0,4],
    [0,0,5,7,0],
    [0,0,0,0,0],
    [0,2,6,0,0]
]

nonZeroValues = 0
for i in range(4):
    for j in range(5):
        if spareMatrix[i][j] != 0:
            nonZeroValues += 1

# Longer ...
# compactMatrix = []

# for i in range(3):
#     y = []
#     for j in range(nonZeroValues):
#         y.append(0)
#     compactMatrix.append(y)

# making 3 x 6 matrix fill with 0
compactMatrix = [[0 for j in range(nonZeroValues)] for i in range(3)] 
k = 0

for i in range(4):
    for j in range(5):
        if (spareMatrix[i][j] != 0):
            compactMatrix[0][k] = i
            compactMatrix[1][k] = j
            compactMatrix[2][k] = spareMatrix[i][j]
            k += 1

# print the matrix
for i in compactMatrix:
    print(i) # print the row