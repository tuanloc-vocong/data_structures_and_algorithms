// Title: Student Sort
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic:

/**
 * Cho N sinh viên khác nhau, mỗi sinh viên sẽ gồm mã số sinh viên và điểm của mình. Hãy tìm k sinh viên có điểm
 * cao nhất trong N sinh viên này.
 * 
 * Input:
 * Dòng thứ nhất gồm N (1≤N≤1000) là số lượng sinh viên và k (1≤k≤N) là số sinh viên cần lấy điểm cao nhất cách nhau
 * bởi một khoảng trắng.
 * 
 * N dòng tiếp theo, mỗi dòng gồm mã số sinh viên và điểm của sinh viên đó, điểm của sinh viên là một số thực x (0≤x≤10).
 * 
 * Output:
 * Gồm k dòng, mỗi dòng là một mã số của k sinh viên có điểm cao nhất.
 * Khi hai sinh viên có điểm bằng nhau thì ưu tiên sinh viên có mã số sinh viên nhỏ hơn.
 * Được biết rằng: Mã số của các sinh viên khác nhau là khác nhau.
 * 
 * Example 1:
 * Input:
 * 4 3
 * 15478 8.9
 * 17895 6.8
 * 18647 6.8
 * 14782 9.0
 * 
 * Output:
 * 14782
 * 15478
 * 17895
 **/

#include <iostream>
#include <string.h>
using namespace std;

struct Student
{
	int id;
	float point;
};

bool compare(Student a, Student b)
{
	return a.point > b.point || (a.point == b.point && a.id < b.id);
}

void merge(int n1, Student L[], int n2, Student R[], Student a[])
{
	int i, j, k;
	i = j = k = 0;
	while (i < n1 && j < n2) {
		if (compare(L[i], R[j])) {
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int n, Student a[])
{
	Student L[501];
	Student R[501];
	if (n > 1) {
		int n1 = n / 2;
		int n2 = n - n1;
		for (int i = 0; i < n1; i++) {
			L[i] = a[i];
		}
		for (int i = 0; i < n2; i++) {
			R[i] = a[i + n1];
		}

		mergeSort(n1, L);
		mergeSort(n2, R);
		merge(n1, L, n2, R, a);
	}
}

int main() {
	int k, n;
	Student a[1000];
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].point;
	}

	mergeSort(n, a);

	for (int i = 0; i < k; i++)
		cout << a[i].id << endl;
}
