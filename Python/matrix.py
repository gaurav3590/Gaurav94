import numpy as np
class Matrix:

    def __init__(self,rows,columns):
        self.rows = rows
        self.columns = columns
        self.matrix = np.zeros((rows,columns))

    def get_rows(self):
        return self.rows

    def get_columns(self):
        return self.columns

    def set_element(self,i,j,value):
        self.matrix[i][j] = value

    def __add__(self,other):
        if self.rows == other.rows and self.columns == other.columns:
            result = Matrix(self.rows,self.columns)
            result.matrix = np.add(self.matrix,other.matrix)
        else:
            print("Addition is not Possible!!")
        return result

    def __mul__(self,other):
        if self.columns != other.rows:
            print('Multiplication is not Found!!')
        else:
            result = Matrix(self.rows,other.columns)
            result.matrix = np.dot(self.matrix,other.matrix)
        return result

    def __str__(self):
        return str(self.result)

matrix1 = Matrix(2, 2)
matrix1.set_element(0, 0, 1)
matrix1.set_element(0, 1, 2)
matrix1.set_element(1, 0, 3)
matrix1.set_element(1, 1, 4)
matrix2 = Matrix(2, 2)
matrix2.set_element(0, 0, 5)
matrix2.set_element(0, 1, 6)
matrix2.set_element(1, 0, 7)
matrix2.set_element(1, 1, 8)
print("Matrix 1:")
print(matrix1)
print("Matrix 2:")
print(matrix2)
print("Number of rows in matrix 1:", matrix1.get_rows())
print("Number of columns in matrix 1:", matrix1.get_columns())
result1 = matrix1 + matrix2
print("Result of addition:")
print(result1)
result2 = matrix1 * matrix2
print("Result of multiplication:")
print(result2)
            