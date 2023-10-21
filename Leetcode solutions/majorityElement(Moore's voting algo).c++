class Solution {
public:
    int majorityElement(vector<int>& nums) {

 /////Optimal Solution Here>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

        int el;
        int ct=0;

        for(int i=0; i<nums.size();i++){

            if(ct==0){
                ct=1;
                el=nums[i];
            }else if(nums[i]==el){

                ct++;
            }else{
                ct--;
            }
        }
//we just take the element from above code , then count total no of occurances then condition will be checked.
        int ct2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el) ct2++;
        }
        if(ct2>(nums.size()/2)){
            return el;
        }
        return -1;


//Brute Force solution!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//  for (int i = 0; i < v.size(); i++) {
// 			int ct=0;
// 			for(int j=0; j<v.size(); j++){
// 					if(v[i]==v[j]){
// 				    	ct++;
// 				}				
// 			}
			

// 			if(ct>(v.size()/2)){
// 				return v[i];
// 			}
//         }
// 		return -1;
    }
};
