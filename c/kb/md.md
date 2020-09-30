## 0. Why C?
What makes it remarkable?
 - Is a middle-level language. ( Fast, Don't hide things & still high level)
 - Common programming paradigm. ( Many higher language based on it)
 - Not garbage collected. ( so you will have to take care of memory)

## 1. Introduction
**1.1. Get Started**
 - Download the compiler on your machine. 
	```bash
	sudo apt install build-essential
	```
	

> We look for gcc package which will be found in build-essential

 - Create hello.c file and open it with your favorite editor.
 - Write the very basic program.
	```c
	#include <stdio.h>
	int main () {
		return 0; }
	```
	

	> `#include` some non-core libraries. 
	`main ()`is the captine of the captine of script sea. is a supplier how take void and return int. has a curly body.
	`return 0;` the exit code of the program. 0 means everythhing is okay.
	
	
 - Compile & Run.
	```bash
	cc hello.c -o hello
	./hello
	``` 
**1.2. Variables and DataTypes**
Variable is a storage area in the memory.

