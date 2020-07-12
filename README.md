
# Chapter 2 User Defined Types 
## TOC
1. Structures 
1. Classes
1. Unions 
1. Enumerations

## Notes

## Class Vector 


````




# Chapter 3 Modularity 
## TOC 
1. Separate Compilation 
1. Modules 
1. Namespaces 
1. Error Handling 
  1. Exceptions 
  1. Invariants
  1. Error Handling 
  1. Alternatives
  1. Contracts 
  1. Static Assertions 
1. Function arguments and Return Values 
  1. Argument Passing 
  1. Value Return 
  1. Structured Binding 


# Chapter 4 Classes 
## TOC 
1. Concrete Types 
  1. An Arithmetic Type 
  1. A Container 
  1. Initializing Containers
1. Abstract Types 
1. Virtual Functions 
1. Class Hierarchies 

## Notes 
1. Characterstic of Concrete type is that its representation is part of its definition 
1. The Representation can be private and accessible only via member functions e.g. in Vector  
1. This allows 
  1. Place Objects of Concrete Types on The Stack, on Memory allocated on the Stack and in other Objects 
  1. Refer to Ojects directly (not through pointers or references) 
  1. Initiaize Objects Completely and Immediately  
  1. Copy And Move Objects
1. Class complex must be efficient 
1. This implies simple operations must be inlined 
1. Functions defined in a Class are inlined by default
1. Precede the function declaration with keyword inline 
1. Simple operations must be implemented w/o function calls in the generated machine code
1. Operations that do not require direct access to representation can be defined outside the Class
1. The const specifier on the functions in a class implies the function will not modify the object for which they are called










