class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,ans=0,temp=0;
        for(int i=0; i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        for(int i=1;i<=nums.size()-1;i++)
        {
            temp = temp^i; 
        }
        return (ans^temp);

    }
};
