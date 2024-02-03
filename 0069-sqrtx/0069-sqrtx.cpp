class Solution {
public:
   
long long int helper(int n){
    int s=0;
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans=-1;
    
    while(s<=e){
        long long square = mid*mid;
        if(square==n){
            return mid;
        }
        if(square>n){
            e = mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans; 
}
    
    
    
    
int mySqrt(int n) {
    if (n == 0 || n == 1){
        return n;
    }
    return helper(n);
    }
};