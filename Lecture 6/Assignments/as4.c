/* Name: Gliezel Ann Pajarilla
   About the program: Solving the average of students' grades */

   
#include <stdio.h>

#define n_students 5

int main(void){
	float grades[n_students],average, sum;
	int i;

	printf("\t\tEnter scores one by one:\n ");

	for (i=0; i < n_students; i++){
		printf("Enter grade for student %d: ", i+1);
		scanf("%f", &grades[i]);

	}
	average = sum / n_students;

	printf("%.2f\n", average);

	return 0;
}