//要点是从左下开始找
class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int len=array[0].size();
        if(len==0) return false;
        int x=array.size()-1,y=0;
        while(x>=0&&y<len){
            if(array[x][y]==target) return true;
            if(array[x][y]>target) --x;
            else ++y;
        }
        return false;
    }
};
