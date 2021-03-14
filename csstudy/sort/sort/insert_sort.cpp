#include "util.h"


/*
��������
	���ں�����ÿ��Ԫ�أ��ҵ���Ӧ��λ�ú󣬽�Ԫ��������ƣ�

*/

void insert_sort(int arr[], int cnt)
{
	for (int i = 1; i < cnt; i++) {
		for (int j = i; j >= 1; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr, j, j - 1);
			}
		}
	}
}

/*
�Ż�˼·��
ÿһ�������ǲ�����ģ������ȱ���ֵ�����Ų��ֱ���ҵ�λ�ã�
*/
void insert_sort_op1(int arr[], int cnt)
{
	for (int i = 1; i < cnt; i++) {
		int tmp = arr[i];
		int j = i;
		for (; j >= 1; j--) {
			if (tmp < arr[j - 1]) {
				arr[j] = arr[j - 1];
				continue;
			}
			break;
		}
		arr[j] = tmp;
	}
}


/*
�Ż�˼·��
�ҵ��������ʹ�ö��ֲ��ҵ�˼��
*/

int binary_search2(int arr[], int i, int j, int val)
{
	while (i < j) {
		int mid = (i + j) / 2;
		if (val < arr[mid]) {
			j = mid;
		} else {
			i = mid + 1;
		}
	}
	return i;
}

int binary_search(int arr[], int i, int j, int val)
{
	/* [i, j] �ĳ���������ұ� */
	j--;
	while (i <= j) {
		int mid = (i + j) / 2;
		if (val < arr[mid]) {
			j = mid - 1;
		}
		else {
			i = mid + 1;
		}
	}
	return i;
}

void insert_sort_op2(int arr[], int cnt)
{
	for (int i = 1; i < cnt; i++) {
		if (arr[i] >= arr[i - 1]) {
			continue;
		}
		int idx = binary_search(arr, 0, i, arr[i]);
		int tmp = arr[i];
		for (int j = i; j > idx; j--) {
			arr[j] = arr[j - 1];
		}
		arr[idx] = tmp;
	}
}