class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int count=0;

        for(int num :nums){
            if(count==0){
                count=1;
                element = num;
            }
            else if(num==element){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                count1++;
            }
        }

        if(count1>(nums.size()/2)){
            return element;
        }

        return -1;
        
    }
};