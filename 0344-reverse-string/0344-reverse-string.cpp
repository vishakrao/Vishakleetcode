class Solution {
public:
    void reverseString(vector<char>& arr) {
        int n = arr.size();
        int start=0;
int end=n-1;
while(start<=end){
swap(arr[start],arr[end]);
start++;
end--;
}
    }
    
};