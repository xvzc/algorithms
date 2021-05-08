#include<iostream>
using namespace std;

int n;
int i;
int j;
int k;
int startIndex;
int groupLength;
string str[100];
bool doesExist;

int main(){
    cin >> n; 
    for(;i<n;cin >> str[i++]);
    for(i=0;i<n;i++){
        for(j=1;j<str[i].length();j++){
            for(k=0;k<j;j++){
                startIndex = k;
                if(str[j] == str[k]){
                    groupLength++;
                    continue;
                }
                if()

            }
        }
    }
    // for(i=0;i<n;cout << str[i++]);
}