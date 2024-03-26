// employee payment method and their details
//this program includes the details about the employee payment and their id and hourly rated and how many hours they work

#include <stdio.h>

#define MAX_EMPLOYEES 10

void inputEmployeeDetails(char names[][50], int hoursWorked[], float hourlyRate[], int numEmployees);
void calculateTotalPayment(int hoursWorked[], float hourlyRate[], float totalPayment[], int numEmployees);
void displayPaymentDetails(char names[][50], float totalPayment[], int numEmployees);

int main() {
    char names[MAX_EMPLOYEES][50];
    int hoursWorked[MAX_EMPLOYEES];
    float hourlyRate[MAX_EMPLOYEES];
    float totalPayment[MAX_EMPLOYEES];
    int numEmployees;

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Input employee details
    inputEmployeeDetails(names, hoursWorked, hourlyRate, numEmployees);

    // Calculate total payment for each employee
    calculateTotalPayment(hoursWorked, hourlyRate, totalPayment, numEmployees);

    // Display payment details for each employee
    displayPaymentDetails(names, totalPayment, numEmployees);

    return 0;
}

void inputEmployeeDetails(char names[][50], int hoursWorked[], float hourlyRate[], int numEmployees)
{

}

void calculateTotalPayment(int hoursWorked[], float hourlyRate[], float totalPayment[], int numEmployees)
{

}

void displayPaymentDetails(char names[][50], float totalPayment[], int numEmployees)
 {

}

