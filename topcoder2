class A0Paper{
    string canBuild(vector<int>a){
        int f=0;
        a[0]=0;
        for(int i=a.size()-1;i>1;i--){
            a[i-1]+=a[i]/2;
        }
        if(a[0]){
            f=1;
        }


        if(!f){
            return "Impossible";
        }
        else{
            return "Possible";
        }
    }
};
