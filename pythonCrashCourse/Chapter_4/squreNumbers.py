squares = []
for value in range(1, 11):
    # square = value ** 2
    # squares.append(square)
    squares.append(value ** 2)
print(squares) # [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

squares2 = [value ** 2 for value in range(1, 11)]
print(squares2) # [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

print([value ** 2 for value in range(1, 11)]) # [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]