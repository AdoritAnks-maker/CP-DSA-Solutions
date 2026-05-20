#include <bits/stdc++.h>
using namespace std;

// Basic number words
string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                  "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string number_to_words(int n) {
    if (n == 1000) return "onethousand";
    string words = "";
    if (n >= 100) {
        words += units[n / 100] + "hundred";
        if (n % 100 != 0) {
            words += "and"; // British usage
        }
    }
    n = n % 100;
    if (n >= 20) {
        words += tens[n / 10];
        words += units[n % 10];
    } else if (n >= 10) {
        words += teens[n - 10];
    } else {
        words += units[n];
    }
    return words;
}

int main() {
    int total_letters = 0;
    for (int i = 1; i <= 1000; i++) {
        string w = number_to_words(i);
        total_letters += w.size(); // count letters only
    }
    cout << total_letters << endl; // Answer: 21124
    return 0;
}