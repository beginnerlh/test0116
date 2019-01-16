//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//示例 1:
//
//给定 nums = [3, 2, 2, 3], val = 3,
//
//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
//
//你不需要考虑数组中超出新长度后面的元素。
//示例 2:
//
//给定 nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,
//
//函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
//
//注意这五个元素可为任意顺序。
//
//你不需要考虑数组中超出新长度后面的元素。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
	int count = 0;//计算与val值不等的元素
	int i = 0;
	while (i<numsSize)//i和count初始相同  如果和val相等那么 i++ 
		//那么和val相同的值就在count位，直到下次第i位不等的值。替换第count位
	{
		if (nums[i] != val)
		{
			nums[count] = nums[i];//用和val不同的数把前面和val相同的覆盖
			count++;
		}
		i++;

	}
	printf("移除后的元素：");
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
	printf("新的长度为：%d\n", b);
	system("pause");
	return 0;
}