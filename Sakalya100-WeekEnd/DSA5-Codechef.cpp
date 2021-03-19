#include<iostream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<malloc.h>
 
#define LL long long
using namespace std;
 
LL rot[555555];
int rotSize;
 
int binarySearchLeft(int st,int ed,LL val){// cout<<st<<" "<<ed<<" l"<<val<<endl; getchar();
	if( st==ed ){ if( rot[st]<=val ) return st; return st+1; }
	if( st+1==ed ){
		if( val <= rot[st] ) return st;
		if( val <= rot[ed] ) return ed;
		return ed+1;
	}
	int m=(st+ed)/2;
	if( rot[m] > val ) return binarySearchLeft(st,m,val);
	else return binarySearchLeft(m,ed,val);
}
 
int binarySearchRight(int st,int ed,LL val){ //cout<<st<<" "<<ed<<" r "<<val<<endl; getchar();
	if( st==ed ){ if( rot[st]>=val ) return st; return st-1; }
	if( st+1==ed ){
		if( val >= rot[ed] ) return ed;
		if( val >= rot[st] ) return st;
		return st-1;
	}
	int m=(st+ed)/2;
	if( rot[m] > val ) return binarySearchRight(st,m,val);
	else return binarySearchRight(m,ed,val);
}
 
struct tri{
	int size,*list; 
	tri *child[11];
}*head,*headc;
 
void insert(tri *&head,char *s,int val){  
	if( head==NULL ){
		head=(tri*)malloc(sizeof(tri));
		head->size=0; 
		for(int i=0;i<11;i++) head->child[i]=NULL;
	}
		
	if( *s=='\0' ){ 
		if( head->size==0 ) head->list=(int*)malloc(sizeof(int)*150);
		head->list[ (head->size)++]=val;  
		return ;
	}
	insert(head->child[ *s - '0' ],s+1,val);	
}
 
void find(tri*h,char *s,LL val){
	if( h==NULL ) return;
	if( *s=='\0'){ 
		for(int i=0;i<h->size;i++) rot[rotSize++]=val+h->list[i]; 
		return ;
	}
	find(h->child[ *s-'0'],s+1,val);
}
 
void make(int end,int len){ 
	head=headc=NULL;   int sz,b; char a[12];
	for(int i=0;i<end;i++){ 
		sz=len; b=i;  int d[10]={0};
		while( sz-- ) {  d[b%10]++; b/=10;}
		sz=len; b=i*2; 
		while( sz-- ) {  d[b%10]--; b/=10;}
		sz=0;
		
		for(int j=9;j>=0;j--)
		  while( d[j]>0 ) { d[j]--; a[ sz++]='0'+j;}
		a[sz++]=':';
		
		for(int j=9;j>=0;j--)
		  while( d[j]<0 ) { d[j]++; a[ sz++]='0'+j;}
		a[sz]='\0';
 
		if( b )	insert(headc,a,i);  
		else  insert(head,a,i);
	}
}
 
 
 
int main (){
	int lenght=3;  
	for(int i=1000;i<1000000;i*=10){
		make(i,lenght); LL val=i;
	   int end=i/2,sz=0; char s[12]; 
 
	   for(int j=i/10;j<end;j++){
			int d[10]={0},a,b;
			a=j; b=j*2;sz=0;
			while( a){ d[a%10]++; a/=10; d[ b%10]--; b/=10;}
 
			for(int k=9;k>=0;k--)
		   	while( d[k]<0 ) { d[k]++; s[ sz++]='0'+k;}
		   s[sz++]=':';
		
		   for(int k=9;k>=0;k--)
		   	while( d[k]>0 ) { d[k]--; s[ sz++]='0'+k;}
		   s[sz++]='\0';	
		   
		   find(head,s,j*val);
		  
		   
		   a=j; b=j*2+1;sz=0;  memset(d,0,sizeof(d));
			while( a){ d[a%10]++; a/=10; d[ b%10]--; b/=10;}
 
			for(int k=9;k>=0;k--)
		   	while( d[k]<0 ) { d[k]++; s[ sz++]='0'+k;}
		   s[sz++]=':';
		
		   for(int k=9;k>=0;k--)
		   	while( d[k]>0 ) { d[k]--; s[ sz++]='0'+k;}
		   s[sz++]='\0';	
		   
		   find(headc,s,j*val);
 
		 }
		
		 if( lenght!=5 ) 
		 for(int j=i/10;j<end;j++){
		   int d[10],a,b;
		   
			for(int jj=0;jj<10;jj++){  
				a=j*10+jj; b=j*20+jj*2; sz=0; memset(d,0,sizeof(d));
				while( a){ d[a%10]++; a/=10; d[ b%10]--; b/=10;}
 
				for(int k=9;k>=0;k--)
		   		while( d[k]<0 ) { d[k]++; s[ sz++]='0'+k;}
		   	s[sz++]=':';
		
		   	for(int k=9;k>=0;k--)
		   		while( d[k]>0 ) { d[k]--; s[ sz++]='0'+k;}
		   	s[sz++]='\0';	
		   
		   	find(head,s,(j*10+jj)*val);
		   
		   
		   	a=jj; a=j*10+jj; b=j*20+jj*2+1; sz=0; memset(d,0,sizeof(d));
				while( a){ d[a%10]++; a/=10; d[ b%10]--; b/=10;}
 
				for(int k=9;k>=0;k--)
		   		while( d[k]<0 ) { d[k]++; s[ sz++]='0'+k;}
		   	s[sz++]=':';
		
		   	for(int k=9;k>=0;k--)
		   		while( d[k]>0 ) { d[k]--; s[ sz++]='0'+k;}
		   	s[sz++]='\0';	
		   
		   	find(headc,s,(j*10+jj)*val);
 
			}
		   
	   }
		lenght++;
	}		 
	
	int testCase; scanf("%d",&testCase); 
	while( testCase--){
 	  LL a,b;scanf("%lld %lld",&a,&b);
	  printf("%d\n",binarySearchRight(0,rotSize-1,b)-binarySearchLeft(0,rotSize-1,a)+1);
	}
	return 0;		
} 
