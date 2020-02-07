#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct {
	uint32_t 	rollNumber;
	uint32_t 	semister;
	char  		DOB[11];
	char 		branch[50];
	char 		name[30];

}record_t;

void display_records();
void add_record();
void delete_record();
void display_options();

record_t students[11];
uint8_t studentsAdded;

int main()
{
	studentsAdded = 0;
	display_options();
	return 0;
}

void display_options()
{
	int option = 0;

	printf("Student record management program\n");
	printf("Display all records -> 1\n");
	printf("Add new record      -> 2\n");
	printf("Delete a record     -> 3\n");
	printf("Exit application    -> 0\n");
	printf("Enter your option here: ");
	scanf("%d", &option);

	switch(option)
	{
		case 1:
			display_records();
		case 2:
			add_record();
		case 3:
			delete_record();
		case 0:
			break;
	}
}

void display_records() {
	if(studentsAdded < 1)
	{
		printf("No records found\n");
	} else
	{
		for(int i = 0; i < studentsAdded; i++) {
			printf("**********************************\n");
			printf("rollNumber:			%u\n", students[i].rollNumber);
			printf("studentSemister: 	%u\n", students[i].semister);
			printf("studentDOB: 		%s\n", students[i].DOB);
			printf("studentBranch:		%s\n", students[i].branch);
			printf("studentName:		%s\n", students[i].name);
			printf("**********************************\n");
		}
	}
	display_options();
}

void add_record(){
	if(studentsAdded > 9)
	{
		printf("No more space to add the record");
	} else
	{
		record_t newStudent;
		int nD = 1;
		printf("Enter the rollNumber:			");
		scanf("%d", &newStudent.rollNumber);
		fflush(stdin);
		if(newStudent.rollNumber != 0)
		{
			for(int i = 0; i < studentsAdded; i++)
			{
				if(students[i].rollNumber == newStudent.rollNumber)
				{
					printf("Warning: this record already exists\n");
					nD = 0;
					break;
				}
			}
			if(nD)
			{
				printf("Enter the studentSemister:	");
				scanf("%d", &newStudent.semister);
				fflush(stdin);

				printf("Enter the DOB (mm/dd/yyyy):	");
				scanf("%[^\n]s", &newStudent.DOB);
				fflush(stdin);

				printf("Enter the studentBranch:	");
				scanf("%[^\n]s", &newStudent.branch);
				fflush(stdin);

				printf("Enter the studentName:		");
				scanf("%[^\n]s", &newStudent.name);
				fflush(stdin);

				for(int i = 0; i < 10; i++)
				{
					if(students[i].rollNumber == 0)
					{
						students[i] = newStudent;
						studentsAdded++;
						printf("Recorded added successfully\n");
						break;
					}
				}
			}
		} else
		{
			printf("Invalid roll number!\n");
		}

	}
	display_options();
}

void delete_record()
{
	if(studentsAdded < 1)
	{
		printf("No records exist\n");

	} else {
		uint32_t rN = 0;
		printf("Enter the rollNumber: ");
		scanf("%u", &rN);
		if(rN < 1)
		{
			printf("Invalid rollNumber\n");
		} else
		{
			int dS = 0;
			for(int i = 0; i < 10; i++) {
				if(students[i].rollNumber == rN)
				{
					memset(&students[i], 0, sizeof(record_t));
					dS = 1;
					studentsAdded--;
				}
			}
			if(dS){
				printf("Successfully deleted student record\n");
			} else {
				printf("Student record doesn't exist\n");
			}
		}
	}
	display_options();
}

