#include <iostream>
#include <string>

using namespace std;

string getPartOfString(string s, int startIndex, int length) {
    string result;
    for (int i = startIndex; i < startIndex + length && i < s.size(); i++) {
        result += s[i];
    }
    return result;
}

int stringToInteger(string str) {
    int num = 0;
    for (char c : str) {
        num = num * 10 + (c - '0');
    }
    return num;
}

void timeConvert(string time) {
    int hour = stringToInteger(getPartOfString(time, 0, 2));
    int minute = stringToInteger(getPartOfString(time, 3, 2));
    int second = stringToInteger(getPartOfString(time, 6, 2));
    string period = getPartOfString(time, 8, 2);

    if (period == "AM") {
        if (hour == 12) {
            hour -= 12;
        }
    } else if (period == "PM") {
        if (hour != 12) {
            hour += 12;
        }
    }

    // Định dạng lại giờ và phút thành hai chữ số
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute << ":"
         << (second < 10 ? "0" : "") << second << period;
}

int main() {
    string time;
    cin >> time;
    timeConvert(time);
    return 0;
}
