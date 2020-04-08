/*
* 元音字母'a, e, i, o ,u A E I O U'
* 双指针对撞
*
*/
class Solution {
public:
    string reverseVowels(string s) {
        // a e i o u
        int startPtr = 0;
        int endPtr = s.size() - 1;
        char temp;
        while(startPtr < endPtr)
        {
            while(((s[startPtr] != 'a' && s[startPtr] != 'A') && (s[startPtr] != 'e' && s[startPtr] != 'E') && (s[startPtr] != 'i' && s[startPtr] != 'I') && (s[startPtr] != 'o' && s[startPtr] != 'O') && (s[startPtr] != 'u' && s[startPtr] != 'U'))&&startPtr < endPtr)
            {
                startPtr++;
            }
            
            while(((s[endPtr] != 'a' && s[endPtr] != 'A')&& (s[endPtr] != 'e' && s[endPtr] != 'E') && (s[endPtr] != 'o' && s[endPtr] != 'O') && (s[endPtr] != 'u' && s[endPtr] != 'U') && (s[endPtr] != 'i' && s[endPtr] != 'I'))&&startPtr < endPtr)
            {
                endPtr--;
            }
            
            temp = s[startPtr];
            s[startPtr] = s[endPtr];
            s[endPtr] = temp;
            startPtr++;
            endPtr--;
            
        }
        return s;
    }
};
