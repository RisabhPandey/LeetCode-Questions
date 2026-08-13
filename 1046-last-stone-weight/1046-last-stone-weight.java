class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer>pq = new PriorityQueue<>(Collections.reverseOrder());

        for(int ele : stones){
            pq.add(ele);
        }
        while(pq.size()>1){
            int max =pq.remove();
            int secMax = pq.remove();

            int nstones = max - secMax;

            if(nstones!=0){
                pq.add(nstones);
            }

        }
        if(pq.size()==0) return 0;
        else{
            return pq.peek();
        }
    }
}