#include<iostream>
using namespace std;

class Solution {
    public:
        int hammingWeight(int n){
            int count = 0;
            while(n != 0){
                if(n&1){
                    count++;
                }
                n= n>>1;
            }
            return count;
        }
};

int main(){
    Solution S;
    int n = 11;
    int count = S.hammingWeight(n);
    cout << "The number of set bits: " << count <<endl;

    return 0;
}