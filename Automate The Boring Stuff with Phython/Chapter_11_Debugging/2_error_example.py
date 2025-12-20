def spam():
    bacon()

def bacon():
    raise Exception('This is the error message.')


spam()


# Call Stack
'''
Traceback (most recent call last):
  File "2_error_example.py", line 8, in <module>
    spam()
    ~~~~^^
  File "2_error_example.py", line 2, in spam
    bacon()
    ~~~~~^^
  File "2_error_example.py", line 5, in bacon
    raise Exception('This is the error message.')
Exception: This is the error message.
'''