#include<iostream>
using namespace std;
/*
struct student{
	string Firstname; 
	string Lastname; 
	int rollno;
	double marks;
	void displayinfo(){
	cout<<Firstname<<endl;
	cout<<Lastname<<endl;
	cout<<"roll no:"<<rollno<<endl;
	cout<<"marks:"<<marks<<endl;
	}	
};
int main(){
	student s1;
	s1.Firstname="Afzaal";
	s1.Lastname="Gillani";
	s1.rollno=4;
	s1.marks=20;
	s1.displayinfo();
    return 0;	
}
*/
/*
struct student{
	string Firstname; 
	string Lastname; 
	int rollno;
	double marks;
	void displayinfo(){
	cout<<"Name is:";
	cout<<Firstname;
	cout<<" ";
	cout<<Lastname<<endl;
	cout<<"Roll no:";
	cout<<rollno<<endl;
	cout<<"marks:";
	cout<<marks<<endl;
	}	
};
int main(){
	int size;
	cout<<"enter no of the student:";
	cin>>size;
	student s1[size];
	for (int i=0; i!=size; i++){
		cout<<"enter your name:";
		cin>>s1[i].Firstname;
		cout<<"enter your Lastname:";
		cin>>s1[i].Lastname;
		cout<<"enter your Rollno:";
	    cin>>s1[i].rollno;
		cout<<"enter your marks:";
	    cin>>s1[i].marks;
	}
	for (int i=0; i!=size; i++){
	s1[i].displayinfo();
}
    return 0;	
}*/

struct student{
	string Firstname; 
	string Lastname; 
	int rollno;
	double marks;
	void displayinfo(){
	cout<<"Name is:";
	cout<<Firstname;
	cout<<" ";
	cout<<Lastname<<endl;
	cout<<"Roll no:";
	cout<<rollno<<endl;
	cout<<"marks:";
	cout<<marks<<endl;
	}	
};
int main(){
	int size;
	cout<<"enter size of the student:";
	cin>>size;
	student* s1=new student[size];
	for (int i=0; i!=size; i++){
		cout<<"enter your name:";
		cin>>(s1+i)->Firstname;
		cout<<"enter your Lastname:";
		cin>>(s1+i)->Lastname;
		cout<<"enter your Rollno:";
	    cin>>(s1+i)->rollno;
		cout<<"enter your marks:";
	    cin>>(s1+i)->marks;
	}
	for (int i=0; i!=size; i++){
	(s1+i)->displayinfo();
	cout<<endl;
}
    return 0;	
}





