#include <stdio.h>

int main() {
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	char* par[3];//ָ�����顣ָ������Ϊchar*�����������ָ����ɡ�
	
	int a = 10;
	int b = 20, c = 30, d = 40;
	int* pin[4] = { &a,&b,&c,&d };
	int i = 0;
	for (; i < 4; i++) {
		printf("��%d��Ԫ�أ�Ԫ������Ϊ%p������Ϊ%d\n", i, pin[i], *pin[i]);
	}//���������õ�

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arrs[] = { arr1,arr2,arr3 };//����Ķ�����Ԫ�صĵ�ַ
	
	return 0;
}