#include<iostream> 
#include<vector>
#include<map>
#include<string>
using namespace std;
class Solution{
public:
    bool isPalindrome(int x){
        string str = to_string(x);
        int j = str.size() - 1; 
        for (int i = 0; i < str.size() / 2; i++){  
            if (str[i] != str[j]){
                return false; 
            }
            j--; 
        }
        return true;
    };
};

int main() {
    Solution solution; 
    int x = 1000021; 
    bool result = solution.isPalindrome(x);  
    cout << result << endl;  
    return 0;
}