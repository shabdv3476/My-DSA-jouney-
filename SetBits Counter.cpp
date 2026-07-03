#include <bits/stdc++.h>
using namespace std;

int countSetBits (int num) {
    
    int count = 0;
    
    while ( num != 0) {
        
        if ( num & 1) {
            count ++;
        }
        
        num = num >> 1;
        
    }
    
    return count;
    
}


int main () {
    
    int num1, num2;
    cin >> num1 >> num2;
    
    // TSB = Total Set Bits
    int TSB = countSetBits(num1) + countSetBits(num2);
    
    cout << "Total number of SetBits in num1 and num2 are: " << TSB;
    
    return 0;
    
}