/*
    Topic: Two Pointer Practice

    Questions:
    1. Reverse an array using two pointers
    2. Find two numbers with a target sum
    3. Find two numbers with a target sum

    Approach: Two Pointer
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
//code

//QUESTION: 1.....................................................................................
#include<iostream>
using namespace std;

int main(){
	int arr[6] = {1,2,3,4,5,6};
	int left = 0;
	int right = 5;
	int i;
	
	while(left < right){
		swap(arr[left] , arr[right]);
		left ++;
		right --;
	}
	for(i=0 ; i < 6  ; i++){
		cout << arr[i] <<endl;
	}
}

//have to find two numbers whose sum would be 35 by two pointer method

///QUESTION:2........................................................................................
int main(){
	int arr[6] = {5 ,10 ,15 ,20 ,25 ,35};
	int left = 0;
	int right = 5;
	int target = 35;
	int i;
	 while(left < right){
	 	int sum = arr[left] + arr[right];
	 	if(sum == target){
	 		cout << " found :" <<endl;
	 		cout << "sum of " << arr[left] << "+" << arr[right] << "is:" << sum <<endl;
	 		break;
		 }else if(sum < target){
		 	left ++;
		 }else{
		 	right --;
		 }
	 }
	 } 

//QUESTION: 3.....................................................................................
	 
	 int main(){
	 	int arr[8] = {1,2,3,4,5,6,8,9};
	 	int left = 0;
	 	int right = 7;
	 	int target = 10;
	 	
	 	while(left < right){
	 		int sum = arr[left] + arr[right];
	 		if(sum == target){
	 			cout << "found:" <<endl;
	 			cout << "index no are:" << left << right << " have sum:" << sum <<endl;
				break;
				 }else if (target < sum){
			 	right--
				 ;}else{
				 left++
			 ;}
		}
	}
	
