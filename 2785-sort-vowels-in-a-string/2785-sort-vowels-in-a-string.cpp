class Solution {
public:
    string sortVowels(string s) {
        map<char, int> m;
        for (char ch : s) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                m[ch]++;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i]== 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                auto x = m.begin();
                s[i] = x->first;
                x->second--;

                if (x->second == 0) {
                    m.erase(x);
                }
            }
        }
        return s;
    }
};