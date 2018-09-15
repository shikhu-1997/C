#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,l,m;
	scanf("%d",&k);
	while(k--){
		char c[1000];
		int a[130]={0};
		int b[130]={0};
		scanf("%s",c);
		l=strlen(c);
		if(l%2==0)
			j=l/2;
		else
			j=(l/2);
		for(i=0;i<j;i++){
			a[c[i]]++;
			}
			if(l%2!=0)
			j=j+1;
		for(i=j;i<l;i++){
			b[c[i]]++;
			}
		m=0;
		for(i=97;i<123;i++){
			if(a[i]!=b[i]){
				m=1;
				break;}
				}
		if(m==1)
			printf("NO\n");
		else
			printf("YES\n");
			}
			}
