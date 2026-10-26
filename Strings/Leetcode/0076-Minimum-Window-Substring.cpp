class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "" ;
        if(t.size() > s.size()){
            return ans ;
        }
        unordered_map<char,int>freq ;
        for(int i=0;i<t.size();i++){
            freq[t[i]]++ ;
        }
        int left = 0 ;
        int count = 0 ;
        int minLen = s.size() + 1 ;
        int start = 0 ;
        for(int right = 0 ; right<s.size();right++){
            if(freq.find(s[right]) != freq.end()){
                freq[s[right]]-- ;

                if(freq[s[right]] >= 0){
                    count++ ;
                }
            }
            while(count==t.size()){
                if(right-left+1 < minLen){
                    minLen = right - left + 1 ;
                    start = left ;
                }
                if(freq.find(s[left]) != freq.end()){
                    freq[s[left]]++ ;

                    if(freq[s[left]] > 0 ){
                        count-- ;
                    }
                }
                left++ ;
            }
        }
        if(minLen == s.size() + 1){
            return ans ;
        }
        return s.substr(start,minLen) ;
    }
};
