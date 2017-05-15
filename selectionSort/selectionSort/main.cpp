// Selection sort 
#include <iostream>
template < typename T >
void selection_sort(T *const arr, const int n);
template < typename T >
int find_min_pos(T *const arr, const int &_begin, const int &_end);
template < typename T >
void swap_elements(const T &a, const T &b);
int main()
{
	const int n = 5;
	int A[n] = { 5, 2, 4, 6, 1 };
	selection_sort(A, n);
}

template < typename T >
void selection_sort(T *const arr, const int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_pos = find_min_pos(arr, i, n);
		swap_elements(arr[min_pos], arr[i]);
	}
}

template < typename T >
int find_min_pos(T *const arr, const int &_begin, const int &_end)
{
	T min = arr[_begin];
	int min_pos = _begin;
	for (int i = _begin; i < _end; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_pos = i;
		}
	}
	return min_pos;
}

template < typename T >
void swap_elements(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}