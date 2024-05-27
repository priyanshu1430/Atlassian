class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans,idx;// to store the ans and index of the character
        int n=s.length();
        idx.push_back(-100000);// adding min value to prevent left side over flow

        for(int i=0;i<n;i++)
            if(s[i]==c)
                idx.push_back(i);// storing the indexes of the characters

        idx.push_back(100000);//adding right side max to prevent overflow

        int cur=0,next=1;//to find the minumum distance from both side

        for(int i=0;i<n;i++)
        {
            if(s[i]!=c)//not the character
            {
                ans.push_back(min(abs(idx[cur]-i),abs(idx[next]-i)));
            }
            else// the given character
            {
               ans.push_back(0);// if the s[i]==c
                cur++;
                next++;
            }
        }
        return ans;

    }
};