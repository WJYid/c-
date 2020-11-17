class Solution {
public:
    vector<int> printNumbers(int n) {
        int m = pow(10, n) - 1;
        int i = 1;
        vector<int> res;
        while (i <= m) {
            res.push_back(i);
            i++;
        }
        return res;
    }
};