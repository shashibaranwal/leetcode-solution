#include<iostream>
#include<cmath>
using namespace std;

class Solution{
    public:
        bool isPowerOfTwo(int n){
            
            for(int i=0; i<=30; i++){
                int answer = pow(2, i);
                if(answer == n){
                    return true;
                }
            }
            return false;
        }
};

int main(){
    int n;
    cin>> n;

    Solution s;
    cout<< s.isPowerOfTwo(n);

    return 0;

}