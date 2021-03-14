#include "util.h"

/*
ð������
	��ÿһ��Ԫ�أ��ȽϺ�������һ��Ԫ�أ�������ڣ�����н�����
*/

void bubble_sort(int arr[], int cnt)
{
	for (int i = cnt; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[j - 1]) {
				swap(arr, j, j - 1);
			}
		}
	}
}

/*
	�Ż�һ���Ѿ�����ĳ���
*/
void bubble_sort_op1(int arr[], int cnt)
{
	for (int i = cnt; i > 0; i--) {
		bool sorted = true;
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[j - 1]) {
				swap(arr, j, j - 1);
				sorted = false;
			}
		}
		/* �ӵ�0��Ԫ��ɨ�趼û����Ҫ�����ģ���һ��ɨ��Ҳ�ǲ���Ҫ���� */
		/* ��ʱ�����Ѿ������ˣ����˳�ɨ�� */
		if (sorted == true) {
			break;
		}
	}
}

/* 
	�Ż�������Բ�������ĳ���
*/
void bubble_sort_op2(int arr[], int cnt)
{
	for (int i = cnt; i > 0; i--) {
		int sorted = 0;
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[j - 1]) {
				swap(arr, j, j - 1);
				sorted = j;
			}
		}
		/* �������ݣ� 1 3 2 0 6 7 8 9 */
		/* ��һ����Ҫ������������0������Ĳ���Ҫ��������ô���Լ�����Ҫ���µ��ִ� */
		i = sorted;
	}
}