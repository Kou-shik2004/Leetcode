class Solution {
public:
    bool makeEqual(vector<string>& words) {

    //optimised solution

    //for single element no rearrangement required
     if(words.size()==1) return true;

    //checking whether the total count is divisible by array length
     int total_char=0;
     for(string& s : words){
         total_char+=s.length();
     } 
    if(total_char%words.size() !=0) return false;

     std::unordered_map<char,int> dict;
        for(string& word:words){
            for(char letters:word){
                dict[letters]++;
            }
        }
        for(auto item:dict){
            if(item.second %(words.size())!=0) return false;
        }
        return true;
    }

    //     //naive solution 

    //     // a : 3%3=0
    //     // b : 3%3=0
    //     // c : 3%3=0

    //     //hashmap to store frequencies of characters
    //     std::unordered_map<char,int> dict;
    //     for(string& word:words){
    //         for(char letters:word){
    //             dict[letters]++;
    //         }
    //     }
    //     //iterate through each value of hashmap and see whether is divisible by the size of the array if not we cannot redistribute the characters

    //     for(auto item:dict){
    //         if(item.second %(words.size())!=0) return false;
    //     }
    //     return true;
    // }
};