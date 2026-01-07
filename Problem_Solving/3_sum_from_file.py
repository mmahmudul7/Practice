def sum_from_file(path):
    total = 0

    try:
        with open(path, 'r') as f:
            for line in f:
                line = line.strip()
                
                if not line:
                    continue

                try:
                    total += int(line)
                except ValueError:
                    continue
                
    except FileNotFoundError:
        raise FileNotFoundError(f'File not found: {path}')
            
    return total
    

print(sum_from_file("number.txt"))
# print(sum_from_file("numbers.txt"))