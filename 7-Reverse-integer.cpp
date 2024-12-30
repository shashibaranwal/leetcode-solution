#include<iostream>
#include<Climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int i=0;
        long result = 0;

        while(x != 0){
            int digit = x%10;
            result = result*10 + digit;
            if(result > INT_MAX || result < INT_MIN){
                return 0;
            }
            x = x/10;
            i++;
        }
        return result;
    }
};

int main(){
    int n;
    cout<< "Enter any number: ";
    cin>> n;

    Solution s;
    int result = s.reverse(n);
    cout<< result;

    return 0;
}