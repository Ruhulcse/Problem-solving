class Solution {
public:
    int nextGreaterElement(int n) {
        int bit =log2(n)+1;
        if(bit>30){
            return -1;
        }
        string s= to_string(n);
        sort(s.begin(),s.end());
        vector<string>store;
        do{
            store.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        
        for(int i=0;i<store.size();i++){
            int t=stoi(store[i]);
            if(t>n){
               return t;
            }
        }
        return -1;
    }
};
