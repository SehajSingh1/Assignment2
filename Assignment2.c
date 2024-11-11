#include <stdio.h>

//Defined a "Employee" struct
struct Employee {
    int EmployeeId;
    char Name[50];
    char Gender[50];
    char Ethnicity[50];
    float salary;
};

void addNewEmployee(struct Employee *employees_value) {
    //Add a new employee- Implement a function to input employee data into an array of ‘Employee’ structures.
    printf("Enter employee name: ");
    scanf("%s", employees_value->Name);
    
}

int main() {
    struct Employee read_employees;
    int menu;
    //Menu Options
    do
    {   
        //Menu
        printf("\nMenu: \n1. Add a new employee \n2. Delete an employee \n3. Display Employees \n4.Search Employees by ID \n5. Calculate Average Salaries Based on Gender or Ethnicity \n6. Diplsay Comparision Results \n0. Exit");
        printf("\nPlease choose one option: ");
        scanf("%d", &menu);
        
        if (menu == 1) {
           addNewEmployee(&read_employees);
        }   
        else if(menu == 2) {
         
        }
        else if(menu == 3) {
            
        }
        else if(menu == 4) {
             
        }
        else if(menu == 5) {
             
        }
        else if(menu == 6) {
             
        }
    
    } while (menu != 0);

    return 0;
}
