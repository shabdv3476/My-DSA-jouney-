#include <bits/stdc++.h>
using namespace std;

int getMax ( int arr [], int size) {
    
    int maxi = INT_MIN;
    
    for ( int i = 0; i < size; i ++ ) {
        
        maxi = max( arr[i], maxi);
        
    }
    
    return maxi;
    
}

int getMin ( int arr [], int size) {
    
    int mini = INT_MAX;
    
    for ( int i = 0; i < size; i ++ ) {
        
        mini = min( arr[i], mini);
        
    }
    
    return mini;
    
}


int main() {
	
	int size;
	cin >> size;
	
	int arr[100];
	
	for (int i = 0; i < size; i ++) {
	    cin >> arr[i];
	}
	
	cout << "Maximum value is: " << getMax(arr, size) << endl;
	cout << "Minimum value is: " << getMin(arr, size) << endl;
	
}
