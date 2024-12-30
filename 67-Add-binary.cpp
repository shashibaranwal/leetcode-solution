#include<iostream>
#include<string.h>
using namespace std;


class Solution {
    public:
        string addBinary(string a, string b){
            int i = a.size() - 1;
            int j = b.size() - 1;
            int carry = 0;
            string result = "";

            while(i>=0 || j>=0 || carry){
                int sum = carry;

                if(i>=0){
                    sum = sum + a[i] - '0';
                    i--;
                }
                if(j>=0){
                    sum = sum + b[j] - '0';
                    j--;
                }
                carry = sum/2;
                result = to_string(sum%2) + result;
            }
            return result;
        }
};

int main(){
    int num1, num2;
    cin>> num1;
    cin>> num2;

    Solution s;
    string result = s.addBinary(to_string(num1), to_string(num2));

    cout<< "Sum: " << result <<endl;

    return 0;
}



// 0101             1011
// 1010             0110
// 1111           1 0001