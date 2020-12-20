class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(),n.end());
        char num= n[n.size()-1];
        //cout<<int(num)-48<<endl;
        return int(num)-48;
    }
};
