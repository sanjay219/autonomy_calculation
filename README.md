# Autonomy Level Calculator

## Overview
This C program calculates the total autonomy level (`A_total`) for a system based on various factors influencing autonomy. It takes user inputs for 17 parameters, computes intermediate autonomy levels (AL1 to AL13), and outputs the final autonomy score using a predefined formula. The program uses double-precision floating-point numbers for accuracy and includes checks to prevent division-by-zero errors.

The factors influencing autonomy are:
- Human Correctness (Hc)
- Measure of Uncertainty (Mu)
- Human Intervention (Hi)
- Measure of the Set of Goals (Mg)
- Performance (P)
- Robustness (R)
- Measure of Entropy (Me)
- Measure of AI Capabilities (Mai)
- Measure of Communication & Connectivity (Mc)
- Measure of Regulations & Restrictions (Mrr)
- Measure of Self-Learning Capability (Ml)
- Model Complexity (Cm)
- Mission Complexity (Mcx)
- Battery Health (Bh)
- Measure of Redundancy Present (Mrd)
- Measure of Trust (Ht)
- Modular Design (Mmd)

The final autonomy score is calculated as:
`A_total = (AL1 + AL2 + AL3 + AL4 + AL5 + AL6 + AL7 + AL8 + AL9 + AL10 + AL11 * AL12 + AL8 * AL13) / z`

where `z = 4.5e6`.

## Prerequisites
- **C Compiler**: MinGW (Minimalist GNU for Windows) or an IDE like Code::Blocks or Visual Studio.
- **Operating System**: Windows.
- **Text Editor**: Any text editor to save the code (e.g., Notepad++, VS Code).

## File Structure
- `autonomy_calc.c`: The main C source file containing the program logic.

## Installation
1. **Save the Code**:
   - Copy the C code into a file named `autonomy_calc.c`.
   - Save it in a directory accessible by your command prompt or IDE.

2. **Install a C Compiler**:
   - **MinGW**: Download and install MinGW from [mingw-w64.org](https://www.mingw-w64.org/). Add the `bin` directory to your system’s PATH.
   - **IDE**: Alternatively, use an IDE like Code::Blocks or Visual Studio, which includes a compiler.

## How to Run
### Using MinGW
**Navigate to the Directory**:
   - Open Command Prompt or PowerShell.
   - Change to the directory containing `autonomy_calc.c`:
     ```cmd
     cd \path\to\your\file
     
## Compile and Run

### Compile the Code
Compile using `gcc`:
```cmd
  gcc autonomy_calc.c -o autonomy_calc.exe
```

### Run the Program
Execute the compiled program:
```cmd
autonomy_calc.exe
