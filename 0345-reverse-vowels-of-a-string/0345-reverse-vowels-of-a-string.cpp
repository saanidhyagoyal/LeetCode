class Solution {
public:
    string reverseVowels(string s) {
        char temp;
        int l = s.length();
         
        int start=0;
        int end = l-1;
        while(start<end){
            
            if(!isvowel(s[start])){
                start++;
            }
            else if(!isvowel(s[end])){
                end--;
            }
            else{
                swap(s[start],s[end]);
                end--;start++;
            }
        }
        return s;
    }
    bool isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        return false;
    }
};