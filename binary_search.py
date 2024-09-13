def search(self, nums):
        low = 0
        high = len(nums)-1
        while(low <= high):
            mid = (low+high)//2
            if(nums[mid] == target):
                return mid
            if(nums[mid] > target):
                high = mid-1
            else:
                low = mid+1
        return -1
nums = [1,6,7,12,16,30,45,67,68,90]