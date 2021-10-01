//gcc employeeMain.c EmployeeTable.c employeeOne.c
//gcc employeeMain.c EmployeeTable.c employeeTwo.c
#include <string.h>
#include <stdlib.h>
#include "Employee.h"

int main(void)
{

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); //example of record not found

    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 101); //example of record found

    if (matchPtr != NULL)
        printf("Employee ID 101 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); //example of record found
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Bob Jones"); //example of record NOT found
    if (matchPtr != NULL)
        printf("Employee Bob Jones is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Bob Jones is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235"); //example of record found
    if (matchPtr != NULL)
        printf("Employee number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee number is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "818-909-4232"); //example of record NOT found
    if (matchPtr != NULL)
        printf("Employee number 818-909-4232 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee number is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34); // example of record found
    if (matchPtr != NULL)
        printf("Employee salary 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.20); // example of record NOT found
    if (matchPtr != NULL)
        printf("Employee salary 4.20 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary is NOT found in the record\n");
    return EXIT_SUCCESS;
}