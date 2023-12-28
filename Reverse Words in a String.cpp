#include <string>

class Solution {
public:
    string reverseWords(std::string s) {
        int n = s.size();
        int i = 0;
       string ans = "";

        while (i < n) {
            std::string temp = "";

            // Skip leading spaces
            while (s[i] == ' ' && i < n)
                i++;

            // Extract the word
            while (s[i] != ' ' && i < n) {
                temp += s[i];
                i++;
            }

            // Add the word to the result string
            if (temp.size() > 0) {
                if (ans.size() == 0)
                    ans = temp;
                else
                    ans = temp + " " + ans;
            }
        }

        return ans;
    }
};
