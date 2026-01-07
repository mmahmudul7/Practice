def two_sum(nums, target):
    d = {} # d = {2 : 0, 7 : 1, 11 : 2, 15 : 3}
    for i in range(len(nums)):
        num = nums[i]
        need = target - num

        if need in d:
            return [d[need], i]
        d[num] = i

nums = [2,7,11,15]
target = 9
index = two_sum(nums, target)
print(index)