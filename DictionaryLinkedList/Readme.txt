*******************************************************
*  Name      :  Aisha Qureshi
*  Student ID:  103285646               
*  Class     :  CSCI 2421           
*  HW#       :  6                
*  Due Date  :  Feb. 25, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

Combining and subtracting lists using overloading operators
and manipulating linked listes by deleting and inserting data
*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
  main.cpp implements all the functions.

Name:  dictionary.cpp
  dictionary.cpp contains function definitions from dictionary.h
	and implements a list of DictEntry 

Name:  dictionary.h
  Contains dictionary class and public variables and functions

Name:  DictEntry.h
  Contains dictionary methods from the type of data
   
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
       % unzip [QureshiHW6]

   Now you should see a directory named homework with the files:
        main.cpp
        dictionary.cpp
	   dictionary.h
	   DictEntry.h
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [QureshiHW6] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[main]

4. Delete the obj files, executables, and core dump by
   %./make clean
