# Homework 09 
## 1. Declare two (type double) pointer variables named d_var and d_array. Write C++ statements to dynamically create a double‐precision floating‐point variable and store its address in d_var. Also dynamically create an array of 10 double‐precision floating‐point values and store its address in d_array: 
<br>

## 2. Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the console and then display it: 
<br>

## 3. Write C++ statements to initialize the 10 double values in the     dynamically allocated array to 1.0. Now write C++ statements to de‐allocate the memory (i.e. using the delete operator) pointed by d_var and d_array: 
<br>

## 4. Write a program in C to find the largest element using Dynamic Memory Allocation 
Test Data :  
Input total number of elements(1 to 100): 5  

Number 1: 5  
Number 2: 7  
Number 3: 2  
Number 4: 9  
Number 5: 8 

Expected Output : 
The Largest element is :  9.00  

<br>

## 5. A user‐defined structure named Timer has two integer parameters to initialize hour and minute members. Write a single C++ statement to create an object of the Timer structure using dynamic memory allocation and assign it to a pointer variable named timePtr. Assign values of 10 and 20 for hour and minute respectively. 

<br>

## 6. Letter Frequency 
Write a function that will take a string and return a count of each letter in the string. For example, "my dog ate my homework" contains 3 m's, 3 o's, 2 e's, 2 y's and one each of d, g,a, t, h, w, r and k. 

Your function should take a single string argument and return a dynamically allocated array of 26 integers representing the count of each of the letters a ‐ z respectively. Your function should be case insensitive, i.e., count ‘A’ and ‘a’ as the occurrence of the letter ‘a’. Do not count non‐letter characters (i.e., spaces, punctuation, digits, etc.) Write a program that will take a string from the user using cin, call your letter frequency function and print out the frequency of each letter in the string. Do not list letters that do not occur at least once. 

Example: 

Enter a string: “my dog at my homework” 

Letter frequency 

a 1 

d 1 

e 1 

g 1 

h 1 

k 1 

m 3 

o 3 

r 1 

t 1 

w 1 

y 2    