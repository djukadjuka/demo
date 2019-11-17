#include <stdio.h>

int calculate(void);
void create(void);
const char * read(const char * path);



int main(void){
	printf("This is a demo program for merging and branching on git.");	
	
	// TODO: Comment this code ..
	int x = calculate();
	create();
	create();
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
