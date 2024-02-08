class Solution {
    public boolean canJump(int[] nums) {
        int index = 0;
        while (index < nums.length - 1) {
            int old = index;
            int to = index + nums[index];
            int Max = to;
            for(int i = index + 1; i <= to; i++) 
            {
                if(i >= nums.length) {
                    break;
                }
                if(i + nums[i] >= Max) {
                    Max = i + nums[i];
                    index = i;
                }
            }
            if(to >= nums.length - 1) {
                return true;
            }
            if(old == index) {
                return false;
            }
        }
        return index >= nums.length - 1;
    }
}