/*
    Topic: Prefix Sum Practice

    Question:
    Calculate prefix sums and find a range sum.

    Approach: Prefix Sum
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
//code
#include<iostream>
using namespace std;

int main(){
	int arr[5] = {1,2,3,4,5};
	int prifix[5];
	int i;
	int sum;
	prifix[0] = arr[0];
	for (i = 1 ; i < 5 ; i++){
		prifix[i] = prifix[i-1] + arr[i];
	}
	sum = prifix[4] - prifix[0];
	cout << sum <<endl;
}
