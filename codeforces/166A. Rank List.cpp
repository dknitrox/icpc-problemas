#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;
}
int main()
{

int n,k,a,b;
int x[100];
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>a>>b;
x[i]=a*100-b;

}
sort(x,x+n,cmp);
int cont=0;
int sol(x[k-1]);
for(int i=0;i<n;i++){
if(x[i]==sol){
cont++;
}

}
cout<<cont<<"\n";
    return 0;
}