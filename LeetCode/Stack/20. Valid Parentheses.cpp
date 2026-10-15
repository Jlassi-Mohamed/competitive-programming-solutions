class Solution {
public:
    bool isValid(string s) {
        if(s=="") return true;
        stack<char> sk;
        for(char c : s) {
            if(sk.empty()) {
                sk.push(c);continue;
            }
            if((c == ')' && sk.top() == '(') || (c == ']' && sk.top() == '[') || (c == '}' && sk.top() == '{')) {
                sk.pop();
            }
            else {
                sk.push(c);
            }
        }
        return sk.empty();      
    }
};
