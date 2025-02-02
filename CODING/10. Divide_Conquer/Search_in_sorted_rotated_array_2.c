/*
Search an element in a sorted and rotated array

Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<stdio.h>
#include<stdbool.h>

int findPivot(int arr[], int start, int end) { // O(logN)

	while(start <= end) {

		int mid = (start + end) / 2;

		if(arr[mid] > arr[mid + 1]) {
			return mid;
		}
		else if(arr[mid] < arr[start]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

bool BinarySearch(int arr[], int target, int start, int end) { // O(logN)

	while(start <= end) {

		int mid = (start + end) / 2;

		if(arr[mid] == target) {
			return true;
		}
		else if(arr[mid] > target) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return false;
}

bool searchRotatedArray(int arr[], int target, int N) {

	int pivotIndex = findPivot(arr, 0, N - 1);

	if(arr[pivotIndex] == target) {
		return true;
	}

	if(target >= arr[0]) {
		return BinarySearch(arr, target, 0, pivotIndex - 1);
	}
	return BinarySearch(arr, target, pivotIndex + 1, N - 1);
}

int main() {

	int arr[]={3, 4, 5, 1, 2};
	int size = sizeof(arr) / sizeof(*arr);
	int target = 3;

	printf(searchRotatedArray(arr, target, size) ? "Found" : "Not Found");
}
