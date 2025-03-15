#include<iostream>
#include<cmath>
using namespace std;
//*********************************************library function*****************************************//

int main()
{
	double a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Square root is:"<<sqrt(a)<<endl;
	cout<<"Square root is:"<<sqrt(b)<<endl;
	cout<<"Absolute value of a is:"<<abs(a)<<endl;
	cout<<"Absolute value of b is:"<<abs(b)<<endl;
	cout<<"value of cos of a is:"<<cos(a)<<endl;
	cout<<"value of cos of b is:"<<cos(b)<<endl;
	cout<<"value of sin of b is:"<<sin(a)<<endl;
	cout<<"value of sin of b is:"<<sin(b)<<endl;
	cout<<"Power is:"<<pow(a,b)<<endl;
	return 0;
}

//**********************************************************greet message******************************************//
/*
void Welcome(){
	cout<<"Hello! Welcome to C++ Function";
}
int main()
{
	Welcome();
	return 0;
			
}*/
//*********************************************************if else funtion**********************************************//
/*
int num(int no){
	if (no==0){
		cout<<"no is zero";
	}else if (no%2==0){
		cout<<"no is even";
	}else {
		cout<<"no is even";
	}
	
}


int main(){
	int a;
	cin>>a;
	num(a);
}*/
//******************************************************factorial***********************************************//
/*
void factorial(int a){
	int factorial=1;
	for(int i=0;i<a;a--){
		factorial=factorial*a;
	}
	cout<<factorial;
}
int main(){
	int n;
	cin>>n;
	factorial(n);
	return 0;
}*/
//***********************************************************menu-driven program calculator********************************************//
/*
double add(double a,double b){
	return a+b;
}
double sub(double a,double b){
	return a-b;
}
double mul(double a,double b){
	return a*b;
}
int div(double a,double b){
	return a/b;
}
 
int main(){
	double no1,no2;
	char op;
	cin>>op;
	cin>>no1>>no2;
	if(op=='+'){
	cout<<add(no1,no2);
	}else if(op=='-'){
	cout<<sub(no1,no2);
	}else if(op=='*'){
	cout<<mul(no1,no2);
	}else if(op=='/'){
	cout<<div(no1,no2);
	}else{
		cout<<"invalid";
	}
	}*/
	//**************************************************restarnant bill**********************************************//
/*	
void menu(){
	cout<<"\n1.pizza\n2.burger\n3.biryani\n4.BBQ\n5.Chicken karrahi"<<endl;
}
double cost(double a,double b){
	return a*b;
}
double finalBill(double total){
	double tax;
	tax=total*0.1;
	cout<<total+tax;
}
int main(){
		int choice,total=0,quantity;
	double price[]={20,30,45,50,55};
	do{
		if (choice>0 && choice<=5){
		menu();
		cin>>choice;
		cout<<"quantity:";
		cin>>quantity;
		total+=price[choice-1]*quantity;
		cout<<"total :"<<total<<endl;
	}else if(choice!=0)
	{cout<<"your choice is not valid! try again "<<endl;
	return 0;
	}
	}while(choice != 0);
	finalBill(total);
return 0;	
}*/
