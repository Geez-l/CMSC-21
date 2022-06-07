/*Long exam 2
Gliezel Ann Pajarilla */

#include <stdio.h>

struct employee{
	char ename[10];
	int sal;
};

int main(){
	
    struct employee emp[5];
	int i, j, n;
	printf("\nEnter number of employees: ");
	scanf("%d", &n);

	for (i = 0 ; i < n; i++){
		printf("\nEnter the employee record of employee no. %d \n", i+1);
		printf("Employee name:\t");
		scanf("%s", &emp[i].ename);
		
		printf("Enter employee salary:\t ");
		scanf("%d", &emp[i].sal);
		
	}
	printf("\n\n------Displaying Employee record--------\n");
	for (i = 0 ; i < n ; i++){
		printf("\nEmployee name is : %s",emp[i].ename);
		printf("\nSalary is :%d",emp[i].sal);
	}

}