#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask = 0;

        if(n==0){
            return 1;
        }
        while(m != 0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int answer = (~n) & mask;
        return answer;
    }
};

int main(){
    int n;
    cin>> n;

    Solution s;
    cout<< s.bitwiseComplement(n) <<endl;

    return 0;
}