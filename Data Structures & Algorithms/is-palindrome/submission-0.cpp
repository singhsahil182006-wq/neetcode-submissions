class Solution {
public:
    bool isPalindrome(string s) {
        int r=0, n=s.size()-1;
        while(r<n){
            while(r<n && !isalnum(s[r])) r++;
            while(r<n && !isalnum(s[n])) n--;
            if(tolower(s[r])!=tolower(s[n])) return false;
            r++;
            n--;
        }
        return true;
    }
};
