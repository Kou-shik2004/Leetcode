class Solution {
public:
    bool isAnagram(string s, string t) {
        //MAPS
        // unordered_map<char,int> m1;
        //  unordered_map<char,int> m2;
        //  for(char x:s){
        //     m1[x]++;
        //  }
        //  for(char x:t){
        //     m2[x]++;
        //  }
        //  return (m1==m2);
        // SORTING
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return (s==t);
        unordered_map<char,int> m1;
         for(char x:s){
            m1[x]++;
         }
         for(char x:t){
            m1[x]--;
         }
         bool flag=true;
         for(auto item:m1){
            if(item.second!=0){
                flag=false;
                break;
            }
         }
         return flag;




    }
};