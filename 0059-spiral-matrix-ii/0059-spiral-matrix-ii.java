class Solution {
    public int[][] generateMatrix(int n) {
        int[][]arr = new int[n][n];

        int count =1;
        int minRow = 0;
        int maxRow = n-1;
        int minCol = 0;
        int maxCol = n-1;

        while(count<=n*n){
            for(int i = minCol; i<=maxCol;i++){ // minRow fixed
                arr[minRow][i] = count;
                count++;
            }
            for(int i=minRow+1 ;i<=maxRow;i++){ // maxCol fixed 
                arr[i][maxCol] = count;
                count++;
            }
            for(int i= maxCol-1;i>=minCol; i--){ // maxRow fixed
                arr[maxRow][i] = count;
                count++;
            }
            for(int i=maxRow-1; i>=minRow+1;i--){ // minCol fixed
                arr[i][minCol] = count;
                count++;
            }

            minRow++;
            maxRow--;
            minCol++;
            maxCol--;
        }
        return arr;
    }
}