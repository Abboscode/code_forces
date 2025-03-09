#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int s, n, k;
    int c;
    cin >> s;
    string str;
    while (s--) {
        c = 0;
        cin >> n >> k;
        cin >> str;
        for (int i = 0; i < n;) {
            if (str[i]=='B')    {
                c++;
                i=i+k;//move the window
            }else {
                i++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
