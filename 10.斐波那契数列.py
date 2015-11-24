# 题目描述
#
#大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。

# f[n]=f[n-1]+f[n-2]
# 最快应该是矩阵加速 nlogn
# 但是oj上矩阵加速还没py快，所以我show一波

class Solution:
    def Fibonacci(self, n):
        a = [0,1,1]
        if n<3:
            return a[n]
        for i in range(3,n+1):
            a.append(a[i-1]+a[i-2])
        return a[n]

