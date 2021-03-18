class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows==1) return s;    
        string temp[nRows];
        int idx=-1;
        int step=1;
        for(int i=0;i<s.size();i++){
            idx +=step;
            if(idx==nRows){
                idx=nRows-2;
                step=-1;
            }
            else if(idx==-1){
                idx=1;
                step=1;
            }
            temp[idx] +=s[i];
        } 
        string ret;
        for(int i=0;i<nRows;i++) ret+=temp[i];
        return ret;
    }
};
