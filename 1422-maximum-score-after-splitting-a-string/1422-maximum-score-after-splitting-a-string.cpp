class Solution {
public:
    int maxScore(const std::string& s) {

       int res=0;

       int zeros=0;

       int ones=std::count(s.begin(),s.end(),'1');

       for(int i=0;i<s.length()-1;i++){

           if(s[i]=='0'){
               zeros++;
           }
           else{
               ones--;
           }
            res=max(res,zeros+ones);
       }

        return res;
    }
};