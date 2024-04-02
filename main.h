#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


// Structure to represent an employee
struct Employee {
    char name[MAX_NAME_LENGTH];
    int hoursWorked;
    float hourlyRate;
    float basicSalary; // New member for basic salary
    float totalPayment;
    float pf; // Provident Fund
    float insurance;
    float extra;
};

// Function prototypes
void inputEmployeeDetails(struct Employee employees[], int numEmployees);
void calculateTotalPayment(struct Employee employees[], int numEmployees);
void displayPaymentDetails(struct Employee employees[], int numEmployees);
#endif
