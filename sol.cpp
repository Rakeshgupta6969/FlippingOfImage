class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
         
         // first of all using the brute force solution.
    
         int n  = image.size();
    
         int m = image[0].size();
    
    
         for(int i = 0; i<n; i++){
         
         reverse(image[i].begin(),image[i].end());
    
         for(int j = 0; j<image[i].size(); j++){
            if(image[i][j] == 1){
                image[i][j] = 0;
            }
            else{
                image[i][j] = 1;
            }
         }
    
         }
    
    
         return image;
    
        }
    };