/* Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file. */

#include <stdio.h>

struct Student {
    char first_name[50];
    float marks;
    float cgpa;
    char course[30];
};

int main() {

    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        
        printf("Enter first Name: ");
        scanf(" %s", students[i].first_name); 
        
        printf("Enter Marks (out of 100): ");
        scanf("%f", &students[i].marks);
        
        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);
        
        printf("Enter Course: ");
        scanf(" %s", students[i].course);
    }

    FILE *ptr = fopen("students_table.txt", "w");

    if (ptr == NULL) {
        printf("can not open file\n");
        return 1;
    }

    fprintf(ptr, "+----------------------+----------+--------+------------------+\n");
    fprintf(ptr, "| %-20s | %-8s | %-6s | %-16s |\n", "Name", "Marks", "CGPA", "Course");
    fprintf(ptr, "+----------------------+----------+--------+------------------+\n");

    for (int i = 0; i < 5; i++) {
        fprintf(ptr, "| %-20s | %-8.2f | %-6.2f | %-16s |\n", 
                students[i].first_name, 
                students[i].marks, 
                students[i].cgpa, 
                students[i].course);
    }

    fprintf(ptr, "+----------------------+----------+--------+------------------+\n");

    fclose(ptr);

    printf(" tables is added to text file \n ");
    
    return 0;
}