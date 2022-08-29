class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0;i<n;i++){
            int j = 0, k = n-1;
            while( j < k){
                swap(image[i][j],image[i][k]);
                image[i][j] ^= 1;
                image[i][k] ^= 1;
                j++;k--;
            }
            if(j == k) image[i][j] ^= 1;
        }
        
        return image;
    }
};