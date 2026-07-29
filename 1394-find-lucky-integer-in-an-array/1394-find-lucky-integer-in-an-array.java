class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer,Integer>hm = new HashMap<>();
        int n = arr.length;
        for(int i= 0; i<n; i++){
            int element = arr[i];
            if(hm.containsKey(element)==true){
                hm.put(element,hm.get(element)+1);
            }
            else{
                hm.put(element,1);
            }
        }
        int ans = -1;

        for(int key: hm.keySet()){
            if(hm.get(key)==key){
                ans = Math.max(ans,key);
            }
        }
        return ans;
    }
}