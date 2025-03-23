#include<iostream>
using namespace std;
#include<windows.h>

void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

struct employee {
    static int idCounter;
    int id;
    string name;
    float salary;

  void input() {
    id=++idCounter;
    cout<<"\nEnter name: ";
    cin>>name;

    // Salary validation loop
    do {
        cout<<"Enter salary: ";
        cin>>salary;
        if (salary<0) {
            setConsoleColor(12);
            cout<<"Invalid salary! Salary cannot be negative. Please enter again.\n";
            setConsoleColor(7);
        }
    } while (salary<0);
}
    void output() {
        cout<<"\n===========================================";
        cout<<"\n|ID:"<<id<<"|Name:"<<name<<"|Salary:"<<salary<<"|";
        cout<<"\n===========================================";
    }
};

int employee::idCounter=0;

void addEmployee(employee* &em, int &size) {
    employee* newEm = new employee[size+1];
    for (int i=0; i<size; i++) {
        newEm[i]=em[i];
    }
    delete[] em;
    em=newEm;
    em[size].input();
    size++;
    setConsoleColor(10);
    cout<<"\nEmployee added successfully!";
    setConsoleColor(7);
}

void filterBySalaryRange(employee* em, int size) {
    float minSalary,maxSalary;
    cout<<"\nEnter minimum salary:";
	cin>>minSalary;
    cout<<"Enter maximum salary:";
	cin>>maxSalary;
    bool found = false;
    cout<<"\nEmployees with salary in range "<<minSalary<<" to "<<maxSalary<<":";
    for (int i = 0; i < size; i++) {
        if (em[i].salary >= minSalary && em[i].salary <= maxSalary) {
            em[i].output();
            found = true;
        }
    }
    if (!found) {
        setConsoleColor(12);
        cout<<"\nNo employees found in this salary range.";
        setConsoleColor(7);
    }
}

void searchUpdate(employee* em, int size) {
	  if (size==0) { // Check if list is empty
        setConsoleColor(12);
        cout<<"\nNo employees available!";
        setConsoleColor(7);
        return;
    }
    int searchid;
    cout<<"\nEnter the Id you want to update:";
	cin>>searchid;
    for (int i=0; i<size; i++) {
        if (searchid == em[i].id) {
            cout<<"\nUpdating Employee ID:"<<searchid;
            cout<<"\nEnter new name:";
			cin>>em[i].name;
          do {
            cout<<"Enter new salary: ";
            cin>>em[i].salary;
            if (em[i].salary<0) {
            setConsoleColor(12);
            cout << "Invalid salary! Salary cannot be negative. Please enter again.\n";
            setConsoleColor(7);
            }
            } while (em[i].salary<0);
            return;
        }
    }
    setConsoleColor(12);
    cout<<"\nEmployee not found!";
    setConsoleColor(7);
}

void deleteEmployee(employee* &em, int &size) {
    int deleteid;
    cout<<"\nEnter ID you want to delete: ";
    cin>>deleteid;

    for (int i=0; i<size; i++) {
        if (em[i].id==deleteid) {
            for (int j=i; j<size-1; j++) {
                em[j]=em[j + 1]; // Shift elements left
            }
            size--;

            // Allocate new array with reduced size
            employee* newEm=new employee[size];
            for (int k=0; k<size; k++) {
                newEm[k]=em[k];
            }
            delete[] em; // Free old memory
            em=newEm;  // Assign new memory

            setConsoleColor(10);
            cout<<"Employee deleted successfully!";
            setConsoleColor(7);
            return;
        }
    }
    setConsoleColor(12);
    cout<<"\nEmployee not found!";
    setConsoleColor(7);
}

void sortEmployees(employee* em, int size) {
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (em[i].salary<em[j].salary) {
                swap(em[i],em[j]);
            }
        }
    }
    setConsoleColor(9);
    cout<<"\nEmployees sorted by salary (highest to lowest).";
    setConsoleColor(7);
}

void searchEmployee(employee* em,int size) {
    int searchid;
    cout<<"\nEnter the Id you want to search:";
	cin>>searchid;
    for (int i=0; i<size; i++) {
        if (searchid==em[i].id) {
            setConsoleColor(10);
            cout<<"Employee Found!";
            em[i].output();
            setConsoleColor(7);
            return;
        }
    }
    setConsoleColor(12);
    cout<<"\nEmployee not found!";
    setConsoleColor(7);
}

void totalSalary(employee* em, int size) {
    float total=0;
    for (int i=0; i<size; i++) {
        total+=em[i].salary;
    }
    cout<<"\nTotal Salary:"<<total;
}

void highestLowestSalary(employee* em, int size) {
    if (size==0) {
        setConsoleColor(12);
        cout<<"\nNo employees available";
        setConsoleColor(7);
        return;
    }
    employee* highest=&em[0];
    employee* lowest=&em[0];
    for (int i=1; i<size; i++) {
        if (em[i].salary>highest->salary) highest = &em[i];
        if (em[i].salary<lowest->salary) lowest = &em[i];
    }
    setConsoleColor(11);
    cout<<"\nEmployee with Highest Salary:";highest->output();
    cout<<"\nEmployee with Lowest Salary:";lowest->output();
    setConsoleColor(7);
}

void displayEmployees(employee* em, int size) {
    if (size==0) {
        setConsoleColor(12);
        cout<<"\nNo employees available!";
        setConsoleColor(7);
        return;
    }
    setConsoleColor(14);
    cout<<"\n====================================================";
    cout<<"\n|ID|Name|Salary|";
    cout<<"\n====================================================";
    setConsoleColor(7);
    for (int i=0; i<size; i++) {
        cout<<"\n|"<<em[i].id<<"|"<<em[i].name<<"|"<<em[i].salary<<"|";
    }
    setConsoleColor(14);
    cout<<"\n====================================================";
    setConsoleColor(7);
}

bool loginSystem() {
    string username, password;
    setConsoleColor(10);
    cout<<"Enter Username:";
	cin>>username;
    cout<<"Enter Password:";
	cin>>password;
    setConsoleColor(10);
    return (username=="admin" && password=="1234");
}

int main() {
    if (!loginSystem()) {
        setConsoleColor(12);
        cout<<"\nInvalid login! Exiting...";
        setConsoleColor(7);
        return 0;
    }
    
    int size;
    cout<<"\nEnter number of employees:";
	cin>>size;
    employee* em=new employee[size];

    for (int i=0; i<size; i++) {
        cout<<"\nEnter details for Employee "<<(i+1)<<":";
        em[i].input();
    }

    cout<<"\nAll employees added successfully!";
    displayEmployees(em, size);

    int choice;
    do {
        cout<<"\n===================================================";
        setConsoleColor(14);
        cout<<"\nEmployee Management System";
        setConsoleColor(7);
        cout<<"\n===================================================";
        cout<<"\n1.Add Employee";
        cout<<"\n2.Update Employee";
        cout<<"\n3.Delete Employee";
        cout<<"\n4.Sort Employees";
        cout<<"\n5.Search Employee";
        cout<<"\n6.Total Salary";
        cout<<"\n7.Highest/Lowest Salary";
        cout<<"\n8.Filter Employees by Salary Range";
        cout<<"\n9.Display All Employees";
        cout<<"\n10.Exit";
        cout<<"\n===================================================";
        cout<<"\nEnter your choice:";cin>>choice;

        if (choice == 1) addEmployee(em, size);
        else if (choice == 2) searchUpdate(em, size);
        else if (choice == 3) deleteEmployee(em, size);
        else if (choice == 4) sortEmployees(em, size), displayEmployees(em, size);
        else if (choice == 5) searchEmployee(em, size);
        else if (choice == 6) totalSalary(em, size);
        else if (choice == 7) highestLowestSalary(em, size);
        else if (choice == 8) filterBySalaryRange(em, size);
        else if (choice == 9) displayEmployees(em, size);
        else if (choice == 10) { delete[] em;cout<<"\nExiting program..."; return 0; }
        else cout<<"\nInvalid choice! Try again.";
    } while (choice != 10);
    
    return 0;
}
