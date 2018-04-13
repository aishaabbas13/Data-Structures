*******************************************************
*  Name      : Aisha Qureshi          
*  Student ID: 103285646   
*  Class     :  CSC 2421           
*  HW#       :  1                
*  Due Date  :  Jan. 25, 2017
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program guesses random integers from a specific
range the user chooses. Also, the user chooses the
amount of integers to guess.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to allow the user 
   to guess and enter inouts that are asked.

Name:  guess.h
   Contains the definition for the class guess.  

Name: guess.cpp
   Defines and implements the guess class for implementing and iterating
   guesses from the user of the random numbers.
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc csegrid.ucdenver.pvt.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [1234HW1]

   Now you should see a directory named homework with the files:
        main.cpp
        guess.h
        guess.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [1234HW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[main]

4. Delete the obj files, executables, and core dump by
   %./make clean
