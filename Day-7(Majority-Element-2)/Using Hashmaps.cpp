class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          int size = arr.size(); 
          map<int , int > freq ; 
          for(auto i : arr)
          {
              freq[i]+=1 ; 
          }
          // now prepare answer 
          vector<int> ans ; 
          
          for(auto it: freq)
          {
              if(it.second >= size/3)
              {
                  ans.push_back(it.first);
              }
          }
          return ans; 
      }
  };