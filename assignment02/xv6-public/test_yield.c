#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]){

	
	// while -> cannot run
	// a: only one
	
	int a = fork();
	while(1){
	if(a == 0){
		printf(1, "Child\n", 3);
		yield();
	
	}else{
		printf(1, "Parent\n", 3);
		yield();
	}

//		yield();	
	}

	exit();
}


