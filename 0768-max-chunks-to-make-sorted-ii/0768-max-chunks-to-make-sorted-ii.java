class Solution {
    public int maxChunksToSorted(int[] arr) {
        
        //step 1 : generate Right min
        int n = arr.length;
        int[] rmin = new int[n + 1];
        rmin[n] = Integer.MAX_VALUE;
        for(int i = n-1; i>=0 ; i--)
        {
          rmin[i] = Math.min(rmin[i+1], arr[i] );
        }
        
        // Step 2: Iterrate an array and manage left max as well as count chunks;
        int lmax = Integer.MIN_VALUE;
        int count =0;
        
        for(int i=0; i<n; i++)
        {
          lmax = Math.max(lmax, arr[i]);
            
            if(lmax<=rmin[i+1])
                count++;
        }
        return count;
        
        
    }
}