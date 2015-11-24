/* 
    Problem:输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

*/


#include<bits/stdc++.h>

using namespace std;

struct A{
    int a,b;
};

//solution A:
int solveA(int x){
    int ret=0;
    while(x){
        if(x%2==1) ret++;
        x/=2;
    }
    return ret;
}

//Sloution ex_A:
int EX_solveA(int x){
    int ret;
    while(x){
        if(x&1) ret++;
        x>>=1;
    }
    return ret;
}

//上面的方法是有问题的，对于正整数自然是没有问题，但
//对于负数，符号位会自动补 1，例如 0X80000000 右移一
//位，是0Xc0000000，而不是0x40000000；

//The correct solution

//Solution C
int solveC(int x){
    unsigned p=1,ret=0; // 此处一定要是unsigned，可以思考下Why。
    while(p){
        if(x&p) ret++;
        p<<=1;
    }
    return ret;
}

//Solution D ,that is a 
int solveD(int x){
    int ret=0;
    while(x){
        ret++;
        x=x&(x-1);
    }
    return ret;
}




int main(){ 
    cout<<solveD(-16)<<endl;
    return 0;
}
