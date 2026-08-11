class Solution {
public:

    string encode(vector<string>& strs) {
      string s="";
      for(int i=0;i<strs.size();i++){
          s+=strs[i]+'~';
      }
      return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string a="";
       for(int i=0;i<s.size();i++){
           if(s[i]=='~'){
            ans.push_back(a);
            a="";
           }
           else a+=s[i];
       }
       return ans;
    }
};
