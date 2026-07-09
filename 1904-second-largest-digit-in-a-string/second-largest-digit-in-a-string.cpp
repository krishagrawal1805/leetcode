class Solution {
public:
    int secondHighest(string s) {
       char largest = -1;
char secondLargest = -1;

for (char c : s) {
    if (!isdigit(c)) continue;

    if (c > largest) {
        secondLargest = largest;
        largest = c;
    }
    else if (c > secondLargest && c != largest) {
        secondLargest = c;
    }
}

if (secondLargest == -1)
    return -1;

return secondLargest - '0';
    }
};