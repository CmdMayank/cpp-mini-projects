Typing Speed Tester (Phase 1, Array Version)

Description

This is a simple C++ program designed to test and improve your typing skills. The program randomly selects a sentence from a predefined array and prompts the user to type it exactly. It then compares the user's input with the original sentence, providing feedback on accuracy.

Features





Randomly selects a sentence from a predefined list.



Accepts user input and compares it with the chosen sentence.



Provides immediate feedback on whether the typing was correct or not.



Displays both the user's input and the expected sentence for reference.

How to Build and Run





Ensure you have a C++ compiler installed (e.g., g++).



Save the code in a file named typing_speed_tester.cpp.



Compile the program:

g++ -o typing_speed_tester typing_speed_tester.cpp



Run the program:

./typing_speed_tester

Sample Sentences





"The quick brown fox jumps over the lazy dog"



"C++ is a powerful and flexible language"



"Practice makes a person perfect"



"Typing fast is a useful skill to learn"



"GitHub helps you share your code with the world"

Sample Output

===== Typing Speed Tester (Phase 1, array version) =====

Type this sentence Exactly:

The quick brown fox jumps over the lazy dog

[User types: The quick brown fox jumps over teh lazy dog]

Not Exact... Keep practicing.
You typed  : The quick brown fox jumps over teh lazy dog
Expected   : The quick brown fox jumps over the lazy dog

Author
Mayank Sharma

Notes

This is Phase 1, focusing on basic sentence selection and comparison. Future phases could include timing to calculate words per minute (WPM) and accuracy percentages.



The program uses srand and time for random sentence selection, ensuring a diffe
