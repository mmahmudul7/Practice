# partition() method, tuple er sathe 3 ta substring return kore 
# "before", "separator" and "after"

print('Hello, world!'.partition('w'))
print('Hello, world!'.partition('world'))

print('Hello, world!'.partition('o')) # only frist occurrence

print('Hello, world!'.partition('XYZ'))
# can't found XYZ, first string returned in the tuple will be entire string 
# and the other two string will be empty
print('Hello, world or earth!'.partition('XYZ'))

# Multiple assignment trick
before, sep, after = 'Hello, world!'.partition(' ')
print(before)
print(sep)
print(after)

print("\n========")
before, sep, after = 'Hello, world, or earth!'.partition(' ')
print(before)
print(sep)
print(after)
