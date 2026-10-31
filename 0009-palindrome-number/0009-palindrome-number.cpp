class Solution {
public:
    bool isPalindrome(int x){
    int dup = x;
        int revNum = 0;
     

        while (x> 0) {
            int ld = x % 10;
            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && ld > 7))
        return false;
      
            revNum = revNum * 10 + ld;
            x = x / 10;
        }
        if (dup == revNum)
    return true;
else
    return false;
    }   
};