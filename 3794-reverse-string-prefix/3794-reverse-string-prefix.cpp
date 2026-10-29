class Solution {
public:
    string reversePrefix(string s, int k) {
        string a = s;
        for(int i =0;i<k;i++){
            a[i] = s[k-1-i];
        }
        return a;
    }
};