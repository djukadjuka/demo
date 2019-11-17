#include <stdio.h>

int calculate(void);
void create(void);
const char * read(const char * path);

int main(void){
	printf("This is a demo program for merging and branching on git.");	
	return 0;
}

int calculate(void){
	// ... function calculates some stuff
	int result = 0;
	
	// ... cue calculations
	
	return result;

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
