#include<iostream>
using namespace std;
int main(){
	int numberOfProblems,answer=0,x,y,z;
	cin>>numberOfProblems;
	for(int i=0;i<numberOfProblems;i++){
		cin>>x>>y>>z;
		answer+=((x+y+z)>=2);
		
	}
	cout<<answer;
}
