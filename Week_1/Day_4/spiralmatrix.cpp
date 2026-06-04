class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(); int n=matrix[0].size();
      int srow=0;  
      int ecol=n-1;
      int erow=m-1;
      int scol=0;
      vector<int>ans;
      while( srow<=erow && scol<=ecol){
        if(srow<=erow){
        for( int col=scol; col<=ecol; col++){
          ans.push_back(matrix[srow][col]);
        }
        srow++;
       }
         if(scol<=ecol){
        for(int row=srow; row<=erow; row++){
            ans.push_back(matrix[row][ecol]);
        }
        ecol--;
         }
          if(srow<=erow){
        for( int col=ecol; col>=scol; col--){
            ans.push_back(matrix[erow][col]);
        }
        erow--;
          }
           if(scol<=ecol){
        for( int row=erow; row>=srow; row--){
            ans.push_back(matrix[row][scol]);
        }
        scol++;
      }
      }
      return ans;
    }
};
