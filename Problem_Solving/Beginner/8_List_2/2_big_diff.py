def big_diff(nums):
  largest_num = max(nums)
  smallest_num = min(nums)
  
  return largest_num - smallest_num


##
def big_diff(nums):
  largest = nums[0]
  smallest = nums[0]

  for num in nums:
    if num > largest:
      largest = num
    if num < smallest:
      smallest = num
      
  return largest - smallest