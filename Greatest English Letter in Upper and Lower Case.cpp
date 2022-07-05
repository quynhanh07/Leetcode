class Solution {
public:
    string greatestLetter(string s) {
        int cnt[256] = {0};
        char c = '0';
        for(char &c : s){
            cnt[c]++;
        }
        for(int i='Z'; i>='A';i--){
            if(cnt[i] != 0 && cnt[i + 32] != 0){
                return string(1, i);
            }
        }
        return "";
    }
};
