class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int i=0;
        int j=height.size()-1;
        int mx=-1;
        while(i<j){
            int l=j-i;
            int result=min(height[i],height[j])*l;
            mx=max(mx,result);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx;
    }
};
