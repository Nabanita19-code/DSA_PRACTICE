class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int, greater<int>> s(nums.begin(), nums.end());

        int count = 1;
        for (auto it = s.begin(); it != s.end(); it++) {
            if (count == 3) {
                return *it;
            }
            count++;
        }

        return *s.begin();
    }
}; 
