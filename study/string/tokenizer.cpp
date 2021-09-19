#include <bits/stdc++.h>

using namespace std;

vector<string> tokenize(string str, char delimeter) {
    vector<string> tokens;
    stringstream ss(str);

    string token;
    while (getline(ss, token, delimeter)) 
        tokens.push_back(token);

    return tokens;
}

int main() {
    vector<string> v = tokenize("The|quick|fox|jumps|over|the|lazy|dog", '|');
    for(auto s : v)
        cout << s << endl;
    return 0;
}

/* OUTPUT :
 * The
 * quick
 * fox
 * jumps
 * over
 * the
 * lazy
 * dog
 */

