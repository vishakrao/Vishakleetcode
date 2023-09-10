class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxpro = 0;
        int n = arr.size();
        int minprice = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
           minprice = min(minprice,arr[i]);
            maxpro = max(maxpro,arr[i] - minprice);
        }
        return  maxpro;
    }
};