#include <stdio.h>

//Defined a "Employee" struct
struct Employee {
    int EmployeeId;
    char Name[50];
    char Gender[50];
    char Ethnicity[50];
    float salary;
};

void addNewEmployee(struct Employee *employees_value, int num_employee) {
    //Add a new employee- Implement a function to input employee data into an array of ‘Employee’ structures.
    //Asked Employee Name
    printf("Enter Employee Name: ");
    scanf("%s", employees_value->Name);
    //Asked Employee ID
    printf("Enter Employee ID: ");
    scanf("%d", &employees_value->EmployeeId);
    //Asked Employee Gender
    printf("Enter Employee Gender: ");
    scanf("%s", employees_value->Gender);
    //Asked Employee Ethnicity
    printf("Enter Employee Ethnicity: ");
    scanf("%s", employees_value->Ethnicity);
    //Asked Employee Salary
    printf("Enter Employee Salary: ");
    scanf("%f", &employees_value->salary);    
    
    employees_value++;
}

void displayEmployee(struct Employee *employees_value, int num_employee) {
    //Display employees- This can be based on gender and/or ethnicity or all employees in the company
    for(int i=0; i< num_employee; i++) {
        printf("Name: %s\n", employees_value->Name); // Access the array correctly
        printf("ID: %d\n", employees_value->EmployeeId);
        printf("Gender: %s\n", employees_value->Gender);
        printf("Ethnicity: %s\n", employees_value->Ethnicity);
        printf("Salary: %.2f\n", employees_value->salary);
        
        printf("\n");
        
    } 
}   

void searchEmployeeByID(struct Employee *employees_value, int num_employee) {
    //Searches for an employee by ID and displays their details if found.
    int success = 0;
    int user_input;
    printf("\nPlease enter employee ID: ");
    scanf("%d", &user_input);

    for(int i=0; i < num_employee ; i++) {
            if(user_input == employees_value->EmployeeId) 
            {    printf("\nId found = %d", user_input);
                 printf("\nName: %s\n", employees_value->Name);
                 printf("ID: %d\n", employees_value->EmployeeId);

                    success = 1;
                    break;
            }
            employees_value++;
        }
         if (success == 0) {
            printf("\nId Not found! ");
        } else {
            printf("Invalid---------------------");
        }
}


int main() {
    struct Employee read_employees[20];
    int num_of_employee = 0;
    int menu;
    //Menu Options
    do
    {   
        //Menu
        printf("\nMenu: \n1. Add a new employee \n2. Delete an employee \n3. Display Employees \n4.Search Employees by ID \n5. Calculate Average Salaries Based on Gender or Ethnicity \n6. Diplsay Comparision Results \n0. Exit");
        printf("\nPlease choose one option: ");
        scanf("%d", &menu);
        
        if (menu == 1) {
           // Add a new employee
           if (num_of_employee < 20) { // Check if there's space in the array
               addNewEmployee(read_employees, num_of_employee);
               num_of_employee++; // Increase the employee count
           } else {
               printf("Employee list is full!\n");
           }
        }   
        else if(menu == 2) {
         
        }
        else if(menu == 3) {
            displayEmployee(read_employees, num_of_employee);
        }
        else if(menu == 4) {
             searchEmployeeByID(read_employees, num_of_employee);
        }
        else if(menu == 5) {
             
        }
        else if(menu == 6) {
             
        }
    
    } while (menu != 0);

    return 0;
}