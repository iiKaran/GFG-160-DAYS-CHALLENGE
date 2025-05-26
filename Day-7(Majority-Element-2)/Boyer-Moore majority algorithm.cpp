class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          // Your code goes here.
          int el1=-1 , el2 =-1 ; 
          int cnt1=0, cnt2=0; 
          
          for(int curr : arr){
              
              if(curr== el1)
              {
                  cnt1+=1 ; 
              }
              else if(curr == el2){
                  cnt2+=1 ; 
              }
              // new element
              else if(cnt1==0)
              {
                  el1= curr ; 
                  cnt1+=1 ; 
              }
              else if(cnt2== 0)
              {
                  el2=curr ; 
                  cnt2+=1; 
              }
              // no count is zero 
              else {
                  cnt1-=1 ; 
                  cnt2-=1; 
              }
              
          }
          vector<int> res ; 
  cnt1=0; cnt2=0; 
          int size = arr.size(); 
          
          
          
          for( auto i : arr)
          {
              if(i==el1) cnt1+=1 ; 
              if(i == el2) cnt2+=1;
          }
          
          if(cnt1 >size/3 && el1 != el2)
          res.push_back(el1); 
          
          if(cnt2> size/3)
          res.push_back(el2); 
          
          sort(res.begin(), res.end()); 
          
          return res ; 
      }
  };