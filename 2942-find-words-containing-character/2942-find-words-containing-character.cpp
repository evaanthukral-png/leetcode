class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index(words.size());
        int k = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++){
                if(words[i][j] == x){
                    index[k] = i;
                    k++;
                    break;
                }
            }
        }
        index.resize(k);
        return index;
    }
};