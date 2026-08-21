class Solution {
public:

    bool notValid(char ch) {
        if (ch >= 'A' && ch <= 'Z') return false;
        else if (ch >= '0' && ch <= '9') return false;
        else if (ch >= 'a' && ch <= 'z') return false;
        else return true;
    }

    bool isPalindrome(string s) {

        int n = s.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {

            char x = s[i];
            char y = s[j];

            if (x >= 'A' && x <= 'Z')
                x += 32;

            if (y >= 'A' && y <= 'Z')
                y += 32;

            if (notValid(x))
                i++;

            else if (notValid(y))
                j--;

            else {
                if (x != y)
                    return false;

                i++;
                j--;
            }
        }

        return true;
    }
};