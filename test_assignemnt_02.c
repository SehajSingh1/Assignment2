#include <stdio.h>
#include <stdbool.h>

struct Employee {
	int id;
	char name[50];
	char gender[20];
	char ethinicity[50];
	float salary;
};

struct Employee* employees[] = {};
int emp_id_del = 0;
bool delete_flag = true;
int a = 1;
int* num_employees = &a;
bool gender_ethnicity_flag = true;



void deleteEmployee(struct Employee* employees[], int* num_employees);


void deleteEmployee(struct Employee* employees[], int* num_employees) {

	do { 
		
		printf("Hey whats the employee id of the emplolyee u want to delete out of the database? ");
		printf("Or enter 0 to exit out this option and get back to the main menu: ");
		scanf("%d", &emp_id_del);

	
		for (int i = 0; i < *num_employees; i++) {
			if (employees[i].id == emp_id_del) {
				for (int j = 0; j < *num_employees; j++) {
					employees[j]->id = employees[j + 1]->id;
				}
				*num_employees-= 1;
				delete_flag = false;
				break;
			}
			else if (emp_id_del = 0) {
				delete_flag = false;
				break;
			}
			else {
				printf("Hey that employee id wasnt in the database try again (or hit 0 if you want out of this option)!: ");
				while (getchar() != '\n');
				break;
			}
		}
	} while (delete_flag);
}
int main() {

	//struct Employee {
	//	int id;
	//	char name[50];
	//	char gender[20];
	//	char ethinicity[50];
	//	float salary;
	//};
	
	struct Employee employee;
	int emp_id_del = 0;
	//bool delete_flag = true;
    int a = 0;
	int* num_employees = &a;
	//bool gender_ethnicity_flag = true;

	//void deleteEmployee(struct Employee *employees[], int* num_employees);

	deleteEmployee(employee.id, *num_employees);
	return 0;

}