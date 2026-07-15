# Credit-Card-Number-Validity-Check
A program that validates credit card numbers using Luhn's algorithm.

HOW IT WORKS:-
A simple program where you just have to put a credit card number to check if it validates the Luhn's Algorithm.
-> The Luhn's algorithm is as follows:
    1.Starting from the rightmost digit (the check digit), move left and double the value of every second digit.
    2.If doubling a digit results in a number greater than 9, subtract 9 from it (or equivalently, add the two digits of the         result together).
    3.Sum all the digits — both the doubled (adjusted) digits and the untouched digits.
    4. the total sum is divisible by 10, the card number is valid according to the Luhn checksum. Otherwise, it's invalid.

-> You will be asked to enter a credit card number as per your choice when you run the program.
-> The system will then check if the number follows or validates the Luhn's Algorithm and finally inform you if the credit card number is valid or not.


HOW TO RUN IT:-
Requirements- A C++ Compiler.
1. Compile the program with this line,
   g++ creditcardvalidity.cpp -o creditcardvalidity
2. RUN IT.
   Mac/Linux:
   ./creditcardvalidity
   Windows:
   creditcardvalidity.exe
3. Enter a card number when prompted.
   For example, Enter a card number: 4539148803436467


   OR AN ALTERNATE METHOD (IF YOU HAVE AN IDE):-
   1.Open your IDE (e.g., VS Code, CLion, Code::Blocks, or Visual Studio).
   2.Open or import creditcardvalidity.cpp.
   3.Make sure a C++ compiler (like g++ or MSVC) is set up in your IDE.
   4.Click Run (or press the shortcut — e.g., Ctrl+F5 in VS Code with the Code Runner extension, or the ▶ button in Code::Blocks/CLion).
   5.Enter a card number when prompted in the output/console window.
