#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assign5.h"

void create(COURSE* tempCourse, FILE* readFile)
{
    COURSE* dummyCourse = tempCourse;

    if(fseek(readFile, tempCourse.padding * sizeof(COURSE), SEEK_SET) == 0)
    {
        if(fread(&dummyCourse, sizeof(COURSE), 1L, readFile) == 1)
        {
            printf("ERROR: course already exists.\n\n");
        }
        else
        {
            fseek(readFile, tempCourse.padding * sizeof(COURSE), SEEK_SET);
            fwrite(&tempCourse, sizeof(COURSE), 1L, readFile);
        }
    }
}

void read(int tCNum, FILE* fp, COURSE* tCourse)
{
    if(fseek(fp, tCNum * sizeof(COURSE), SEEK_SET) == 0)
    {
        if(fread(&tCourse, sizeof(COURSE), 1L, fp) == 1)
        {
            printf("Course number: %d\nCourse name: %s\nScheduled days: %s\nCredit hours: %d\nEnrolled Students: %d\n\n", tCNum, tCourse.course_Name, tCourse.course_Sched, tCourse.course_Hours, tCourse.course_Size);
        }
        else
        {
            printf("ERROR: course not found.");
        }
    }
}

void update(FILE* fp, COURSE* tCourse)
{
    COURSE* dummmyCourse = tCourse;

    if(fseek(fp, tCourse.padding * sizeof(COURSE), SEEK_SET) == 0)
    {
        if(fread(&dummyCourse, sizeof(COURSE), 1L, fp) != 1)
        {
            printf("ERROR: course not found.\n\n");
        }
        else
        {
            fseek(fp, tCourse.padding * sizeof(COURSE), SEEK_SET);
            fwrite(&tCourse, sizeof(COURSE), 1L, fp);
        }
    }
}

void delete(FILE* fp, COURSE* tCourse)
{
    if(fseek(fp, tCourse.padding * sizeof(COURSE), SEEK_SET) == 0)
    {
        if(fread(&tCourse, sizeof(COURSE), 1L, fp) == 1)
        {
            tCourse.course_Hours = 0;
            fseek(fp, tCourse.padding * sizeof(COURSE), SEEK_SET);
            fwrite(&tCourse, sizeof(COURSE), 1L, fp);
            printf("course number was successfully deleted.");
        }
        else
        {
            printf("ERROR: course not found.");
        }
    }
}

int main(int argc, char *argv[])
{
    FILE* inFile = NULL;
    int quitCondition = 0;
    char buffer[1024];
    char tempChar;
    int tempCourseNum = 0;
    COURSE* newCourse;

    inFile = fopen("courses.dat", "rb+");

    if(inFile == NULL)
    {
        printf("ERROR: Could not open file.");
        return -1;
    }

    while(quitCondition == 0)
    {
        printf("Enter one of the following actions or press CTRL-D to exit.\nC - create a new course record\nU - update an existing course record\nR - read an existing course record\nD - delete an existing course record\n");

        scanf(" %c", &tempChar);

        switch(tempChar)
        {
            case 'C':
            case 'c':
            printf("Enter course number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.padding);
            printf("Enter course name: ");
            fgets(buffer, 1024, stdin);
            strncpy(newCourse.course_Name, buffer, 80);
            printf("Enter course schedule: ");
            fgets(buffer, 1024, stdin);
            strncpy(newCourse.course_Sched, buffer, 4);
            printf("Enter course credit hours: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.course_Hours);
            printf("Enter course enrollment number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.course_Size);
            create(newCourse, inFile);
            break;

            case 'R':
            case 'r':
            printf("Enter a CS course number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &tempCourseNum);
            read(tempCourseNum, inFile, newCourse);
            break;

            case 'U':
            case 'u':
            printf("Enter course number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.padding);
            printf("Enter course name: ");
            fgets(buffer, 1024, stdin);
            strncpy(newCourse.course_Name, buffer, 80);
            printf("Enter course schedule: ");
            fgets(buffer, 1024, stdin);
            strncpy(newCourse.course_Sched, buffer, 4);
            printf("Enter course credit hours: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.course_Hours);
            printf("Enter course enrollment number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.course_Size);
            update(inFile, newCourse);
            break;

            case 'D':
            case 'd':
            printf("Enter a course number: ");
            fgets(buffer, 1024, stdin);
            sscanf(buffer, "%d", &newCourse.padding);
            delete(inFile, newCourse);
            break;

            default:
            printf("Invalid char");
            break;
        }
    }

    fclose(inFile);

    return 0;
}

