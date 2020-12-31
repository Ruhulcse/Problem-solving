class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n3=INT_MIN;
        stack<int>st;
        int n=nums.size()-1;
        for(int i=n;i>=0;i--){
            if(nums[i]<n3){
                return true;
            }
            else{
                while(!st.empty()&&nums[i]>st.top()){
                    n3=st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return false;
    }
};
