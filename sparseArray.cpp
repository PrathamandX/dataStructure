#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print(int a[100][100],int b[100][100],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
}
void avg(int a[100][100],int b[100][100],int n,int m){
	int c[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i][j]=(a[i][j]+b[i][j])/2;
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
}
int main(){
	int a[100][100],b[100][100];
	int r,p,n,m;
	scanf("%d %d",&n,&m);
	p = rand()%(n-2);
	for(int i=0;i<p;i++){
		int t1,t2;
		t1=rand()%(n);
		t2=rand()%(m);
		r=rand()%5 + 1;
		a[t1][t2]=r;
	}
	for(int i=0;i<p;i++){
		int f1,f2;
		f1=rand()%(n);
		f2=rand()%(m);
		r=rand()%5 +1;
		b[f1][f2]=r;
	}
	print(a,b,n,m);
	printf("\n");
	avg(a,b,n,m);
	return 0;
}
