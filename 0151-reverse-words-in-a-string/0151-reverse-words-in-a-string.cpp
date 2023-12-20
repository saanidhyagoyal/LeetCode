class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        int start=0,a;
        int end = l-1;
        string temp="" , ans="";
        while(start<l){
            if(!isspace(s[start])){
                temp+=s[start];
                start++;
            }
            else if(isspace(s[start])){
                if(!temp.empty()){
                    ans =temp +  " " + ans;
                    temp="";
                }
                start++;
                
            }
        }
        if (!temp.empty()) {
            ans = temp + " " + ans;
        }
        if(!ans.empty()){
            ans=ans.substr(0,ans.length()-1);
        }
        return ans;
    } 
    
};