class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        conj = set(nums)
        if len(conj) == len(nums): return False
        return True