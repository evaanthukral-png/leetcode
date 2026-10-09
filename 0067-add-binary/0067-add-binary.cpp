class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";
        while (i >= 0 || j >= 0|| carry == 1) {
            int sum = carry;
            if (i >= 0 && j >= 0) {
                sum += (a[i] - '0') + (b[j] - '0');
                i--;
                j--;
            }
            else if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            else if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            if (sum == 0) {
                ans += '0';
                carry = 0;
            }
            else if (sum == 1) {
                ans += '1';
                carry = 0;
            }
            else if (sum == 2) {
                ans += '0';
                carry = 1;
            }
            else if (sum == 3) {
                ans += '1';
                carry = 1;
            }
        }
        string result = "";
        for (int k = ans.size() - 1; k >= 0; k--) {
            result += ans[k];
        }
        return result;
    }
};