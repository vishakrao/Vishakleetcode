class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
            sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
       int n = a.size();
        int m = b.size();
        vector<int> res;
        int i=0,j=0;
        
        while(i<n && j<m)
        {
            if(a[i] == b[j])
            {
                res.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]>b[j])
            {
                j++;
            }
            else
                i++;
        }
        
        
        return res;
        
    }
};