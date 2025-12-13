# Global varibales can be read from a local scope 

def spam():
    print(eggs)


eggs = 42
spam()
print(eggs)