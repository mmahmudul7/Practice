def sum13(nums):
  total = 0
  i = 0
  
  while i < len(nums):
    if nums[i] == 13:
      i = i + 2
    else:
      total = total + nums[i]
      i = i + 1
  return total


##
def sum13(nums):
    total = 0
    
    for i in range(len(nums)):
        if nums[i] == 13:
            continue
        if i > 0 and nums[i-1] == 13:
            continue
        total += nums[i] 
    return total