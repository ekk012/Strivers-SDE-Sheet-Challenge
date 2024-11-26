class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
         st = set()
         for var in nums:
              if var in st:
                   return True
              st.add(var)
         return False