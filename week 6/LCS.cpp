#include<bits/stdc++.h>
using namespace std;    
int longestconsecutive(vector<int>& nums) {
    unordered_set<int> num_set(nums.begin(), nums.end());
    int longest_streak = 0;

    for (int num : num_set) {
        if (!num_set.count(num - 1)) { // Check if it's the start of a sequence
            int current_num = num;
            int current_streak = 1;

            while (num_set.count(current_num + 1)) {
                current_num += 1;
                current_streak += 1;
            }

            longest_streak = max(longest_streak, current_streak);
        }
    }

    return longest_streak;
}
int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Length of the longest consecutive sequence: " << longestconsecutive(nums) << endl;
    return 0;
}