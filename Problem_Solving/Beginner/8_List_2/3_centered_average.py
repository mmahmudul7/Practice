def centered_average(nums):
  nums.sort()
  nums.pop()
  nums.remove(nums[0])
  
  total = 0
  n = len(nums)
  
  for i in range(n):
    total += nums[i]
    
  return total // n


##
def centered_average(nums):
    nums.sort()
    middle_elements = nums[1:-1] 
    return sum(middle_elements) // len(middle_elements)


###
def centered_average(nums):
    total_sum = sum(nums)
    largest = max(nums)
    smallest = min(nums)
    
    new_sum = total_sum - largest - smallest
    count = len(nums) - 2
    
    return new_sum // count

####
def centered_average(nums):
   return (sum(nums) - max(nums) - min(nums)) // (len(nums) - 2)