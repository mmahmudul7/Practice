# id() returns a numeric value representing a reference’s memory address.
# strings is immutable so each modification refering new memory address
print(id('Howdy'))
bacon = 'Hello'
print(id(bacon))
bacon += ' world!' # made new string 'Hello world!
print(id(bacon)) # bacon now refers different string and memory address