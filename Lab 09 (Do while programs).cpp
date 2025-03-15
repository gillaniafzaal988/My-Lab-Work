#include<iostream>
using namespace std;
/*
int main(){
	
	int password;
	int actualpassword=12345;
	do{
		cout<<"enter password:";
		cin>>password;
	}
	while(password!=actualpassword)
	
;}*/
//program 02
int main(){
	int submenu,total,noofquantity,subtotal=0;
	char mainmenu;
	cout<<"\t\tb.Breakfast\tl.Lunch\td.Dinner\n";
	cin>>mainmenu;
	if(mainmenu=='b'){do{

		cout<<"\n1.Anda paratha(40)\t2.Nan channy(60)\t3.Siri Paye(150)\t4.Tea(15)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=40*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=60*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=150*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=15*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;}
		subtotal=total+subtotal;
		cout<<subtotal;	
		}while(submenu!=0);
		}
		else if(mainmenu=='l'){do{
		cout<<"\n1.Chicken karahi(1050)\t2.Mutton Karahi(1800)\t3.Egg Fried Rice(450)\t4.BBQ(1050)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1800*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=450*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;
		}
		subtotal=total+subtotal;
		cout<<subtotal;	
		}while(submenu!=0);
	}else if(mainmenu=='d'){do{
		cout<<"\n1.Chicken karahi(1050)\t2.Mutton Karahi(1800)\t3.Egg Fried Rice(450)\t4.BBQ(1050)\n5.Saji(800)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1800*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=450*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==5){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=800*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;
		}
		subtotal=total+subtotal;
		cout<<"subtotal"<<subtotal;	
	}while(submenu!=0);
	}
	
	

}


