class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
         int maxDiag = 0;
    int maxArea = 0;

    for (int i = 0; i < dimensions.size(); i++) {
        int w = dimensions[i][0];
        int h = dimensions[i][1];
        int diag = w * w + h * h;  

        if (diag > maxDiag) {
            maxDiag = diag;
            maxArea = w * h;
        } else if (diag == maxDiag) {
            maxArea = max(maxArea, w * h);
        }
        
    }
     return maxArea;
    }
};