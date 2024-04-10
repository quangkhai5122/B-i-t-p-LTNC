#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int findIndexToRemove(string s) {
    int n = s.length();
    int left = 0, right = n - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            if (isPalindrome(s, left + 1, right)) {
                return left;
            }
            if (isPalindrome(s, left, right - 1)) {
                return right;
            }
            return -1;
        }
        left++;
        right--;
    }
    return -1;
}

int main() {
    int q;
    cin >> q;
    cin.ignore();

    for (int i = 0; i < q; ++i) {
        string s;
        getline(cin, s);
        int result = findIndexToRemove(s);
        cout << result << endl;
    }
    return 0;
}
