/*
*Written By Abhishek Chatterjee
*Bubble Sort Program
*04/01/2018
*/
#include<iostream>

using namespace std;

int main(){
	int arr[100];
	int n, i, j, temp;
	cout << "Bubble sort by Abhishek Chatterjee" << endl;
	cout << "How many numbers you want to enter : ";
	cin >> n;
	// Asking the numbers and then storing it in an array
	for (i=0;i<n;i++){
		cout << "Please enter number " << i+1 << " : ";
		cin >> arr[i];	
	}
	// Printing all numbers 
	cout << endl << "Printing the numbers" << endl;
	for(i=0;i<n;i++){
		cout << "Number " << i+1 << " is " << arr[i] << endl;
	}
	// Bubble Sort
	cout << endl <<"Sorting the numbers" << endl;
	for (i=n-1;i>=0;i--){
		for (j=0;j<i;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	// Printing all numbers 
	cout << endl << "Printing numbers" << endl;
	for(i=0;i<n;i++){
		cout << "Number " << i+1 << " is " << arr[i] << endl;
	}
	return 0;
}
