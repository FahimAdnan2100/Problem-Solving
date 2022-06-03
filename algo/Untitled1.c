#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>



typedef struct{
	char couse_Name[80];
	char course_Sched[4];
	unsigned course_Hours;
	unsigned course_Size;
	unsigned padding;
} COURSE;



void main(){
	int coNumber;
	int search;
	char choice;
	char CName[80];
	char CSched[4];
	unsigned CHours;
	unsigned CSize;
	int C;
	FILE *fp;
	COURSE course;
	clrscr();
	fp= open("courses.dat", "wb+");
	printf("Enter one of the following actions or press CTRL-D to exit.\n");
	printf("C- create a new course record\n");
	printf("U- update an existing course record\n");
	printf("R- read an existing course record\n");
	printf("D- delete an existing course record\n");
	scanf("%c", &choice);


	if(choice == C){


		printf("create entry:\n");
		printf("enter course number\n");
		scanf("%d", &coNumber);
		printf("enter course name\n");
		scanf("%s", &CName);
		printf("enter course scedule\n");
		scanf("%s", &CSched);
		printf("enter course hours:\n");
		scanf("%d", &CHours);
		printf("enter course enrollment:\n");
		scanf("%s", &CSize);
		course.couse_Name = CName;
		course.course_Sched=CSched;
		couse.course_Hours=Chours;
		course.course_Size=CSize;
		fwrite(&INT,sizeof(int),1,CoNumber);
		fwrite(&COURSE,sizeof(COURSE),1,fp);
	}

	else if(choice == U){

		printf("update entry:\n");
		printf("enter course number\n");
		scanf("%d", &coNumber);

		printf("enter course name\n");
		scanf("%s", &CName);

		char[] search;
		printf("Enter a CS course number:\n");
		scanf("%d", &coNumber);
		while(fread(&fp, sizeof(COURSE), fp) ==1){
			fscanf(fp, "%s", CName);
			if(course.course_name ==CName){







		printf("enter course scedule\n");
		scanf("%s", &CSched);
		printf("enter course hours:\n");
		scanf("%d", &CHours);
		printf("enter course enrollment:\n);
		scanf("%s", &CSize);
		course.course_name = CName;
		course.course_Sched=CSched;
		couse.course_Hours=Chours;
		course.course_Size=CSize;
			}



	}

	else if(choice == R){
		char[] search;
		printf("Enter a CS course number:\n");
		scanf("%d", &coNumber);
		while(fread(&fp, sizeof(COURSE), fp) ==1){
			fscanf(fp, "%s", CName);
			if(course.course_name ==CName){
				printf("Course number: %d\n", &coNumber);
				printf("Course name: %s\n", course.course_name);
				printf("Scheduled days: %s\n" course.course_Sched);
				printf("Credit hours: %s" course.course_Hours);
				printf("Enrolled Students: %d" &course.course_Size);
			}
			else{
				printf("Error: entry not found"):
			}


		}



	}


	else if(choice == D){
		printf("Enter a CS course number:\n");
		scanf("%d", &coNumber);





	}
	else{
		printf("error: invalid choice \n");

	}

}
