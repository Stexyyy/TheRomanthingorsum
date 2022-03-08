#include <iostream>
using namespace std;

int romanToInt(string s);

int main() {

    cout<<romanToInt("D");
    
}

int romanToInt(string s) {
    int taco = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == 'I') {
            if (s[i + 1] == 'V') {
                taco += 4;
                i++;
            }
            else if (s[i + 1] == 'X') {
                taco += 9;
                i++;
            }
            else taco += 1;
        }
        else if (s[i] == 'V') taco += 5;
        else if (s[i] == 'X') {
            if (s[i + 1] == 'L') {
                taco += 40;
                i++;
            }
            else if (s[i + 1] == 'C') {
                taco += 90;
                i++;
            }
            else taco += 10;
        }
        else if (s[i] == 'L') taco += 50;
        else if (s[i] == 'C') {
            if (s[i + 1] == 'D') {
                taco += 400;
                i++;
            }
            else if (s[i + 1] == 'M') {
                taco += 900;
                i++;
            }
            else taco += 100;
        }
        else if (s[i] == 'D') taco += 500;
        else if (s[i] == 'M') taco += 1000;
    }
    return taco;
}
