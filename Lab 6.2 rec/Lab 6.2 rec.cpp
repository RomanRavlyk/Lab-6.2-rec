#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <vector>
using namespace std;

void printArray(int* arr, int size, int i);
void generateArray(int* arr, int size, int min, int max, int i);
void swapArrayHalves(int* array, int size, int i);
int main() {
	const int arrSize = 10;
	int a[arrSize];
	int n = sizeof(a) / sizeof(a[0]);
	generateArray(a, arrSize, -10, 10, 0);

	cout << "originalArray: ";
	printArray(a, arrSize, 0);

	swapArrayHalves(a, 0, n - 1);
	cout << "cyclicall rotation: ";
	printArray(a, arrSize, 0);
}

void generateArray(int* arr, int size, int min, int max, int i) {

	if (i < size) {
		arr[i] = min + rand() % (max - min + 1);
		generateArray(arr, size, min, max, i + 1);
	}
}

void printArray(int* arr, int size, int i) {
	if (i < size) {
		cout << arr[i] << " ";
		printArray(arr, size, i + 1);
	}
	else {
		cout << endl;
		return;
	}
}

void swapArrayHalves(int* array, int start, int end) {
	if (start >= end) {
		return;
	}

	int temp = array[start];
	array[start] = array[end];
	array[end] = temp;
	swapArrayHalves(array, start + 1, end - 1);
}