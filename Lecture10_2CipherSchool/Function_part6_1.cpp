#include<iostream>
using namespace std;
void swap(int a,int b){
	int c;
	 c=a;
	 a=b;
	 b=c;
	 cout<<"Values inside swap function are:"<<a<<" "<<b<<endl;
	 return;
}
int main(){
	int a , b ;
	a=3;
	b=4;
	swap(a,b);
	cout<<"Values after swapping outside the function are: "<<a<<" "<<b<<endl;

}
//it was passing parameters by value 