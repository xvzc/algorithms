#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;


class Point {
private :
    int x;
    int y;
    int rank;

public :
    Point() {
        x = 0;
        y = 0;
        rank = 1;
    }
    Point(int x_, int y_, int rank_) {
        x = x_;
        y = y_;
        rank = rank_;
    }

    void set_x(int x_) {
        x = x_;
    }
    void set_y(int y_) {
        y = y_;
    }
    void set_rank(int rank_) {
        rank = rank_;
    }

    void increase_rank() {
        rank++;
    }
    int get_rank() {
        return rank;
    }

    bool operator>(const Point& c) {
        if(x > c.x && y > c.y)
            return true;
        else 
            return false;
    }

    bool operator<(const Point& c) {
        if(x < c.x && y < c.y)
            return true;
        else 
            return false;
    }
};

int N;
Point points[50];

void solve(){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; j++){
            if(points[i] < points[j] && i != j)
                points[i].increase_rank();
        }
    }
    for(int i = 0; i < N; i++){
        cout << points[i].get_rank() << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;
    int weight, height;

    for(int i = 0; i < N; i++) {
        cin >> weight >> height;
        points[i].set_x(weight);
        points[i].set_y(height);
    }

    solve();
    return 0;
}