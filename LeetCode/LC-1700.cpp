class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& p) {
        int csandwitch = count(s.begin(),s.end(),0);
        int ssandwitch = count(s.begin(),s.end(),1);
        cout<<csandwitch<<" "<<ssandwitch<<endl;
        
        for( auto sandwitch: p){
            if( sandwitch==0){
                csandwitch--;
            }
            if( sandwitch==1){
                ssandwitch--;
            }
            if(ssandwitch<0){
                return csandwitch;
            }
            if(csandwitch<0){
                return ssandwitch;
            }
            if (csandwitch == 0 && ssandwitch == 0) {
                return 0;
            }
        }
        return 0;
    } 
};
