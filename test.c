//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 1:
//
//���� nums = [3, 2, 2, 3], val = 3,
//
//����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 2:
//
//���� nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,
//
//����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��
//
//ע�������Ԫ�ؿ�Ϊ����˳��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
	int count = 0;//������valֵ���ȵ�Ԫ��
	int i = 0;
	while (i<numsSize)//i��count��ʼ��ͬ  �����val�����ô i++ 
		//��ô��val��ͬ��ֵ����countλ��ֱ���´ε�iλ���ȵ�ֵ���滻��countλ
	{
		if (nums[i] != val)
		{
			nums[count] = nums[i];//�ú�val��ͬ������ǰ���val��ͬ�ĸ���
			count++;
		}
		i++;

	}
	printf("�Ƴ����Ԫ�أ�");
	for (int j = 0; j < count; j++)
	{
		printf("%d ", nums[j]);
	}
	printf("\n");
	return count;
}
int main()
{
	int num[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int len = sizeof(num) / sizeof(int);
	int a = 2;
	
	int b= removeElement(num, len, a);
	printf("�µĳ���Ϊ��%d\n", b);
	system("pause");
	return 0;
}