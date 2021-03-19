def firstMissingPositive(nums):
    nums.sort()
    if not nums or nums[-1] < 0:
        return 1
    else:
        for i in range(1,nums[-1]+2):
            if i not in nums:
                return i

t = int(input())
for i in range(t):
    nums = list(map(int, input().split()))
    print(firstMissingPositive(nums),end='\n')