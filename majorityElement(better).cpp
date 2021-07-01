//O(n) space complexity
int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size(),val=1;
        for(int i=0;i<n;i++){
            if(m.find(nums[i])==m.end()){
                m.insert({nums[i],1});
            }
            else{
                m[nums[i]]=m[nums[i]]+1;
            }
        }
        for(auto i=m.begin();i!=m.end();++i){
            //cout<<i->first<<" "<<i->second<<endl;
            if((i->second)>floor(n/2)){
                val=i->first;
            }
        }
        return val;
    }
