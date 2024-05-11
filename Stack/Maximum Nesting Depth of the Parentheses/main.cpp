#include <iostream>
#include <stack>
#include <string>

using namespace std;

int maxDepth(string s) {
    stack<char> st;
    int maxDepth = 0;
    for (char& c : s) {
        if (c == '(') {
            st.push(c);
            maxDepth = max(maxDepth, int(st.size()));
        } else if (c == ')') {
            st.pop();
        }
    }
    return maxDepth;
}

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    cout << "Maximum nesting depth of " << s << ": " << maxDepth(s) << endl;
    return 0;
}
