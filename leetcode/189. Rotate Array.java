class Solution {
    public void rotate(int[] nums, int k) {
        k %= nums.length;
        LinkedList<Integer> a = new LinkedList<>();
        for(int i = 0; i < nums.length; i++) {
            a.add(nums[i]);
        }
        while(k-- > 0) {
             a.addFirst(a.pollLast());
        }
        int idx = 0;
        for(Integer i: a) {
            nums[idx++] = i;
        }
    }
}