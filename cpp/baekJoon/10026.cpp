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

int n; 
int dy[4] = { 0, -1, 1, 0};
int dx[4] = {-1,  0, 0, 1};


bool is_out_of_index(int y, int x) {
    return y < 0 || y >= n || x < 0 || x >= n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> n;

    vector<string> blind;
    vector<string> normal;
    string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        normal.push_back(temp);

        for(auto &c : temp) 
            if(c == 'R') c = 'G';

        blind.push_back(temp);
    }



    int normal_cnt = 0;
    for(int y = 0; y < n; ++y) {
        for(int x = 0; x < n; ++x) {
            if(normal[y][x] == '0')
                continue;

            char zone = normal[y][x];
            queue<pair<int, int>> q;
            q.push({y, x});
            normal[y][x] = '0';

            while(!q.empty()) {
                for(int i = 0; i < 4; ++i) {
                    int ny = q.front().fi + dy[i];
                    int nx = q.front().se + dx[i];

                    if(is_out_of_index(ny, nx))
                        continue;

                    if(normal[ny][nx] == '0')
                        continue;

                    if(zone != normal[ny][nx])
                        continue;

                    q.push({ny, nx});
                    normal[ny][nx] = '0';
                }
                q.pop();
            }

            normal_cnt++;
        }
    }

    int blind_cnt= 0;
    for(int y = 0; y < n; ++y) {
        for(int x = 0; x < n; ++x) {
            if(blind[y][x] == '0')
                continue;

            char zone = blind[y][x];
            queue<pair<int, int>> q;
            q.push({y, x});
            blind[y][x] = '0';

            while(!q.empty()) {
                for(int i = 0; i < 4; ++i) {
                    int ny = q.front().fi + dy[i];
                    int nx = q.front().se + dx[i];

                    if(is_out_of_index(ny, nx))
                        continue;

                    if(blind[ny][nx] == '0')
                        continue;

                    if(zone != blind[ny][nx])
                        continue;

                    q.push({ny, nx});
                    blind[ny][nx] = '0';
                }
                q.pop();
            }

            blind_cnt++;
        }
    }

    cout << normal_cnt << ' ' <<  blind_cnt;

    return 0;
}

