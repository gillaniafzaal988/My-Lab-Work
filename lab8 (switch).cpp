#include<iostream>
using namespace std;
int main()/*
{
	int electronics,clothing,gloceries;
    int	jacket,Tshirt,jean,milk,bread,egg,item,num;
    double total,price,discount,subtotal;
	int laptop,smartphone,headphone;
	cout<<"enter electronics(1),clothing(5),gloceries(9):";
	cin>>item;

	switch(item){
		case 1:
			cout<<"choose laptop(2),smartphone(3),headphone(4):";
			cin>>electronics;
	        switch (electronics){
	        	case 2:
	        		price=1000;	
	        		break;
	        	case 3:
	        	    price=700;
	        	    break;
	        	case 4:
	        	    price=150;
					break; 
	      	}
	      	break;
	    case 5:
		  	cout<<"choose,jacket(6),T-shirt(7),jean(8) :";
		  	cin>>clothing;
		  	switch(clothing){
		  		case 6:
		  			price=120;
		  			break;
		  	    case 7:
				  	price=40;
				  	break;
				case 8:
				  	price=60;
				  	break;
			  }
			  break;
	    case 9:
		    cout<<"choose milk(10),bread(11),egg(12) :";
		    cin>>gloceries;
		    switch(gloceries){
		    	case 10:
		    		price=2;
		    		break;
		    	case 11:
					price=3;
					break;
				case 12:
					price=5;
					break;
			}
			    break;
		}
	cout<<"numbers of quantity:";
	cin>>num;
	total=price*num;		
	cout<<"total:"<<total;
	if (total<100){
			discount=0;
			subtotal=total-0;
		}
	else if(total>=100 && total<=500){
		discount=50;
		subtotal=total-50;
		cout<<subtotal;
	}
	else
	{
		discount=100;
		subtotal=total-100;
	}
	cout<<"\nsubtotal :"<<subtotal;
	}
*/		
/*	{
		int amount,exchange;
		double currencyconverted;
		cout<<"enter amount in usd:";
		cin>>amount;
		cout<<"the exchange you want 1 for euros 2 for pkr 3 for in INR:"<<endl;
		cin>>exchange;
		switch(exchange){
			case 1:
			currencyconverted=amount*0.83;	
				cout<<"the amount is:"<<currencyconverted;
			break;
			case 2:
			currencyconverted=280*amount;
			   cout<<"the amount is:"<<currencyconverted;
			break;
			case 3:
			currencyconverted=83*amount;
			   cout<<"tne amount is :"<<currencyconverted;   
		}
		
		
	}*/
	//************************************simple calculator******************************************************//
	/*
	{
		double no1,no2;
		char op;
		cin>>no1>>no2;
		cin>>op;
		switch(op){
			case '+':
				cout<<"the sum of "<<no1<<","<<no2<<" is "<<no1+no2;
				break;
			case '-':
				cout<<"the difference of "<<no1<<","<<no2<<" is "<<no1-no2;
				break;
			case '*':
				cout<<"the multiplication of "<<no1<<","<<no2<<" is "<<no1*no2;
				break;
			case '/':
				cout<<"the division of "<<no1<<","<<no2<<" is "<<no1/no2;
				break;
			default :
				cout<<"Invalid input";
				break;
		}
		
	}
	*/
	//**************************************** day with number ***********************************//
/*	
	{
		int dayNumber;
		cin>>dayNumber;
		switch(dayNumber){
			case 1:
				cout<<"The day is Monday";
				break;
			case 2:
				cout<<"The day is Tuesday";
				break;
			case 3:
				cout<<"The day is Wednesday";
				break;
			case 4:
				cout<<"The day is Thursday";
				break;
			case 5:
				cout<<"The day is Friday";
				break;
			case 6:
				cout<<"The day is Saturday";
				break;
			case 7:
				cout<<"The day is Sunday";
				break;
			default :
				cout<<"Invlid input";
				break;
			
		}
	}*/
	//*******************************Area of different shape******************************//
	{
		int choice;
		double area;
		cout<<"1.circle\n2.rectangle\n3.triangle"<<endl;
		cin>>choice;
		switch(choice){
			case 1: 
			double radius;
			cout<<"enter radius:";
			cin>>radius;
			area=3.14*(radius*radius);
			cout<<"Area is:"<<area;
			break;
			case 2:
			double length,width;
			cout<<"enter length,width:";
			cin>>length>>width;
			area=length*width;
			cout<<"Area is:"<<area;
			break;
			case 3:
			double base,height;
			cout<<"enter base,height:";
			cin>>base>>height;
			area=0.5*base*height;
			cout<<"Area is:"<<area;
			break;
			default:
			cout<<"invalid choice";	
			break;
			
		}
	}
	

