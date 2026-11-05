class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> arr(sentences.size());
        for(int i =0;i<sentences.size();i++){
            int count =0;
            for(int j =0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                count ++;
                }
            }
            arr[i] = count + 1;
        }
        int max = arr[0];
        for(int i =0;i<arr.size();i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};