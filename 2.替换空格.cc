//模拟题，细心

class Solution {
public:
	void replaceSpace(char *str,int length) {
	    int cnt=0;
        for(int i=0;i<length;i++) if(str[i]==' ') cnt++;
        *(str+length+cnt*2)='\0';
        for(int i=length-1;i>=0;i--){
            if(str[i]==' '){
                --cnt;
                 *(str+i+cnt*2)='%';
                 *(str+i+cnt*2+1)='2';
                 *(str+i+cnt*2+2)='0';

            }
            else{
                *(str+i+cnt*2)=*(str+i);
            }
        }
    }
};
