class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]<arr[i+1]){
                i++;
            }
            if(arr[j]<arr[j-1]){
                j--;
            }
        }
        int pick=0;
        i>j?pick=i:pick=j;
        return pick;
    }
};