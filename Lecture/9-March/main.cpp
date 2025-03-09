#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    const int id;     // Constant data member (unique for each employee)
    string fname;     // First name
    string lname;     // Last name
    static int count; // Static data member (shared across all objects)

public:
    // Constructor
    Employee(const string &first, const string &last, int emp_id) : fname(first), lname(last), id(emp_id)
    {
        ++count;
        cout << "Employee constructor for " << fname << " " << lname << " called." << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Destructor called for " << fname << " " << lname << endl;
        --count;
    }

    // Constant member functions (they do not modify the object)
    string getf_name() const { return fname; }
    string getl_name() const { return lname; }
    int get_id() const { return id; }

    // Static function to get employee count
    static int getcount() { return count; }
};

// Initialize static member
int Employee::count = 0;

int main()
{
    cout << "Number of employees before instantiation: " << Employee::getcount() << endl;

    { // Scope block to ensure destructors are called before final count print
        Employee e1("Ali", "Raza", 101);
        Employee e2("Arham", "Rana", 102);

        cout << "\nNumber of employees after instantiation: " << Employee::getcount() << endl;

        cout << "\nEmployee 1: " << e1.get_id() << " - " << e1.getf_name() << " " << e1.getl_name();
        cout << "\nEmployee 2: " << e2.get_id() << " - " << e2.getf_name() << " " << e2.getl_name() << endl;
    } // e1 and e2 go out of scope here, so destructors are called

    // Now, the count should be 0
    cout << "\nNumber of employees after destruction: " << Employee::getcount() << endl;

    return 0;
}