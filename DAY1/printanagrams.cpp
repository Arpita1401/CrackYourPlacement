class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& sl) {
        map<string, vector<string>> mp;
        for(int i=0;i<sl.size();i++){
            string s= sl[i];
            sort(s.begin(), s.end());
            mp[s].push_back(sl[i]);
        }
         vector<vector<string>> v1;
         for(auto it=mp.begin();it!=mp.end();it++){
             v1.push_back(it->second);
         }
         
         return v1;
    }
};
