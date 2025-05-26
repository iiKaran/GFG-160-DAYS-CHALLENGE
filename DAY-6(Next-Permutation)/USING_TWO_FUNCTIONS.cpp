// User function Template for C++

class Solution {
    int find_next(vector<int>& arr, int i, int size, int max_elem, int curr){
        int ans =  -1;
        for( int ind = i+1; ind<size;ind++)
        {
            int elem = arr[ind];
            if(elem > curr && elem <= max_elem)
            {
                ans = ind ; 
                max_elem = elem ; 
            }
        }
        return ans ;
    }
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        
        int size = arr.size(); 
        int max_ind = size -1 ; // last elem 
        
        bool hit = false ; 
        for( int i = size-1 ; i >=0; i--)
        {
            int curr = arr[i]; 
            int max_elem = arr[max_ind]; 
            
            if( curr < max_elem)
            {
                // swap & sort logic 
                int next_grt_ind = find_next(arr , i, size,max_elem, curr); 
                swap(arr[i], arr[next_grt_ind]); 
                sort(arr.begin()+ i+1, arr.end());
                hit = true ; 
                break;
            }
            else{
                max_elem = curr ; 
                max_ind = i ; 
            }
        }
        if(!hit) sort(arr.begin(), arr.end());
        return ;
        
    }
};