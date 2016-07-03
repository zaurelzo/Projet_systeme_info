# Projet_systeme_info
Yet an other compiler with lex and yacc. 

Authors:
 * Abdillah Ahamada
 * Jordy Cabannes

One of the Most interesting project that I have done. The main goal was to design a c language compiler(in c :) ) and his Microprocessor in VHDL. To be sure that the assembly code generated by the compiler is running perfectly, we have also developed an interpreter.  


## To compile the compiler
```bash
  cd compilateur
  ./compile_compilateur
```

## To compile the interpreter
```bash
  cd interpreteur
  ./compile	
```

## To run a test case
  write the test case in the folder dossierTest.
  to compile the test case(ie generate the assembly code of your test case ).
  
  ```bash
    cd compilateur
    ./hakunaMatata ../dossiertest/nameOfTestCaseFile.c ../dossiertest/nameOfAnOutputFile
  ```
  the output file will contain the assembly code. you may want to bee sure that your code is doing what you have expected.
  So you should run the assemby code with the interpreter. To do that: 
  
  ```bash
    cd interpreteur
    ./interpreteur ../dossiertest/nameOfAnOutputFile
  ```
  We have also added a debug mode in the interpreter. To interpret the code with the debug mode:
    ```bash
    cd interpreteur
    ./interpreteur -d ../dossiertest/nameOfAnOutputFile
  ```
  For the moment, you have 3 commands in the debug mode:
    * printvar nameOfLocalVariable  
    * printgl nameOfGlobalVariable 
    * Press the ENTER key to run the code step by step
