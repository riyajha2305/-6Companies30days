class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string, vector<string>>mp;
        for(int i=0;i<string_list.size();i++){
            string s=string_list[i];
            sort(s.begin(),s.end());
            mp[s].push_back(string_list[i]);
        }
        vector<vector<string>>vec;
        for(auto x:mp){
            vec.push_back(x.second);
        }
        return vec;
    }
};