//palindrom number

#include <iostream>

using namespace std;

//define palindrom 

class Solution {
    public:
        bool isPalindrome(long long int x) {

            //if number negative return false
            if(x<0) return false;

            //revnum variable store reverse number
            long long int revnum = 0;
            //duck store original number x
            long long int duck = x;

            //reverse number
            while (x > 0 ){
                int lastdigit = x % 10; // get last digit 
                revnum = (revnum*10)+lastdigit; //build reverse number
                x=x/10; //remove last digit 
            }

            // compare orignal number with reversed number
            // == same value as right side 
        return (duck == revnum);
        }
};

//interaction palindrome

int main () {
    Solution solution;
    long long num;

    cout << "Enter a number: ";
    cin >> num;

    if (solution.isPalindrome(num)){
        cout << num  << " is a palindrome." << endl;
    } else {
        cout << num << " is not palindrome." << endl;
    }

    return 0;

}