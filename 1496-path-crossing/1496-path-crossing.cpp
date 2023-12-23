class Solution {
public:
    bool isPathCrossing(string path) {

        std::unordered_map<char,std::array<int,2>> dir;//a dictionary to maintian directions and it's respective coords

        dir['N']={0,1};
        dir['S']={0,-1};
        dir['E']={1,0};
        dir['W']={-1,0};

        std::set<std::array<int,2>> visited;//to keep track of visited points

        int x,y=0;

        for(int i=0;i<path.length();i++){

            visited.insert({x,y});//add visited points

            int dx=dir[path[i]][0];
            int dy=dir[path[i]][1];
            x+=dx;y+=dy;//calculate the change and add to x and y

            auto it=visited.find({x,y});

            if(it!=visited.end()){ //if the current pos exist in the visted set then it gets crossed
                return true;
            }
        }
        return false;
    }
};