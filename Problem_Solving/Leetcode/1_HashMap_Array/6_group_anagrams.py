def group_anagrams(strs):
    groups = {}

    for i in range(len(strs)):
        s = strs[i] # "eat"

        chars = sorted(s) # ['a', 'e', 't']
        sorted_s = "".join(chars) # sorted_s = "aet"

        if sorted_s not in groups:
            groups[sorted_s] = [] # group a [] empty list add kora holo

        groups[sorted_s].append(s) # groups = i=0 jonno {'aet': ['eat']} je koyta thake add hobe
    
    # Converting map to list 
    result = []
    for key in groups:
        result.append(groups[key]) # aet, ant, abt keys er value gula list a push kora holo
        
    return result


if __name__ == "__main__":
    # strs = [""]
    # strs = ["a"]
    strs = ["eat","tea","tan","ate","nat","bat"]
    print(group_anagrams(strs))