#include <stdio.h>

int calculate(void);
void create(void);
const char * read(const char * path);


// This is the main functions where everything is done.
int main(void){
	printf("This is a demo program for merging and branching on git.");	
	
	// First we must find this x
	int x = calculate();
	// We can create some stuff here in the database
	create();
	// We need to make more stuff in the db
	create();
	// Now we can finally calculate y using x
	y = x + calculate();
	
	return 0;
}

// This is for calculating things ...
int calculate(void){
	// ... function calculates some stuff
	int result = 0;
	
	// ... cue calculations
	
	return result;
}

// This is for creating data in database
void create(void){
	// ... function creates some stuff and databases it
	
	// .. cue creation
	
	// .. creation finished
}

const char * read(const char * path){
	// ... function reads some data from some path and returns it
	const char * data = read_data(path);
	
	// .. does something else ...
	
	return data;
}

// Function just prints a line
void print_line(void){
	print("\n-------------------------------------\n");
}
