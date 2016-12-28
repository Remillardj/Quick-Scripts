/*
 Author: Jaryd Remillard
 Name: Octal Permissions Snippet
 
 Purpose: gets octal formatted permissions for a file and prints its
 permissions on screen. To use, do;
 
 
 const char* x;
 x = "FileOrFolderName";
 octal_permissions(x);
 
 
*/
void octal_permissions(const char* dir) {
    struct stat st;
    int res;
    res = stat(dir, &st);
    
    printf("octal %o \n", st.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO));
}
