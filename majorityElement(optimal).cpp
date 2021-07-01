//Time complexity O(n) and O(1) Space complexity
int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=0;
        for(auto i:nums){
            if(count==0){
                candidate=i;
            }
            if(i==candidate) count++;
            else count--;
        }
        return candidate;
    }
