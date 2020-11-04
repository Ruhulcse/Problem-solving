class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>A(nums1.begin(),nums1.end());
        set<int>B(nums2.begin(),nums2.end());
        map<int,int>result;
        
        for(auto i:A){
            result[i]++;
        }
        for(auto j:B){
            result[j]++;
        }
        vector<int>res;
        for(auto i:result){
            if(i.second>1){
                res.push_back(i.first);
            }
        }
        return res;
    }
};
