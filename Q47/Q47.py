# Perform matrix multiplication.

def multiply_matrices(matrix_a, matrix_b):
    rows_a = len(matrix_a)
    cols_a = len(matrix_a[0])
    rows_b = len(matrix_b)
    cols_b = len(matrix_b[0])

    # Check if matrices can be multiplied
    if cols_a != rows_b:
        print("Matrices cannot be multiplied: incompatible dimensions.")
        return None

    # Initialize result matrix with zeros
    result = [[0 for _ in range(cols_b)] for _ in range(rows_a)]

    # Perform multiplication
    for i in range(rows_a):
        for j in range(cols_b):
            for k in range(cols_a):
                result[i][j] += matrix_a[i][k] * matrix_b[k][j]

    return result


matrix_a = [
    [1, 2, 3],
    [4, 5, 6]
]
matrix_b = [
    [7, 8],
    [9, 10],
    [11, 12]
]

result = multiply_matrices(matrix_a, matrix_b)
print(result)
