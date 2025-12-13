def spam():
    print(eggs) # UnboundLocalError
    eggs = 'spam local'


eggs = 'global'
spam()