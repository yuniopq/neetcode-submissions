class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mapa = {}
        for i, v in enumerate(nums):
            complemento = target - v
            if complemento in mapa:
                return [mapa[complemento], i]
            mapa[v] = i
        return []