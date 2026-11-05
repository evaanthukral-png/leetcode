class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int max =heights[0];
        for(int i =0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
            if(heights[i]<heights[j]){
                int temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;

                string t = names[i];
                names[i] = names[j];
                names[j] = t;
            }
        }
        }
        return names;
    }
};