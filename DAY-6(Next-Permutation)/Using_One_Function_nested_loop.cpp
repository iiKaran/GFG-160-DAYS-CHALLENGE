class Solution {
    public:
        void nextPermutation(vector<int>& arr) {
            int n = arr.size();
            int i = n - 2;
    
            // Step 1: Find first decreasing element from right
            while (i >= 0 && arr[i] >= arr[i + 1]) {
                i--;
            }
    
            if (i >= 0) {
                // Step 2: Find just larger element to the right
                int j = n - 1;
                while (j > i && arr[j] <= arr[i]) {
                    j--;
                }
                swap(arr[i], arr[j]);
            }
    
            // Step 3: Reverse the right half
            reverse(arr.begin() + i + 1, arr.end());
        }
    };