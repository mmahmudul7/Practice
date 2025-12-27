def sum67(nums):
  total = 0
  i = 0
  
  while i < len(nums):
    if nums[i] == 6:
      while nums[i] != 7:
        i += 1
      i += 1
    else:
      total += nums[i]
      i += 1
      
  return total


##
def sum67(nums):
  total = 0
  add_mode = True

  for num in nums:
    if num == 6:
      add_mode = False

      if add_mode:
        total += num
        
      elif num == 7:
        add_mode = True
        
  return total