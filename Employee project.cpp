#include<iostream>
using namespace std;

struct employee {
    int id;
    string name;
    float salary;

    void input() {
        cout<<"enter Id:";
        cin>>id;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter salary:";
        cin>>salary;
    }

    void output() {
        cout<<"\n===========================================";
        cout<<"\n| ID:"<<id<<" | Name:"<<name<<" | Salary:"<<salary<<" |";
        cout<<"\n===========================================";
    }

    void searchupdate(employee* em, int size) {
        int searchid;
        cout<<"Enter the Id you want to update:";
        cin>>searchid;
        for (int i=0; i!=size; i++) {
            if (searchid==(em+i)->id) {
                cout<<"\nUpdating Employee ID:"<<searchid;
                (em+i)->input();
                return;
            }
        }
        cout<<"\nEmployee not found!";
    }

    void deleteemployee(employee* em, int& size) {
        int deleteid;
        cout<<"Enter ID you want to delete:";
        cin>>deleteid;
        for (int i=0; i<size; i++) {
            if ((em+i)->id==deleteid) {
                for (int j=i; j<size-1; j++) {
                    *(em+j)=*(em+j+1);
                }
                size--;
                cout<<"\nEmployee deleted successfully!";
                return;
            }
        }
        cout<<"\nEmployee not found!";
    }

    void sort(employee* em, int size) {
        for (int i=0; i!=size-1; i++) {
            for (int j=i+1; j!=size; j++) {
                if ((em+i)->salary<(em+j)->salary) {
                    employee temp=*(em+i);
                    *(em+i)=*(em+j);
                    *(em+j)=temp;
                }
            }
        }
        cout<<"\nEmployees sorted by salary(highest to lowest).";
    }

    void search(employee* em, int size) {
        int searchid;
        cout<<"Enter the Id you want to search:";
        cin>>searchid;
        for (int i=0; i!=size; i++) {
            if (searchid==(em+i)->id) {
                cout<<"\nEmployee Found!";
                (em+i)->output();
                return;
            }
        }
        cout<<"\nEmployee not found!";
    }

    void totalSalary(employee* em, int size) {
        float total=0;
        for (int i=0; i<size; i++) {
            total+=(em+i)->salary;
        }
        cout<<"\nTotal Salary:"<<total;
    }

    void highestLowestSalary(employee* em, int size) {
        if (size==0) {
            cout<<"\nNo employees available.";
            return;
        }
        employee* highest=em;
        employee* lowest=em;
        for (int i=1; i<size; i++) {
            if ((em+i)->salary>highest->salary) highest=(em+i);
            if ((em+i)->salary<lowest->salary) lowest=(em+i);
        }
        cout<<"\nEmployee with Highest Salary:";
        highest->output();
        cout<<"\nEmployee with Lowest Salary:";
        lowest->output();
    }
};

void displayEmployees(employee* em, int size) {
    if (size==0) {
        cout<<"\nNo employees available!";
        return;
    }
    cout<<"\n====================================================";
    cout<<"\n|ID|Name|Salary|";
    cout<<"\n====================================================";
    for (int i=0; i<size; i++) {
        cout<<"\n|"<<em[i].id<<"|"<<em[i].name<<"|"<<em[i].salary<<"|";
    }
    cout<<"\n====================================================";
}

int main() {
    int size;
    cout<<"no of employees:";
    cin>>size;
    employee* em=new employee[size];

    for (int i=0; i!=size; i++) {
        (em+i)->input();
    }

    int choice;
    do {
        cout<<"\n===================================================";
        cout<<"\nEmployee Management System";
        cout<<"\n===================================================";
        cout<<"\n1.Update Employee";
        cout<<"\n2.Delete Employee";
        cout<<"\n3.Sort Employees";
        cout<<"\n4.Search Employee";
        cout<<"\n5.Total Salary";
        cout<<"\n6.Highest/Lowest Salary";
        cout<<"\n7.Add Employee";
        cout<<"\n8.Display All Employees";
        cout<<"\n9.Exit";
        cout<<"\n===================================================";
        cout<<"\nEnter the choice:";
        cin>>choice;

        if (choice==1) {
            (em+0)->searchupdate(em, size);
            displayEmployees(em, size);
        } else if (choice==2) {
            (em+0)->deleteemployee(em, size);
            displayEmployees(em, size);
        } else if (choice==3) {
            em->sort(em, size);
            displayEmployees(em, size);
        } else if (choice==4) {
            em->search(em, size);
        } else if (choice==5) {
            em->totalSalary(em, size);
        } else if (choice==6) {
            em->highestLowestSalary(em, size);
        } else if (choice==7) {
            employee* newEm=new employee[size+1];
            for (int i=0; i<size; i++) {
                newEm[i]=em[i];
            }
            newEm[size].input();
            delete[] em;
            em=newEm;
            size++;
            cout<<"\nNew employee added successfully!";
        } else if (choice==8) {
            displayEmployees(em, size);
        } else if (choice==9) {
            delete[] em;
            cout<<"\nExiting program...";
            return 0;
        } else {
            cout<<"\nInvalid choice! Try again.";
        }

    } while (choice!=9);

    return 0;
}

