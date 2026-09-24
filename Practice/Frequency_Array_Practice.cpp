/*
    Topic: Frequency Array Practice

    Questions:
    1. Find the number with maximum frequency
    2. Find the first unique number

    Approach: Frequency Array
    Time Complexity: O(n)
    Space Complexity: O(k)
*/
//code
//QUESTION : 1..........................................................................
#include<iostream>
using namespace std;

int main(){
	int arr[8] = {1,4,2,4,3,1,4,2};
	int freq[100] = {0};
	int max_freq = freq[0];
	int number;
	
	for( int i = 0; i< 8;i++){
		freq[arr[i]]++;
	}
	for( int i = 0; i < 8; i++){
		if( freq[i] > max_freq){
			max_freq = freq[i];
			number = i;
			
		}
		}
	cout << max_freq <<endl;
	cout << number <<endl;
}

//QUESTION : 2............................................................................

int main(){
	int arr[8] = {2,4,2,5,6,5,4,7};
	int freq[100] = {0};
	
	for(int i = 0; i < 8 ;i++){
		freq[arr[i]]++;
	}
	for(int i = 0 ; i< 8 ; i++){
		if(freq[arr[i]] == 1){
			cout << "first unique number is:" << arr[i] <<endl;
        break ;
	}
}
}
