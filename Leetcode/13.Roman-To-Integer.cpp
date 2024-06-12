#include<iostream>
#include<sstream>
#include<map>
#include<vector>
using namespace std;

class Solution{
public: 
    int romanToInt(string str){
        map<char, int> dic = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int total = 0;
        int current, previous = 0;
        for (char s : str){
            current = dic[s];
            if (current > previous){
                total = total - 2 * previous + current;
            }
            else{
                total += current;
            }
            previous = current;
        }
        return total; 
    }
};
int main(){
    Solution soluction; 
    string str = "XXX";
    int result = soluction.romanToInt(str);
    cout << result; 
    return 0; 
}