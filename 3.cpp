#include<iostream>
#include<iomanip>
using namespace std;

int LinearSearch(int array[],int size,int number){
	for(int i=0;i<size;i++){
		if(array[i]==number)
		return i;
	}
} 

int main(){
	int a[7]={3,5,7,2,4,8,6};
	int x,s;
	s=7;
	cin>>x;
	cout<<LinearSearch(a,s,x);
//	system("pause")
//	return 0;
} 
