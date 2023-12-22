class Solution {
public:
    int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points) {
        vector<int> xcoords;
        for(int i=0;i<points.size();i++){
            xcoords.push_back(points[i][0]);
        }

        std::sort(xcoords.begin(),xcoords.end());

        int maxw=0;

        for(int i=1;i<xcoords.size();i++){
            if(xcoords[i]!=xcoords[i-1]){
                maxw=max(maxw,xcoords[i]-xcoords[i-1]);
            }
        }

        return maxw;
    }
};