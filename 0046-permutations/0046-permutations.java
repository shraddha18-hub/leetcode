class Solution {
   
       public static void solve( int[] nums,int n, int idx, List<List<Integer>>result)
        {

            
           if(idx==n)
           {
             List<Integer> ds = new ArrayList<>();
             for(int it : nums){
                ds.add(it);
            }
            result.add(ds);
            return;
           }
           
            for(int i=idx;i<n;i++)
            {
                swap(nums,i,idx);
                solve(nums,n,idx+1, result);
                
                swap(nums,i,idx);
            }
        }
      public static void swap(int[] arr, int si, int ei){
        int t = arr[si];
        arr[si] = arr[ei];
        arr[ei] = t;
    }
       public  List<List<Integer>> permute(int[] nums) {
         
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        solve(nums, nums.length, 0, result);
        return result;
        
    }
}