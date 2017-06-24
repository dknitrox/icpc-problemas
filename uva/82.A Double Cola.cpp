#include <iostream>
#include <string>
#include <math.h>
#include<vector>
using namespace std;
long long int nums[30];

int main() {	
vector<string> users;
users.push_back("Sheldon");
users.push_back("Leonard");
users.push_back("Penny");
users.push_back("Rajesh");
users.push_back("Howard");

	for(int i=0;i<30;i++){
		nums[i]=pow(2,i)-1;
	}
	float n;
	cin>>n;
	int index=0;

	for(int i=0;i<30;i++){
	 if(n<nums[i]*5 or nums[i]*5==n){
			index=i;
			break;
	  }
	}
	
	float res2;
	res2=(n-nums[index-1]*5)/pow(2,index-1);
	if(res2==5 or res2==4 or res2==3 or res2==2 or res2==1)cout<<users[res2-1]<<endl;
	else cout<<users[res2]<<endl;
	return 0;
}