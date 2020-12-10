class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int counter=1;
        while(counter<arr.size()){
            if(arr[counter]>arr[counter-1]){
                counter++;
            }
            else{
                break;
            }
        }
        if(counter==arr.size()||counter==1){
            return false;
        }
        while(counter<arr.size()){
            if(arr[counter-1]>arr[counter]){
                counter++;
            }
            else{
                break;
            }
        }
        if(counter==arr.size()){
            return true;
        }
        return false;
    }
};
