class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
    sort(arr.begin(),arr.end());
        
    int mini = INT_MAX;
    int q = 0;
    for(int i =0;i<arr.size();i++){
        if(i+1<arr.size()){
            q = arr[i+1]-arr[i];
        }
        if(q<mini){
            mini = q;
        }
    }
    vector<vector<int>> a;
    for(int i = 0; i<arr.size();i++){
        if(i+1<arr.size()){
            if(arr[i+1]-arr[i] == mini){
                a.push_back({arr[i],arr[i+1]});
            }
        }
    }
        return a;
    }
};