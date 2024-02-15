class Solution {
public:
    vector<pair<int,int>> conversion(vector<vector<int>> intervals){
        vector<pair<int,int>> p;
        for(auto interval:intervals){
            p.push_back({interval[0],interval[1]});
        }
        return p;
    }

vector<pair<int,int>> merge1(vector<pair<int,int>> p){
    sort(p.begin(), p.end()); // Sort intervals based on start times
    
    for(int i = 0; i < p.size(); i++){
        for(int j = i + 1; j < p.size(); ){
            if(p[i].second >= p[j].first){
                p[i].second = max(p[i].second, p[j].second);
                p[i].first = min(p[i].first, p[j].first); // Correcting logic here
                p.erase(p.begin() + j);
            } else {
                j++;
            }
        }
    }
    return p;
}


    
    vector<vector<int>> merge(const vector<pair<int,int>>& pairs) {
        vector<vector<int>> vectors;
        for(const auto& pair : pairs) {
            vectors.push_back({pair.first, pair.second});
        }
        return vectors;
    }

    vector<vector<int>> merge(vector<vector<int>> &intervals){
        vector<pair<int,int>> ok = conversion(intervals);
        ok = merge1(ok);
        return merge(ok);
    }
};



// vector<pair<int,int>> conversion(vector<vector<int>> intervals){
//     vector<pair<int,int>> p;
//     for(auto interval:intervals){
//         p.push_back({interval[0],interval[1]});
//     }
//     return p;
// }
// vector<pair<int,int>> merge1(vector<pair<int,int>> p){
//     for(int i=0;i<p.size();i++){
//         for(int j=i+1;j<p.size();j++){
//             if(p[i].second>=p[j].first){
//                 p[i].second = p[j].second;
//                 p.erase[j];
//             }
//         }
//     }
//     return p;
// }
