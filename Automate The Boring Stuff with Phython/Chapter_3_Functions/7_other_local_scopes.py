# Local scope cannot used in other local scrope 

def spam():
    eggs = 99
    becon()
    print(eggs)

def becon():
    ham = 11
    eggs = 0


spam()