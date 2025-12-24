def combo_string(a, b):
    if len(a) < len(b):
        short = a
        long = b
    else:
        short = b
        long = a
    return short + long + short


###############
def combo_string(a, b):
  short = min(a, b, key=len)
  long = max(a, b, key=len)
  return short + long + short


print(combo_string('Hello', 'hi'))
print(combo_string('hi', 'Hello'))