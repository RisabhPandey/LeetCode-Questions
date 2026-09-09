class Solution {
    public boolean isPalindrome(String s) {
        int n = s.length();
        if(n == 1) return true; 

        StringBuilder sb = new StringBuilder("");
        for(int i= 0; i<n; i++){
            char ch = s.charAt(i);

            if(ch >= 'a' && ch<= 'z'){
                sb.append(ch);
            }
            else if(ch>= 'A' && ch<= 'Z'){
                ch = (char)(ch-'A'+'a');
                sb.append(ch);
            }
            else if(ch>='0' && ch <= '9'){
                sb.append(ch);
            }
        }
        int st =0 ;
        int end = sb.length()-1;
        while(st<=end){
            if(sb.charAt(st) != sb.charAt(end)){
                return false;
            }
            else{
                st++;
                end--;
            }
        }
        return true;
    }
}