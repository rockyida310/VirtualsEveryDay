class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,res;
        for(auto &c:nums){
            if(c < 0) neg.push_back(c);
            else pos.push_back(c);
        }
        
        for(int i=0;i<nums.size()/2;++i){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        
        return res;
    }
};