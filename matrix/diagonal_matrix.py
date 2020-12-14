# Program for diagonal matrix

# set the value in matrix
def Set(matrix, row, column, value):
    # M[i,j] = non-zero if i == j
    if(row == column):
        matrix.append(value)
    
# get the value from matrix
def Get(matrix, row, column):
    if (row == column):
        return matrix[row-1]
    return None

# display the entire matrix
def display(matrix, dimension):
    for i in range(0, dimension):
        for j in range(0, dimension):
            if (i == j):
                print(matrix[i], end=' ')
            else:
                print('0 ', end=' ')
        print() # new line

if __name__ == '__main__':
    matrix = []
    dimension = 5
    Set(matrix, 1, 1, 15)
    Set(matrix, 2, 2, 30)
    Set(matrix, 3, 3, 45)
    Set(matrix, 4, 4, 60)
    Set(matrix, 5, 5, 75)

    display(matrix, dimension)
