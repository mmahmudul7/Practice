def romanToInt(s):
        values = {
            "I" : 1, "V" : 5, "X" : 10, "L" : 50,
            "C" : 100, "D" : 500, "M" : 1000
        }

        n = len(s)
        total = 0

        for i in range(n):
            current_char = s[i]
            next_index = i + 1

            if next_index < n:
                next_char = s[next_index]
                # value_of_current_char = values[current_char]
                # value_of_next_char = values[next_char]

                if values[current_char] < values[next_char]:
                    total -= values[current_char]
                else:
                    total += values[current_char]
            else:
                total += values[current_char] # this line for last character

        return total


print(romanToInt("IX"))
print(romanToInt("XIII"))