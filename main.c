#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int 	ID; 
	char 	name[20];
	double 	grade;	
};

int main(int argc, char *argv[]) {
	struct student stud = {10, "Juyeop", 4.3};
	
	stud.ID = 17;
	strcpy (stud.name,"KIM");
	stud.grade = 2.0 ;
	printf("ID : %i, name : %s, grade : %lf\n",
	stud.ID, stud.name, stud.grade);
	return 0;
}
