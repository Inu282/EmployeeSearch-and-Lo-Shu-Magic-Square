//gcc employeeMain.c EmployeeTable.c employeeOne.c
//gcc emplcdoyeeMain.c EmployeeTable.c employeeTwo.c
#include<string.h>
#include <stdlib.h>
#include "Employee.h"

int main (void){

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf ("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone (EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
        printf("Employee number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee number is NOT found in the record\n");


    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if (matchPtr != NULL)
        printf("Employee salary 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salry is NOT found in the record\n");
        
    return EXIT_SUCCESS;
}