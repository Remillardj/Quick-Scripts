/*


@ Purpose: check if directory exists


@ Usage: It is very helpful to be able to see if a directory exists, before creating it
and wasting memory, regardless if it is small or not. It is a good programming habit to check before creating
a directory or file or anything. It is tricky to have an effective method of this.

const *char x;
x = "your_variable";
name_of_function(x);


@ Tips:
- do not use opendir, if you fail to closedir it wil inflate ram, and sometimes in a massive program, it is
difficult and strenuous on the system to make a directory just to check it.
- much of what access() requires is error handling. look at the man page of access() to figure out what errors to handle


@ Notes:
- 0 means success and -1 means fail
- in access(), you have to trail directory with forward slash "/"


@ Details: This snippet has two options, access() and stat(). Both are effective with pros and cons to each.
access() is quick to write and execute, but there is a problem. If your account does not have access to the directory
or file, it could still exist because you dont have to the permissions to access it. Whereas stats() takes a little
bit more memory, but because you can use stats() on any account, and get information upon directories or files,
it is a much more reliable source of information. Both have pros and cons, and it really depends on what your program is doing,
using, and permissions.


*/

#include <unistd.h> //this is all access() needs, but is also required for stats

#include <dirent.h> //for opendir
#include <sys/types.h> //for stat and opendir
#include <sys/stat.h> //for stat


void chkdir_access(const char* pathname_access) {


	//if block, checks if access is ok
	if (access(pathname_access, F_OK) != 0) {
		

		//error handling
		if (errno == ENOENT) {
			printf("Directory path does not exist\n");

		}

		if (errno == ENOTDIR) {
			printf("Directory path is not a directory\n");

		}

		if (errno == EACCES) {
			printf("Program does not have access to directory path\n");

		}

	}

}


void chkdir_stats(const char* pathname_stats) {


	//create structure for stat with name of chkdir
	struct stat chkdir;


	//apply stat to path
	int check = stat(pathname_stats, &chkdir);

	if (check == -1){

		//error handling
		if (ENOENT == check) {
			
			//ENOENT error is: path does not exist or field is empty
			printf("Path does not exist or field is empty");

		} else {
			
			//if it is not ENOENT, then to print the error.
			perror("Stats");
			exit(-1);

		}

	}

}


/*

@ WARNING: ONLY USE THIS IF DEEMED COMPLETELY NECESSARY!
@ WARNING: Follow directory path with foward slash ending trail!
@ WARNING: You MUST closedir otherwise it will contribute to a memory leak!

@ Details: This uses the opendir() method of checking a directory if it exists, only use this
if it is necessary.

*/



void chkdir_opendir(void) {

	const *char dirname = "/path/to/directory/"
	
	//this opens the directory
	DIR *opdir = opendir(dirname);

	//checks if opendir(dirname) fails, if it fails then flag it and exit program
	if (!opdir) {
		printf("[FAILED]: Open Directory Failed: %s | %s", dirname, strerror(errno));
		exit(-1);

	}

	closedir(dirname);

}


//Apply functions here
int main(void) {

	const *char x;
	x = "/Users/jremillard/Desktop/work/Projects/Permissions Profiler/Dev/test_folder/";

	chkdir_stats(x);

}














