/*
    Topic: Sliding Window Practice

    Questions:
    1. Minimum Size Subarray Sum
    2. Minimum Length Subarray with Target Sum

    Approach: Variable-size Sliding Window
    Time Complexity: O(n) for each question
    Space Complexity: O(1)
*/
//code
#include<iostream>
using namespace std;

int main(){
	int arr[6] = {2,3,1,2,4,3};
	int n =6;
	int target = 7;
	int left = 0;
	int sum = 0;
	int minlength = n;
	for(int right = 0; right < n ; right ++){
		sum += arr[right];
		cout << "right" << right << "sum =" << sum <<endl;
	
	while(sum>= target){
		int length =  right - left + 1;
		cout << "length is:" << length <<endl;
		if(length < minlength){
			minlength = length;
		}
		sum -= arr[left];
		left++;
	}
	}
	cout << minlength << endl;
	return 0;
}


// NEXT CODE..................................................................

int main(){
	int arr[7] = {2,1,5,2,3,2,4};
	int target = 8;
	int right = 0;
	int left = 0;
	int sum = 0;
	int n = 7;
	int minlength = n;
	
	for( right = 0 ; right < n ; right ++){
		sum += arr[right];
	
	while ( sum >= target){
		int length = right - left + 1;
		if(length < minlength){
			minlength = length;
		}
		sum -= arr[left];
		left ++;
	}
    }
cout << minlength << endl;
return 0;
}
