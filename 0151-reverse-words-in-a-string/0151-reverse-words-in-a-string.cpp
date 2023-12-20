// class Solution {
// public:
//     string reverseWords(string s) {
//         //char temp;
//         int l = s.length();
//         int start=0,a;
//         int end = l-1;
//         string x="",y="",temp="";
//         while(start<end){
//             if(isspace(s[start])){
//                 while(isspace(s[end])){
//                     x=s.substr(a,start);
//                     y=s.substr(end,l);
//                     swap(y,x);
//                     s=s.substr(start,end);
//                     s=x+s+y;
//                     end--;
//                     l=end;
//                 }
//                 start++;
//                 a=start;

//             }
//             else if(isspace(s[end])){
//                 while(isspace(s[start])){
//                     x=s.substr(a,start);
//                     y=s.substr(end,l);
//                     swap(y,x);
//                     s=s.substr(start,end);
//                     s=x+s+y;
//                 }
//                 end--;
//             }
//             /*else {
//                 x+=s.substr(end+1,l);
//                 x+= " ";
//                 x+=s.substr(0,start);
//                 start++;end--;
//                 s=s.substr(start,end);

//             }*/
//         }
//         return x;
//     } 
    
// };


class Solution {
public:
    string reverseWords(string s) {
        //char temp;
        int l = s.length();
        int start=0,a;
        int end = l-1;
        //string x="",y="",result="";
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
            //start++;
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