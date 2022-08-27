# C - argc and argv :smiley:
It is possible to pass some values from the command line to your C programs when they are executed. These values are called command line arguments and many times they are important for your program especially when you want to control your program from outside instead of hard coding those values inside the code.

The command line arguments are handled using main() function arguments where ```argc``` refers to the number of arguments passed, and ```argv[]``` is a pointer array which points to each argument passed to the program. 
## Syntax :
```
int main (int argc, int **argv){
//argc is argument count
//argv is argument vector
}
```
