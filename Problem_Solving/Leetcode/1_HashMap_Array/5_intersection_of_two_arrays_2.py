def intersect(nums1, nums2):
    nums1.sort()
    nums2.sort()

    i = j = 0
    result = []

    while i < len(nums1) and j < len(nums2):
        if nums1[i] == nums2[j]:
            result.append(nums1[i])
            i += 1
            j += 1
        elif nums1[i] < nums2[j]:
            i += 1
        else:
            j += 1

    return result


print(intersect([4,9,5], [9,4,9,8,4]))

##
'''
from collections import Counter

class Solution(object):
    def intersect(self, nums1, nums2):
        return list((Counter(nums1) & Counter(nums2)).elements())

'''