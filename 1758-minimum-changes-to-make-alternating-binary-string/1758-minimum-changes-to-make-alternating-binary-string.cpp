class Solution {
public:
    int minOperations(string s) {
        int c=0; //comparing string 0101/1010 
        // for 0101 zero appears at even indices and 1 at odd
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                //even index expected 0
                if(s[i]=='1'){
                    c++;
                }
            }
            else{
                //odd index expected 1
                if(s[i]=='0'){
                    c++;
                }
            }
        }

        return  min<int>(c,(s.size()-c));
    }
};