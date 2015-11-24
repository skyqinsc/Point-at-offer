/*
题目描述

把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个非递减序列的一个旋转，输出旋转数组的最小元素。例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
*/

//好像正解，是要你分类讨论吧。
class Solution {
public:
    int minNumberInRotateArray(vector<int> arr) {
        int len=arr.size();
        if(len<=0) return 0;
        int minn=arr[0];
        for(int i=0;i<len;i++)
            minn=min(minn,arr[i]);
        return minn;
    }
};
