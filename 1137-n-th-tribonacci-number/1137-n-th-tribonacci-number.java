class Solution {
    public int tribonacci(int n) {
        if(n == 0) {
            return 0;
        }
        else if(n == 1 ||n == 2 ){

        return 1;
        }

        else{
            int Fir_Term = 0;
            int Sec_Term = 1;
            int Thir_Term = 1;

            for(int i = 1; i<=n; i++){
                int For_Term = Fir_Term + Sec_Term + Thir_Term ;
                Fir_Term = Sec_Term;
                Sec_Term = Thir_Term;
                Thir_Term = For_Term;
            }
            return Fir_Term;
        }



    }
}