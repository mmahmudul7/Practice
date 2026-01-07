import heapq

def topKFrequent(nums, k):
    freq = {}

    for num in nums:
        freq[num] = freq.get(num, 0) + 1

    h = []
    for key, value in freq.items():
        heapq.heappush(h, (-value, key))  # minus for max-heap

    result = []
    for _ in range(k):
        count, num = heapq.heappop(h) # count, num = (-4, 6) # count = -4, num 6
        result.append(num)
        # h2 = heapq.heappop(h)
        # result.append(h2[1])
        # result.append(heapq.heappop(heap)[1])

    return result


# nums = [4, 4, 4, 6, 6, 6, 6, 5, 5]
nums = [1,1,1,2,2,3]
k = 2
print(topKFrequent(nums, k))