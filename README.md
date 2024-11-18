# EEL-4
1. Research
In this section, we explain the underlying concepts of the code, including topics related to C programming, string manipulation, and data structures.
Research Links:
C String Handling Functions (GeeksforGeeks)
This link provides an overview of string functions in C like strcmp(), strcpy(), strcat(), and strlen(), which are used in the provided code.
Structures in C (GeeksforGeeks)
This link explains how to define and use structures in C, which is demonstrated in the code through the struct Student.
File I/O in C (TutorialsPoint)
Although file handling is not used directly in the code, this resource covers file input and output operations in C, which can be applied if you want to extend this program to read from/write to files.

2. Analysis
In this section, we analyze the code to understand its purpose and functionality:
The program defines a Student structure that stores information about a student, including the name, roll number, marks, and email.
It performs string manipulations to create an email ID based on the student’s name.
Functions are used to perform tasks such as comparing names, copying strings, calculating the length of a string, concatenating strings, and comparing marks between two students.

3. Ideate
In the ideation phase, we brainstorm about potential improvements or additional features:
Email Generation: The current method creates an email by concatenating the first and last name of the student. Consider adding more flexibility by including domain-based emails.
Sorting Students: A feature to sort students by their marks or roll number could be implemented.
File Input/Output: Saving the student records to a file or reading them from a file could be a future enhancement.

4. Build
Code Structure: The code is built using basic C concepts such as structures, strings, and functions.
Functionality: The main functionalities are implemented in several helper functions, each responsible for specific tasks such as comparing strings, copying strings, calculating string length, and displaying student details.

5. Test
In this section, the program’s functionality is tested:
Test Case 1: Input multiple students and check if their email addresses are correctly created.
Test Case 2: Compare students’ marks and verify the correct comparison message is displayed.
Test Case 3: Check the string length and concatenation for the student names.
Test Case 4: Verify if the program correctly handles different inputs (names, roll numbers, and marks).

6. Implementation
This section describes how the code is implemented:
The program uses the struct Student to store student data.
Functions like createEmail() generate an email address using a student's name.
The compareStrings() function compares two student names, while compareMarks() compares the marks of two students.

7. Maintenance
Maintenance would involve periodic updates and enhancements:
Code Refactoring: Refactor functions for better efficiency or readability (e.g., optimizing string manipulation).
Bug Fixes: Handle edge cases such as empty names or marks outside the valid range.
Feature Upgrades: Introduce new features such as allowing students to input multiple subjects and their respective marks.

8.Conclusion
In conclusion, the Student Tracker developed using C programming effectively demonstrates the use of structures, string manipulation, and basic data processing techniques. The program allows the management of student data, including name, roll number, marks, and email, with functionalities such as comparison, string operations, and email generation. By implementing essential C functions, this project highlights the importance of modular programming and efficient data handling. Future improvements can include sorting features, file input/output capabilities, and enhanced error handling, making the system more robust and scalable. This project serves as a foundational example of how simple C programming techniques can be applied to real-world problems in data management.
