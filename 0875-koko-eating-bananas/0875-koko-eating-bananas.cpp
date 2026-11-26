class Solution {
public:
     bool canFinish(vector<int>& piles, int h, long long k) {
        long long hours = 0;
        for (int p : piles) {
            hours += (p + k - 1) / k;   // ceil(p / k)
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long lo = 1;
        long long hi = *max_element(piles.begin(), piles.end());
        long long ans = hi;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (canFinish(piles, h, mid)) {
                ans = mid;       
                hi = mid - 1;
            } else {
                lo = mid + 1;   
            }
        }
        return (int)ans;
    }
};