class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> finalCandies(candies.size());
        int max = candies[0], index = 0;
        for (int i = 1; i < candies.size(); i++)
        {
            if (max < candies[i])
            {
                max = candies[i];
                index = i;
            }
        }
        for (int i = 0; i < candies.size(); i++)
            if (candies[i] + extraCandies >= candies[index])  finalCandies[i] = 1;
        return finalCandies;
    }
};