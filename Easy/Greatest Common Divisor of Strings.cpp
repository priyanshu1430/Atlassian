class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        int l1=s1.length();
        int l2=s2.length();
        if(s1+s2!=s2+s1)// Check if concatenated strings are equal or not, if not return ""
            return "";
        else
            return s1.substr( 0 , gcd(l1,l2) ); // If strings are equal than return the substring from 0 to gcd of size(str1), size(str2)
    }
};