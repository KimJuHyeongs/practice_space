#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<string, pair<int, int> > f,
             pair<string, pair<int, int> > s){
    if(f.second.first == s.second.first){
        return f.second.second < s.second.second;
    }
    else {
        return f.second.first > s.second.first;
    }
}

int main(void){
    // value = (name, grade, age)
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> >("kjh",pair<int, int>(100,16)) );
    v.push_back(pair<string, pair<int, int> >("lee",pair<int, int>(65,21)) );
    v.push_back(pair<string, pair<int, int> >("young",pair<int, int>(65,11)) );
    v.push_back(pair<string, pair<int, int> >("hak",pair<int, int>(72,16)) );
    v.push_back(pair<string, pair<int, int> >("jon",pair<int, int>(43,16)) );

    sort(v.begin(), v.end(), compare);

    for(int idx = 0; idx<v.size(); idx++){
        printf("Name : %s, Grade : %d, Age : %d\n", v[idx].first.c_str(), v[idx].second.first, v[idx].second.second);
    }

    return 0;
}