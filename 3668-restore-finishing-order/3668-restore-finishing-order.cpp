class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> arr(friends.size());
        int k =0;
        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < friends.size(); j++) {
                if (order[i] == friends[j]) {
                    arr[k] = order[i];
                    k++;
                }
            }
        }
        arr.resize(k);
        return arr;

    }
};