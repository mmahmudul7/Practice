n = int(input())
ar = [int(i) for i in input().split(" ")]

nums = {}
for num in ar:
    if(num not in nums):
        nums[num] = 0
    nums[num] += 1
    
removals = 0
for key, val in nums.items():
    if(val > key):
        removals  += val - key
    elif(val < key): removals += val   
        
print(removals)