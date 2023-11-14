class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0 , xor2 =0;
        int N = nums.size();
      
        
        
        for(int i=0; i<N; i++){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i+1);
            }
        
    
        return xor1 ^ xor2;
        
    }
};