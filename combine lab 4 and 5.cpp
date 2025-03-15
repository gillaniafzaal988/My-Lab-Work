#include<iostream>
#include<iomanip>
using namespace std;
int main()
 
//**************************************************Lab 04**************************************************// 
{
int x;
cout<<"Enter the no: ";
cin>>x;
(x%2==0) ? cout<<"the number "<<x<<" is even" : cout<<"the number "<<x<<" is odd";
return 0;

//program2
/*
int age;
cout<<"Enter the Age:";
cin>>age;
(age<13) ? cout<<"Age "<<age<<" falls under the category: Child" : 
(13<=age) && (age<=19) ? cout<<"Age "<<age<<" falls under the category: Teenager" :
 cout<<"Age "<<age<<" falls under the category: Adult"<<endl;
 */
 //program3
/*
 int balance;
  cout<<"Banking app"<<endl;
  cout<<"-------------"<<endl;
  cout<<"Enter the balance:$";
  cin>>balance;
  (balance<100) ? cout<<"Low Balance account" :
  (balance>=100) && (balance<=500) ? cout<<"Standard Account" :cout<<"Premium Account"<<endl;
  bool loyality=true;
  cout<<"\nput 1 for loyal and 0 for not loyal only:"<<endl;
  cout<<"loyal or not:";
  cin>>loyality;
  (balance>=200 && loyality==1) ? cout<<"you are egligeble for special offer" :
   (loyality==0) || (balance<200)? cout<<"you are not egligeble for special offer" :
   cout<<" invalid input "<<endl;
*/
//*****************************************************************Lab 05******************************//
//program4
 /*
  int salary,bonus,service,grosssalary,tax,netsalary;
  char grade;
  cout<<"enter the grade:"<<endl;
  cin>>grade;
   cout<<"enter your service experience:"<<endl;
  cin>>service; 
  
  if (grade=='A')
 {
  salary=50000;
  cout<<"your salary is:$"<<salary<<endl;
  }
   if (grade=='B')
{
   salary=30000;
   cout<<"your salary is:$"<<salary<<endl;
   
 }
 if (grade=='C')
 {
 salary=20000;
  cout<<"your salary is:$"<<salary<<endl;
  }
  if(service>=10)
  { bonus=(salary/100)*10;
  cout<<"you will receive 10% bonus";
  };
  if(service>=5 && service<=9)
  {bonus=(salary/100)*5;
  cout<<"you will receive 5% bonus";
  	
  }
  if(service<5)
  {bonus=0;
  cout<<" no bunuse for you";
  
  }
  grosssalary=salary+bonus;
  if(grosssalary>40000)
  {tax=grosssalary/100*20;
  cout<<"\nyour tax is 20%";
  }
  if(grosssalary<=40000 && grosssalary>=30000)
  {tax=grosssalary/100*10;
  cout<<"\nyour tax is 10%";
  }
  if(grosssalary<30000)
  {tax=0;
  cout<<"\nyour tax is not";
  }
  netsalary=grosssalary-tax;
  cout<<"\n _______________________"<<endl;
  cout<<"|                       |"<<endl;
  cout<<"|Net salary is:"<<netsalary<<"    |"<<endl;
  cout<<"|_______________________|";
 */
//program5 loan
/*
int salary,experience;
cout<<"enter the salary:";
cin>>salary;
cout<<"enter the experience:";
cin>>experience;

if(salary>=25000 ||(salary>=20000   && experience>=5))

{
cout<<"you are eligible"<<endl;
}

else 
{
cout<<"you are not eligible"<<endl;}

  return 0;
*/
//********************program6 (withdrawalusing if else)
/*
int balance,amount,remainbalance;

cout<<"enter the account balance:";
cin>>balance;
cout<<"enter withdrawal amount:";
cin>>amount;
remainbalance=balance-amount;
if(balance>=amount) 
{
	cout<<"remaining balance is:"<<remainbalance<<endl;	
}
else {
cout<<"Insufficient balance";
}
*/

}
	
	
	

