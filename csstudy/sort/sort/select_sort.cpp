#include "util.h"

/*
ѡ������
ʹ������ѭ����ÿ���ҳ����\Сֵ��Idx��Ȼ����н�����
*/

void select_sort(int arr[], int cnt)
{
	for (int i = 0; i < cnt; i++) {
		int minIdx = i;
		for (int j = i + 1; j < cnt; j++) {
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		swap(arr, i, minIdx);
	}
}