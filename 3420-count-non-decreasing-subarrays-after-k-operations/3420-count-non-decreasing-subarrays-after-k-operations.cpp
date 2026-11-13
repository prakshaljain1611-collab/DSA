class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        long long cost = 0;
        deque<pair<int, int>> dq;
        int j = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            int num = nums[i];
            int count = 1;
            while (!dq.empty() && dq.back().first < num) {
                int nextnum = dq.back().first;
                int nextcount = dq.back().second;
                dq.pop_back();
                count += nextcount;
                cost += 1LL * (num - nextnum) * nextcount;
            }
            dq.push_back({num, count});
            while (cost > k) {
                auto [rightNum, rightCount] = dq.front();
                dq.pop_front();

                cost -= rightNum - nums[j];
                j--;

                if (rightCount > 1) {
                    dq.push_front({rightNum, rightCount - 1});
                }
            }
            ans+=j-i+1;
        }
        return ans;
    }
};