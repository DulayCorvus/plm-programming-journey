# Day 01 - Introduction to C

Date: August 14, 2026

## Topics Learned

### 1. Variables

Variables are containers used to store data in a program.

Examples:

- int - stores whole numbers
- float - stores decimal numbers
- char - stores a single character

Example:

int age = 18;
float grade = 95.5;

### 2. Output using printf()

The printf() function is used to display text and values on the screen.

Example:

printf("Hello, World!");
printf("Age: %d", age);

Common Format Specifiers:

- %d → integer
- %f → float
- %c → character
- %s → string

### 3. Input using scanf()

The scanf() function allows users to enter data into a program.

Example:

scanf("%d", &age);

The '&' symbol gives scanf() the memory address of the variable.

### 4. If Statements

If statements allow a program to make decisions based on conditions.

Example:

if (grade >= 75)
{
    printf("Passed");
}

### 5. Nested If Statements

A nested if statement is an if statement inside another if statement.

Example:

if (grade >= 75)
{
    if (grade >= 90)
    {
        printf("Excellent");
    }
}

Nested if statements are useful when checking multiple conditions.

---

## Project Built

### Grade Calculator

Created a program that:

- Accepts a numerical grade from the user
- Validates the input
- Determines whether the grade is valid
- Displays the corresponding result

Concepts Used:

- Variables
- printf()
- scanf()
- if statements
- nested if statements

---

## Challenges Encountered

- Remembering format specifiers
- Understanding when to use '&' in scanf()
- Organizing conditions inside if statements

---

## Key Takeaways

- Variables store data used by the program.
- printf() displays information to the user.
- scanf() accepts user input.
- if statements allow decision-making.
- Nested if statements can be used for more specific conditions.
- Small projects help reinforce programming concepts.

---

## Reflection

Today was my first day learning C. I learned how to display output, receive input, store values using variables, and make decisions using if statements. I applied these concepts by creating a Grade Calculator, which helped me understand how different parts of a program work together.