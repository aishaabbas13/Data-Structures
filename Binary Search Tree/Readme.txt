*******************************************************
*  Name      :  Aisha Qureshi
*  Student ID:  103285646               
*  Class     :  CSCI 2421           
*  HW#       :  8               
*  Due Date  :  Mar. 29, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

Using a binary search tree
implement a printPreorder,
printInorder, printPostorder,
and findNode member functions

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
  main.cpp implements all the functions.

Name:  BSTree.cpp
 implements functions to create binary search tree and print them

Name:  BSTree.h
  Contains a class called BSTree that contains functions

Name:  Node.h
  Contains generic tree node class
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program compiles and works.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on csegrid.ucdenver.pvt


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [QureshiHW8]

   Now you should see a directory named homework with the files:
        main.cpp
        BSTree.cpp
	   BSTree.h
	   Node.h
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [QureshiHW8] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[main]

4. Delete the obj files, executables, and core dump by
   %./make clean
