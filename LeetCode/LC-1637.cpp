class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max=INT_MIN;
        vector<int>res;
        for(auto point : points){
            res.push_back(point[0]);
        }
        sort(res.begin(),res.end());
        for(int i=1;i<res.size();i++){
            //cout<<res[i-1];
            int s=abs(res[i]-res[i-1]);
            if(s>max){
                max=s;
            }
        }
        return max;
    }
};
