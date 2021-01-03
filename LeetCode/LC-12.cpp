class Solution {
public:
    string intToRoman(int num) {
       string arr[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        
       string result="";
        for(int i=0; num!=0;i++){
            while(num>=value[i]){
                num-=value[i];
                result+=arr[i];
            }
        }
        return result;
    }
};
