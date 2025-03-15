#include<iostream>
using namespace std;
int main()
//************************************************task 01***************************************//
/*
{

int arr[5]={1,2,3,4,5}; 
for (int i=0; i<5; i++){
	cout<<arr[i]<<endl;
}	
}*/
//******************************************task 02******************************************//
/*
{
	int a,b,c,d,e;
	cout<<"Enter five no:";
	cin>>a>>b>>c>>d>>e;
	int arr[5]={a,b,c,d,e};
	cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;
	for(int i=4; i>=0; i--){
		cout<<arr[i]<<endl;
	}
 }*/
 //*********************************task 03****************************//
 /*
 {
 	int sum=0,length,average;
 	int arr[5]={1,2,3,4,5}; 
for (int i=0; i<5; i++){
	sum+=arr[i];
	average=sum/5;
 }
 cout<<sum<<endl;
 cout<<"the average is:"<<average;
}*/
//**********************************task 04***********************//
/*
{
int arrlength,arrsize;
int array[5]={1,2,3,4,5};
arrlength=sizeof(array)/sizeof(array[0]);
arrsize=sizeof(array);
cout<<arrlength<<endl;
cout<<arrsize;


}*/
//**************************task 05***********************//
/*
{
	int length,largest,i;
	cout<<"length:";
	cin>>length;
	int array[length];
	cout<<"enter array:";
	for(i=0; i<length; i++){
		cin>>array[i];
		
	}
	largest=array[0];
	for(i=0; i<length; i++){
		if(array[i]>largest){
			largest=array[i];
		}
	}
	
cout<<"largest is:"<<largest;	
}
*/

	
