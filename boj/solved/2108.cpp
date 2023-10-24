#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, x; 
double sum_;
int max_ = -987654321;
int min_ =  987654321;
int max_freq = -1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;

    vector<int> v(N);
    vector<int> freq(8001);
    for(int i = 0; i < N; ++i){
        cin >> x;

        v[i] = x;
        ++freq[x+4000];

        if(max_freq < 0)
            max_freq = x+4000;
        else if(freq[x+4000] > freq[max_freq])
            max_freq = x+4000;

        sum_ += x;
        max_ = x > max_ ? x : max_;
        min_ = x < min_ ? x : min_;
    }

    vector<int> max_freq_vector;
    for(int i = 0; i < 8001; ++i){
        if(freq[i] == freq[max_freq]){
            max_freq_vector.push_back(i-4000);
        }
    }

    sort(v.begin(), v.end());
    cout << (int)round(sum_/N) << endl;          
    cout << v[N/2] << endl;

    if(max_freq_vector.size() > 1)
        cout << max_freq_vector[1] << endl;
    else
        cout << max_freq_vector[0] << endl;

    cout << max_ - min_ << endl;

    return 0;
}