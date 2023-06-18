#include<iostream>
using namespace std;
void swap(int &a,int &b){
	//by including the keyword & after the name of datatype and before variable name we are able to change the values
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
//it was passing by reference : value does not get copied , the same value is used in function