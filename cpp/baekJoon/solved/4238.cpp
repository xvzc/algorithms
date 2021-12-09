#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
 
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
<<<<<<< Updated upstream
double calculate_e(double dewpoint) {
    return 6.11 * exp(5417.7530 * ((1/273.16) - (1/(dewpoint+273.16))));
}

double calculate_dewpoint(double e) {
    return 1 / ((1 / 273.16) - (log(e / 6.11) / 5417.7530)) - 273.16;
}

double calculate_h(double e) {
    return (0.5555)*(e - 10.0);
}

double calculate_humidex(double temperature, double h) {
    return temperature + h;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
=======

/* ----------------------------------------------- */

int main() {
>>>>>>> Stashed changes

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

<<<<<<< Updated upstream
    cout << fixed;
    cout.precision(1);

    char a, c;
    double b, d;
    while(1) {
        double T, D, H, e, h;

        cin >> a >> b >> c >> d;
        if(a == 'E') break;

        if(a == 'T' && c == 'D') {
            T = b;
            D = d;
            e = calculate_e(D);
            h = calculate_h(e);
            H = T + h;
        }

        if(a == 'T' && c == 'H') {
            T = b;
            H = d;
            h = H -T;
            // h = (0.5555)*(e - 10.0)
            e = h / 0.5555 + 10;
            D = calculate_dewpoint(e);
        }

        if(a == 'D' && c == 'H') {
            D = b;
            H = d;
            e = calculate_e(D);
            h = calculate_h(e);
            T = H - h;
        }
        if(a == 'D' && c == 'T') {
            D = b;
            T = d;
            e = calculate_e(D);
            h = calculate_h(e);
            H = T + h;
        }

        if(a == 'H' && c == 'T') {
            T = d;
            H = b;
            h = H -T;
            // h = (0.5555)*(e - 10.0)
            e = h / 0.5555 + 10;
            D = calculate_dewpoint(e);
        }

        if(a == 'H' && c == 'D') {
            D = d;
            H = b;
            e = calculate_e(D);
            h = calculate_h(e);
            T = H - h;
        }

        cout << "T" << ' ' << round(T * 10) / 10;
        cout << ' ' << "D" << ' ' << round(D * 10) / 10;
        cout << ' ' << "H" << ' ' << round(H * 10) / 10 << endl;

    }
=======
    string first, temp;
    double h, e, t, dewpoint;

    do {
        cin >> first >> t >> temp >> dewpoint;

        e = round(6.11 * pow(2.718281828, 5417.7530 * ((1/273.16) - (1/(dewpoint+273.16))))*10)/10;

        h = round((0.5555)*(e - 10.0) * 10)/ 10 + t;
        const char* format = "T %.1f D %.1f H %.1f\n";

        if(first == "E")
            break;
        printf(format, round(t * 10)/10, round(dewpoint * 10)/10, round(h * 10)/10);

    } while(1);
>>>>>>> Stashed changes

    return 0;
}

