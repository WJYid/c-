class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int i, j, temp;
        for (i = 0; i < A.size(); i++)
            res[i] = A[i] * A[i];
        for (i = 0; i < res.size(); i++)
        {
            for (j = 0; j < res.size() - i - 1; j++)
            {
                if (res[j] > res[j + 1])
                {
                    temp = res[j];
                    res[j] = res[j + 1];
                    res[j + 1] = temp;
                }
            }
        }
        return res;
    }
};