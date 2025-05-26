#include <algorithm> // Required for next_permutation
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        std::next_permutation(arr.begin(), arr.end());
    }
};