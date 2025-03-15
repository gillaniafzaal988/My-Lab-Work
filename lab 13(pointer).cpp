#include <iostream>
using namespace std;

//*******************************************dereferencing operator*****************************************//
/*
int main(){
	int a=12;
	int *b=&a;
	cout<<"the value is b:"<<*b;
	return 0;

}*/
//***********************************************modifying value**********************************************//
/*
int main(){
	int x=9;
	int *y=&x;
	*y=20;
	cout<<"the new value is "<<x;
	
}*/
//*********************************************displaying each value**************************************//
/*
int main(){
	int t[3]={1,2,3};
	int* u=t;
	for(int i=0; i<3; i++){
		cout<<u<<endl;
		cout<<*u<<endl;
		u++;
	}
}*/
//***********************************************swapping*************************************************//
/*
void swap( int *a, int *b){	
int temp;
	temp=*b;
	*b=*a;
	*a=temp;
	
}
int main(){
	int a=10;
	int b=20;
	cout<<a<<endl;
	cout<<b<<endl;
	swap(&a,&b);
	cout<<"After swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
	return 0;
	
}*/
//************************************************Null pointer*****************************************//
/*
int main(){
	int *y=NULL;
	if(y==NULL){
		cout<<"Error";
	}	
	
}*/
//*******************declaring void pointer and assingning address of integer vlaue******************//
/*
int main(){
	int num=10;
	string name="afzaal";
	void* ptr1;
	void* ptr2;
	ptr1=&num;
	ptr2=&name;
	
	cout<<*(int *)ptr1<<endl;
	cout<<*(string *)ptr2<<endl;
	
return 0;	
}*/
