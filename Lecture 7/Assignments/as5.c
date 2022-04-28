#include <stdio.h>

#define N_REVIEWERS 3
#define N_MOVIES 4

int main(void){
	double sum_per_movie, ave_per_movie;
	double reviewer, ratings;

	for (int movie = 0; movie < N_MOVIES; movie++){
		sum_per_movie = 0;
		for (int reviewer = 0; reviewer < N_REVIEWERS; reviewer++){
			sum_per_movie += ratings[reviewer][movie];
		}
		ave_per_movie = sum_per_movie/ N_REVIEWERS;

		printf("Average of Movie %d: %.1f\n", movie+1 , ave_per_movie);
	}
	return 0;
}