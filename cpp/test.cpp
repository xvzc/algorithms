#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> hmap;
    for (int i = 0; i < participant.size; i++)
    {
        if(hmap.find(participant[i]) == hmap.end())
            hmap.insert(make_pair(participant[i].to_string(), 1));
        else
            hmap.at(participant[i].to_string())->second++;
    }

    for (int i = 0; i < completion.size; i++)
    {
        if(hmap.find(participant[i])-1 == 0)
            hmap.erase(participant[i].to_string());
        else
            hmap.at(participant[i])->second--;
    }

    string answer = hmap.begin->first;
    return answer;
}