#include <stdio.h>   //print and scan 
#include <math.h>   // math equations (e.g. sqrt() )


struct line {          //main struct of this program

	struct point{     // contains x&y coordinates
		float x;
		float y;
	}point1, point2; 
	float midpoint[2]; //storing 2 float data type for midpoint x,y
	float slope;      //slope of the line
	float distance;   //distance between 2 points   
}line1;              //line structure contains another structure named line1

float solveSlope (struct line line1){  //function solving and calling slope 

    //declared variables under this function
    
	float solve_slope;   //store the result of division between numerator and denominator             
	float y_numerator;   
	float x_denominator; 

	y_numerator = line1.point1.y - line1.point2.y;   //solve for (y1-y2)
	x_denominator = line1.point1.x - line1.point2.x; //solve for (x1-x2)
	solve_slope = y_numerator / x_denominator;      //computing the value of solve_slope

	return solve_slope;  // returning the value
};

float solveMidpoint (struct line line1){  //function solving midpoint
    //declared array index [0] and [1] which solves the midpoint given the formula [(x1+x2)/2] and [(y1+y2)/2]
	line1.midpoint[0] = ((line1.point1.x + line1.point2.x) /2);
	line1.midpoint[1] = ((line1.point1.y + line1.point2.y) /2);

	printf("Midpoint = %.2lf , %.2lf", line1.midpoint[0], line1.midpoint[1]); //printing the values of the midpoint

};

float solveDistance(struct line line1){ //function for solving distance between 2 points
	line1.distance = sqrt( (line1.point2.x - line1.point1.x)*(line1.point2.x - line1.point1.x) + (line1.point2.y - line1.point1.y)*(line1.point2.y- line1.point1.y) );  //sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );  
	printf("Distance between two points : %2.lf", line1.distance);  //printing the values                                                                                                     //this code can be shorten using pow() under the pre-processor directive                
};

void getSlopeInterceptForm(struct line line1){                         //function for solving the intercept form
	float b = line1.point1.y - ((solveSlope(line1))*(line1.point1.x));
	printf("y = %2.lfx + %2.lf", solveSlope(line1), b);            //printing of the result
};

//main function ; some parts are added to achieve readability of the program
int main(void){  
	printf("\n<<This program solves for the following:>> \n\n[a]Slope\n[b] Midpoint\n[c] Distance between two points\n[d]Slope- intercept form\n");
	printf("\nPoint 1: Please enter x and y: ");         //prompting user for entering values (x and y) for points 1 and 2
	scanf("%f %f", &line1.point1.x , &line1.point1.y);

	printf("Point 2: Please enter x and y: ");
	scanf("%f %f", &line1.point2.x , &line1.point2.y);

	printf("\n");
	printf("Slope: %2.lf", solveSlope(line1));		//printing and calling the returned value above of the slove
	printf("\n");                                  //improves readability of the result
	solveMidpoint(line1);                          //calling the function declared
	printf("\n");
	solveDistance(line1);	                      //calling solveMidpoint function
	printf("\n");
	getSlopeInterceptForm(line1);                 //calling the function
}





