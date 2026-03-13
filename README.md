Fraud Detection System (C++)

A simple C++ based fraud detection program that calculates a risk score from a transaction ID by analyzing each digit of the number.

The system uses prime number detection, factorial calculation, and multiplication table sums to compute a Fraud Risk Score, which is then used to classify the transaction as Low, Medium, or High Risk.

📌 Features

Analyzes digits of a transaction ID

Detects prime digits

Calculates factorial for non-prime digits

Computes multiplication table sum (1–10) for prime digits

Generates a fraud risk score

Classifies the transaction into:

LOW RISK

MEDIUM RISK

HIGH RISK

⚙️ How the Program Works

The user enters a Transaction ID.

The program extracts each digit from the number.

For each digit:

If the digit is prime (2, 3, 5, 7)
→ The program calculates the sum of its multiplication table from 1 to 10.

If the digit is greater than 1 but not prime
→ The program calculates the factorial of that digit.

All calculated values are added together to generate a Fraud Risk Score.

The system determines the risk level based on the score.

🧮 Risk Level Classification
Fraud Risk Score	Risk Level
< 100	LOW RISK
100 – 1000	MEDIUM RISK
> 1000	HIGH RISK
🧾 Functions Used
bool isPrime(int n)

Checks whether the digit is a prime number (2, 3, 5, 7).

int factorial(int n)

Calculates the factorial of a number.

Example:

5! = 5 × 4 × 3 × 2 × 1 = 120
int tableSum(int n)

Calculates the sum of the multiplication table from 1 to 10 for the given number.

Example for n = 3:

3×1 + 3×2 + 3×3 + ... + 3×10
▶️ Example Execution
Enter Transaction ID: 235

Risk Score = 605
Risk Level: MEDIUM RISK

🛠️ Technologies Used

C++

Standard Library: iostream

Any C++ Compiler (g++, CodeBlocks, Dev C++, VS Code)

🚀 How to Run the Program

1️⃣ Clone the repository
git clone https://github.com/your-username/fraud-detection-system.git

2️⃣ Compile the program
g++ fraud_detection.cpp -o fraud

3️⃣ Run the program
./fraud

📚 Programming Concepts Used

Functions in C++

Loops

Conditional Statements

Prime Number Checking

Factorial Calculation

Digit Extraction using Modulus and Division

📄 License

This project is open-source and intended for educational and learning purposes.
