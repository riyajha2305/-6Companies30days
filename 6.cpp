class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int sz1 = str1.size(), sz2 = str2.size();
        if(str1+str2==str2+str1){
            return str1.substr(0,gcd(sz1,sz2));
        }
        return "";
    }
};