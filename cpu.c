//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
#define l 512
int i[l+2];
int sscore=0;
int version(){
	return 0;
}
int main(){
	printf("version %d\n",version());
	return 0;
}
int scores(int a){ 
  sscore=sscore+a;
  return sscore;
}
int ram(int a,int writes,int value){ 
  int ii=0;
  if(a>0 && a<l+1){
	  if(writes!=0)i[a-1]=value;
	  ii=(int)i[a-1];
  }else{if(a==0){
			ii=(int)l;
		}else{ii=0;}
		}
	
	
  return ii;
}
int floatEmulator(int a,int b,int matfunc){ 
  int ii=0;
  int precs=1000;
  if(matfunc==0)ii=a+b;
  if(matfunc==1)ii=a-b;
  if(matfunc==2)ii=a*b;
  if(matfunc==3)ii=a/b;
  if(matfunc==4)ii=a*precs;
  if(matfunc==5)ii=a/precs;
  return ii;
}
int add(int a,int b){ 
  return a+b;
}
int power(int a,int b){ 
	int c;
	int d;
	c=a;
	if(b>0){
		for(d=0;d<b-1;d++){
			c=c*a;
		}
	}else{c=1;}
  return c;
}
int min(int a,int b){ 
	int c=a;
	if(b<a)c=b;
	return c;
}
