class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans[accounts.size()];
        for(int i =0;i<accounts.size();i++){
            int max = 0;
            for(int j =0;j<accounts[i].size();j++){
                max = max + accounts[i][j];
            }
            ans[i] = max;
        }
        int maxi = ans[0];
        for(int k =0;k<accounts.size();k++){
            if(maxi < ans[k]){
                maxi = ans[k];
            }
        }
        return maxi;
    }
};