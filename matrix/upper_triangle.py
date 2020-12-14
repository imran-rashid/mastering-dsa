# upper triangle matrix in row major order

class UpperTriangle:
    def __init__(self, n):
        self.n = n
        self.array = [-1]*((n*(n+1))//2)
    
    def set(self, row, column, value):
        if (row <= column):
            self.array.insert(row*self.n - ((row-1)*row)//2 + column-row, value)
    
    def get(self, row, column):
        if (row <= column):
            return self.array[row*self.n - ((row-1)*row)//2 + column-row]
        return None

    def display(self):
        for i in range(self.n):
            for j in range(self.n):
                if (i <= j): print(self.array[i*self.n - ((i-1)*i)//2 + j-i], end=' ')
                else: print('0', end= ' ')
            print()


if __name__ == '__main__':
    n = int(input('Enter dimension '))
    upper = UpperTriangle(n)

    for i in range(n):
        for j in range(n):
            x = int(input())
            upper.set(i, j, x)

    print('The matrix are')
    upper.display()
