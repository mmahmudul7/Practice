def array123(nums):
  # Note: iterate with length-2, so can use i+1 and i+2 in the loop
  for i in range(len(nums)-2):
    if nums[i]==1 and nums[i+1]==2 and nums[i+2]==3:
      return True
  return False


#####
def array123(nums):
  seq_list = [1, 2, 3]
  for i in range(len(nums)):
    sub = nums[i:i+3]
    if seq_list == sub:
      return True
  return False