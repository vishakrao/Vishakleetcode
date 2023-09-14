class Solution {
public:
    
    vector<int> genRow(int n){
        
        long long ans=1;
        vector<int> ansrow;
        ansrow.push_back(ans);
        
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            ansrow.push_back(ans);
            
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++){
            ans.push_back(genRow(i));
        }
        
        return ans;
    }

};