/*
*Programmed by Abhishek Chatterjee
*Selection Sort
*05/01/2018
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
	// Selection sort
	for(i=0;i<n;i++){
		int minIndex = i;
		for (j=i;j<n;j++){
			if(arr[minIndex] > arr[j]){
				minIndex = j;
			}
		}
		if(minIndex != i){
			temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	// Printing all numbers 
	cout << endl << "Printing numbers" << endl;
	for(i=0;i<n;i++){
		cout << "Number " << i+1 << " is " << arr[i] << endl;
	}
	return 0;
}
