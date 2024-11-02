#include <iostream>
#include <string>
using namespace std;


class EMPLOYEE {
protected:
    int empID;
    string empName;
    string department;

public:

    EMPLOYEE(int id, string name, string dept) : empID(id), empName(name), department(dept) {
        cout << "Employee Constructor Called\n";
    }

    void displayEmployeeDetails() const {
        cout << "Employee ID: " << empID << "\n";
        cout << "Employee Name: " << empName << "\n";
        cout << "Department: " << department << "\n";
    }
};


class SALARY : public EMPLOYEE {
private:
    double basicPay;
    double allowances;
    double deductions;

public:

    SALARY(int id, string name, string dept, double basic, double allowance, double deduction)
        : EMPLOYEE(id, name, dept), basicPay(basic), allowances(allowance), deductions(deduction) {
        cout << "Salary Constructor Called\n";
    }

    double calculateSalary() const {
        return basicPay + allowances - deductions;
    }

    void displaySalaryDetails() const {
        displayEmployeeDetails();
        cout << "Basic Pay: " << basicPay << "\n";
        cout << "Allowances: " << allowances << "\n";
        cout << "Deductions: " << deductions << "\n";
        cout << "Total Salary: " << calculateSalary() << "\n";
    }
};

int main() {
    SALARY faculty(101, "Kshitij", "Computer Science", 250000, 40000, 50000);

    cout << "\nFaculty Salary Details:\n";
    faculty.displaySalaryDetails();

    return 0;
}
