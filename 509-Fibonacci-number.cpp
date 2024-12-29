#include<iostream>
using namespace std;

class Solution{
    public:
        int fib(int n){
            int a = 0;
            int b = 1;

            if(n<1){
                return n;
            }
            for(int i=1; i<n; i++){
                int nextNum = a+b;
                a = b;
                b = nextNum;
            }
            return b;

        }
};

int main(){
    // cout<< "This is main function." <<endl;
    Solution s;
    int n;
    cout<< "Enter any number: ";
    cin>> n;
    cout<<s.fib(n)<<endl;

    return 0;
}