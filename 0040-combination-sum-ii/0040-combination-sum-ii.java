class Solution {
    List<List<Integer>> result=new ArrayList<>();
    private void findcombinations(int ind, int[] arr, int target, List<Integer>ds)
    {
         if(target == 0)
          {
            result.add(new ArrayList<>(ds));
          }
          
        else if(target>0)
        {
             for(int i=ind;i<arr.length;i++){
                if (i > ind && arr[i] == arr[i - 1]) {
                    continue;
                }
            ds.add(arr[i]);
            findcombinations(i+1,arr,target - arr[i], ds);
            ds.remove(ds.size()-1);
        }
         //findcombinations(ind+1,arr,target, ans, ds);
        
    }
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>>ans = new ArrayList<>();
        findcombinations(0, candidates, target, new ArrayList<>());
        return result;
        
    }
}