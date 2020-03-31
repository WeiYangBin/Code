/*
* 将字符串可能涉及的字母统一转化为大写或者小写
* 主要要注意的是判断数字，和字符串长度为奇偶时的区别
*
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string s_ = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= '9' && s[i] >= '0'))
            {
                s_ += s[i];
            }
        }
        int startPtr = 0;
        int endPtr = s_.size() - 1;
        cout << s_ << endl;
        while(startPtr != endPtr && startPtr != (s_.size() / 2))
        {
            if(s_[startPtr] == s_[endPtr])
            {
                startPtr ++;
                endPtr --;
            }
            else
                return false;
        } 
        return true;
    }
};
