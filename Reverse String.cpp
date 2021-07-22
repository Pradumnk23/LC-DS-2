class Solution {
public:
    void reverseString(vector<char>& s) {
        int h=s.size()-1,l=0;
        while(l<h)
        {
            swap(s[l],s[h]);
            l++;
            h--;
        }
    }
};
