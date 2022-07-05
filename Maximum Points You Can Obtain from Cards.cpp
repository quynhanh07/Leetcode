class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int res = 0;
		
        for(int i=0;i<k;i++) 
            res += cardPoints[i]; // t?ng k s? d?u
        
        int curr=res;
        for(int i=k-1;i>=0;i--) {		
            curr -= cardPoints[i];
            curr += cardPoints[cardPoints.size()-k+i]; // tính t?ng k s? cu?i
			res = max(res, curr); // khi lo?i b? s? ? t?ng d?u và thêm s? ? do?n cu?i, cái nào max thì l?y
        }
        
        return res;
    }
};
