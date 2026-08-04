#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        // Original compressed length
        int comp = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                comp++;
        }
 
        int ans = comp;
 
        // Try deleting every valid character
        for (int i = 1; i < n - 1; i++) {
 
            bool leftSame = (s[i] == s[i - 1]);
            bool rightSame = (s[i] == s[i + 1]);
 
            int cur = comp;
 
            if (!leftSame && !rightSame) {
                // The character forms a group of size 1
                cur--;
 
                // Neighbouring groups merge
                if (s[i - 1] == s[i + 1])
                    cur--;
            }
 
            ans = min(ans, cur);
        }
 
        cout << ans << "
";
    }
 
    return 0;
}