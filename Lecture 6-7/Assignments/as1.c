# include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int)(sizeof(pathways) / sizeof(pathways[0])))       //defining number of array

int main(void){
	//bool pathways[8] = {true, false, true,false, false,false, false, false};
	  bool pathways[8] = {[0]=1, [2] =1};  // index 0 and 2 are true so we assign 1 as value and the rest will be automatically 0
	  
	for (int i = 0 ; i < NUM_PATHWAYS; i++){   //loop and if else statement to determine whether the pathway is open or close
		
		if (pathways[i]){
			printf("pathway[%d] is open \n", i);
		}else{
			printf("pathway [%d] is closed \n", i);
		}
	}
	return 0;
}