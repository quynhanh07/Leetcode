class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(auto ch: s){
            mp[ch]++;
        }
        int sum = 0;
        int check = 0;
        for(auto cnt: mp ){
            if(cnt.second % 2 == 0){
                sum += cnt.second ;
            }
            else{
                check = 1;
                sum = sum + cnt.second - 1  ;
            }
        } 
        if(check == 1){
            sum +=1;
        }
        
        return sum;
    }
};
