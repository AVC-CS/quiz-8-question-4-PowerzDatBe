#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MAXNUM = 10;
const int MAXLEN = 100;

int splitline(string, char, char[][MAXLEN]);

int splitline(string x, char y, char split[][MAXLEN]) {
    int i, j, k;
    int cnt = 0;

    i = 0;
    while(i < x.length()) {
        if((x.at(i) != y) && (x.at(i) != '\0'))
            split[j][k++] = x.at(i);
        else {
            split[j][k] = '\0';
            j++;
            k = 0;
            cnt++;
        }
        i++;
    }
    
    return cnt;
}