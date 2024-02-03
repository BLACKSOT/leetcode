class Solution {
public:

    // int p=1;
    // int q=1;
    // int r=1;

    // int prodleft(int i,vector<int>& nums){
    //     r=1;
    //     for(int k = i+1;k<nums.size();k++){
    //     r = r*nums[k];
    //     }
    //     return r;
    // }

    // int prodright(int i,vector<int>& nums){
    //     p=1;
    //     for(int j =i-1;j>=0;j--){
    //         p= p*nums[j];
    //     }
    //     return p;
    //   vector<int> productExceptSelf(vector<int>& nums){
    //     vector<int> ans;

    //     for(int i=0;i<nums.size();i++){
    //         if(i==0){
    //             q = prodleft(i,nums);
    //             ans.push_back(q);
    //        }
    //        if(i==nums.size()-1){
    //            q = prodright(i,nums);
    //            ans.push_back(q);
    //        }
    //        else if(i!=0 && i!=nums.size()-1){
    //            int m = prodleft(i,nums);
    //            int n = prodright(i,nums);
    //            int l = m*n;
    //            ans.push_back(l);
    //        }
    //     }
    // return ans;
    // }
    // }

     vector<int> productExceptSelf(vector<int>& nums){

    int n=nums.size();

    vector<int> ans1(n,1);
    vector<int> ans2(n,1);
    vector<int> ans3(n,1);
    int x=1;

    //left
    for(int i=1;i<nums.size();i++){
        x=x*nums[i-1];
        ans1[i]=x;
    }
    
    //right

    int y=1;
    for(int j=nums.size()-2;j>=0;--j){
        y=y*nums[j+1];
        ans2[j]=y;
    }

    for(int r=0 ; r<nums.size(); ++r){
        ans3[r]=ans1[r]*ans2[r];
    }

    return ans3;

    }
};