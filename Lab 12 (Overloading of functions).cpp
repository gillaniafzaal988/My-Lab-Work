#include<iostream>
using namespace std;
//**********************************************program 01*********************************************//
/*
int sum(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
int sum(int a, int b,int c){
	return a+b+c;
}
int mul(int a, int b,int c){
	return a*b*c;
}
int sub(int a, int b,int c){
	return a-b-c;
}
int div(int a, int b,int c){
	return a/b/c;
}
int main(){
	int x,y,z;
	cout<<"choose 0 for z if you are performing two operation"<<endl;
	cin>>x>>y>>z;
	cout<<"Choose your operation:"<<endl;
	char op;
	cin>>op;
	if(z==0){
	if(op=='+'){
		cout<<sum(x,y);
	}else if(op=='-'){
		cout<<sub(x,y);
	}else if(op=='*'){
		cout<<mul(x,y);
	}else if(op=='/'){
		cout<<div(x,y);
	}else{
		cout<<"invlaid choice!";
	}
		
	}
	else if(z!=0){
	if(op=='+'){
		cout<<sum(x,y,z);
	}else if(op=='-'){
		cout<<sub(x,y,z);
	}else if(op=='*'){
		cout<<mul(x,y,z);
	}else if(op=='/'){
		cout<<div(x,y,z);
	}else{
		cout<<"invlaid choice!";
	}
		
	}
	else {
		cout<<"Error!"<<endl;
	}
	
	return 0;
}
*/
//*****************************************swapping********************************************//
/*
double swap(double a, double b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int x,y;
	cout<<"enter x and y:";
	cin>>x>>y;
	cout<<"Before swapping:";
	cout<<x<<","<<y<<endl;
	swap(x,y);
	cout<<"After swapping:";
	cout<<x<<","<<y<<endl;
}*/
//***************************************************sum function********************************************//
/*
int sum(int a){
	if (a==0){
		return 0;
	}
	return a+sum(a-1);
}


int main(){
	int x;
	cout<<"enter value of X:";
	cin>>x;
	sum(x);
	cout<<sum(x);
}*/


