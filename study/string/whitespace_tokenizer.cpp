#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "Hello world!";
    stringstream ss(s);

    while (ss >> s) 
        cout << s << endl;

    return 0;
}

/* OUTPUT :
 * Hello
 * world!
 */

