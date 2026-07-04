#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cout << "Enter the amount n" << endl;
    cin >> n;
    
    int x;
    
    int num = 1;
    
    switch(num)
    {
        case 1: x = n / 1000;
        cout << "No. of 1000 rs notes are " << x << endl;
        n = n - (x * 1000);
        
        case 2: x = n / 500;
        cout << "No. of 500 rs notes are " << x << endl;
        n = n - (x * 500);
        
        case 3: x = n / 200;
        cout << "No. of 200 rs notes are " << x << endl;
        n = n - (x * 200);
        
        case 4: x = n / 100;
        cout << "No. of 100 rs notes are " << x << endl;
        n = n - (x * 100);
        
        case 5: x = n / 50;
        cout << "No. of 50 rs notes are " << x << endl;
        n = n - (x * 50);
        
        case 6: x = n / 20;
        cout << "No. of 20 rs notes/coins are " << x << endl;
        n = n - (x * 20);
        
        case 7: x = n / 10;
        cout << "No. of 10 rs notes/coins are " << x << endl;
        n = n - (x * 10);
        
        case 8: x = n / 5;
        cout << "No. of 5 rs coins are " << x << endl;
        n = n - (x * 5);
        
        case 9: x =  n / 2;
        cout << "No. of 2 rs coins are " << x << endl;
        n = n - (x * 2);
        
        case 10: x =  n / 1;
        cout << "No. of 1 rs coins are " << x << endl;
        n = n - (x * 1);
    }
    
}