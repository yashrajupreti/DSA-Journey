/*
    Topic: Bubble Sort Practice

    Questions:
    1. Sort an array using Bubble Sort
    2. Sort an array using Bubble Sort
    3. Sort an array using Bubble Sort

    Approach: Bubble Sort
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/
//code

//QUESTION: 1.........................................................................................
#include<iostream>
using namespace std;
 int main(){
 	int arr[5]={4,5,2,9,1};
 	int i , j , k;
 	
 	for(i=0 ; i < 4 ; i++){
 		for(j = 0; j< 4;j++){
 			
 			if( arr[j] > arr[j+1]){
 				swap(arr[j+1] , arr[j]);
			 }
		 }
		 
	 }
	 for(k=0 ; k < 5 ; k++){
	 	cout << arr[k] <<endl;
	 }
	 }
	 
	//QUESTION: 2.................................................................................... 
	 
	 #include<iostream>
	 using namespace std;
	  int main(){
	  	int arr[7] = {9,3,5,1,8,7,3};
	  	int i , j , k;
	  	 
	  	for(i=0 ; i < 6 ; i++){
	  		for(j = 0; j<6  ;j++){
	  			if(arr[j] > arr[j+1]){
	  				swap(arr[j] , arr[j+1]);
				  }
			  }
		  }
		  for(k =0 ; k < 7; k++){
		  	cout << arr[k] <<endl;
		  }
	  }

//QUESTION: 3........................................................................................
	  
	  #include<iostream>
	  using namespace std;
	  
	  int main(){
	  	int arr[5] = {4,6,2,3,7};
	  	int i , j ,k;
	  	
	  	for(i = 0 ; i < 4 ; i++){
	  		for(j = 0; j< 4 ; j++){
	  			if(arr[j] > arr[j+1]){
	  				swap(arr[j] , arr[j+1]);
				  }
			  }
		  }
		  for(k=0 ; k < 5 ; k++){
		  	cout << arr[k] <<endl;
		  }
	  }
	  
