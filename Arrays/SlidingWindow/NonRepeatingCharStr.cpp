#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

void LargestSubStr(string s) {
    int l = s.length();
    int maxCount = 0;
    int start = 0;

    unordered_map<char, int> lastSeen;

    for (int end = 0; end < l; end++) {
        char current = s[end];

        if (lastSeen.find(current) != lastSeen.end() && lastSeen[current] >= start) {
            start = lastSeen[current] + 1;
        }

        lastSeen[current] = end;
        maxCount = max(maxCount, end - start + 1);
    }

    cout << "Length of longest substring with all distinct characters: " << maxCount << endl;
}

int main() {
    string s = "abbcdeabb";
    LargestSubStr(s);
    return 0;
}
