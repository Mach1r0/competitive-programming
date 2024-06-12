#include <map>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string get_key(vector<string> &v, string &attr) {
    stringstream ss;
    
    ss << v[0];
    for (int i = 1; i < v.size(); i++) {
        ss << '.' << v.at(i);
    }
    
    ss << '~' << attr;
    
    return ss.str();
}

string get_value(string &val) {
    stringstream ss;
    
    for (int i = 0; val.at(i) != '"'; i++)
        ss << val[i];
    
    return ss.str();
}

int main() {
    int n, q;
    string s, attr;
    vector<string> v;
    map<string, string> mp;
    cin >> n >> q;
    while (n) {
        cin >> s;
        if (s.back() == '>')
            n--;
        if (s[1] == '/') {
            v.pop_back();
            continue;
        }
        if (s[0] == '<') {
            s.erase(0, 1);
            
            if (s.back() == '>')
                s.pop_back();
                
            v.push_back(s);
            continue;
        }
        if (s[0] == '"')
            mp[get_key(v, attr)] = get_value(s.erase(0, 1));
        
        if (s[0] != '=')
            attr = s;
    }
    
    while (q--) {
        cin >> s;
        
        cout << (mp.count(s) ? mp[s] : "Not Found!") << endl;
    }
        
    return 0;
}