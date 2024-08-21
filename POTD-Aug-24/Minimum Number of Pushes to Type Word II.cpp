class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> alphamap;
        for(const auto& alphabet: word){
            alphamap[alphabet]++;
        }
        for(auto it=alphamap.begin();it!=alphamap.end();++it){
            cout<<it->first<<" "<<it->second<<endl;
        }
        return 0;
    }
};
