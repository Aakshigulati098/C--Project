#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct patient
{
	int ID;
	char name[30];
	int age;
	int cont;
	float bill;
};

void addPatient(struct patient *p, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		p[i].ID = i + 1;
		printf("\nEnter patient name: ");
		scanf("%s", &p[i].name);
		printf("\nEnter patient age: ");
		scanf("%d", &p[i].age);
		printf("\nEnter Contact Number of patient: ");
		scanf("%d", &p[i].cont);
		printf("\nEnter patient bill amount: ");
		scanf("%f", &p[i].bill);
	}
}

void showPatient(struct patient *p, int size)
{
	int i;
	printf("\nID\tName\tAge\tContact\tBill\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t%s\t%d\t%d\t%.2f\n",
			   p[i].ID, p[i].name, p[i].age, p[i].cont, p[i].bill);
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
