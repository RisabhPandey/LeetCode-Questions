class Solution {
public:
    void DFS(vector<vector<int>>& image, int r, int c, int oldColor, int newColor){
        int row = image.size();
        int col = image[0].size();

        if(r<0 || r>=row || c<0 || c>= col || image[r][c] != oldColor){
            return;
        }
        image[r][c] = newColor;

        // UP
            DFS(image,r-1,c,oldColor,newColor);
        // Down
            DFS(image,r+1,c,oldColor,newColor);
        // Left
            DFS(image,r,c-1,oldColor,newColor);
        // Right
            DFS(image,r,c+1,oldColor,newColor);

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if(oldColor == color)return image;
        DFS(image,sr,sc,oldColor,color);
        return image;
    }
};