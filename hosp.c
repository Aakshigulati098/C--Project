#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

struct patient 
{ 
	int ID; 
	char name[30]; 
	int age; 
	float bill; 
}; 

void addPatient(struct patient *p, int size) 
{ 
	int i; 
	for (i=0; i<size; i++) 
	{ 
		p[i].ID = i+1; 
		printf("\nEnter patient 's name: "); 
		scanf("%s", p[i].name); 
		printf("\nEnter patient 's age: "); 
		scanf("%d", &p[i].age); 
		printf("\nEnter patient 's bill amount: "); 
		scanf("%f", &p[i].bill); 
	} 
} 

void showPatient(struct patient *p, int size) 
{ 
	int i; 
	printf("\nID\tName\tAge\tBill\n"); 
	for (i=0; i<size; i++) 
	{ 
		printf("%d\t%s\t%d\t%.2f\n", 
			p[i].ID, p[i].name, p[i].age, p[i].bill); 
	} 
} 

int main() 
{ 
	struct patient p[100]; 
	int size, i; 
	printf("\nEnter the number of patients: "); 
	scanf("%d", &size); 

	addPatient(p, size); 
	showPatient(p, size); 

	return 0; 
}
