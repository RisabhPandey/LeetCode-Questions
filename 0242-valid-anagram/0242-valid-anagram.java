class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character,Integer>hm = new HashMap<>();
        int n= s.length();
        int m= t.length();
        if(n != m) return false;
        for(int i= 0; i<n; i++){
            char ch = s.charAt(i);
            if(hm.containsKey(s.charAt(i))==true){
                hm.put(ch, hm.get(ch) + 1); 
                }
            else{
                hm.put(ch,1);
            }
        }
        for(int i=0 ; i<n ;i++){
            char ch = t.charAt(i);
            if(!hm.containsKey(ch)){
                return false;
            }
            hm.put(ch,hm.get(ch)-1);
            if(hm.get(ch)==0){
                hm.remove(ch);
            }
    }
    return hm.isEmpty();
}
}