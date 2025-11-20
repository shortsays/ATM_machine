# 🏧 ATM Simulation Program in C  
### Author: **Ankit Saraswat (GLA University)**

---

## 📌 Overview  
This project is a **C language ATM Simulation System** that mimics basic ATM operations such as:  
- Bank selection  
- Withdrawal  
- Balance check  
- PIN verification  
- Locking the account after 2 wrong attempts  

It includes **four banks**, each with unique PINs and balances.

This program is simple, console-based, and designed for **beginners learning conditional logic in C**.

---

## 🏦 Supported Banks  
The updated version of the program includes the following banks:

| Bank Name                 | PIN  | Starting Balance |
|---------------------------|------|------------------|
| State Bank of India (SBI) | 2255 | ₹4,50,000        |
| HDFC Bank                 | 3344 | ₹5,20,000        |
| ICICI Bank                | 5566 | ₹4,10,000        |
| Kotak Mahindra Bank       | 7788 | ₹3,80,000        |

---

## ⭐ Features  
- Select from 4 different banks  
- Enter 4-digit secure PIN  
- Withdraw money safely  
- Check account balance  
- Detect wrong PIN  
- Account locks after 2 invalid attempts  
- Simple & realistic ATM flow  
- Uses **new variables, new banks, new design**

---

## 🧠 Program Flow  
1. User selects a bank  
2. Choose:
   - **1 → Withdraw**
   - **2 → Check Balance**
3. Enter 4-digit PIN  
4. If PIN is correct → continue  
5. If PIN incorrect twice → account locked  
6. Withdrawal completes only if sufficient balance is available  
7. Updated balance is displayed

---

## 🛠️ Technologies Used  
- **C Programming Language**  
- **GCC / MinGW Compiler**  
- **Standard I/O Functions**  

---

## 📥 Installation & Compilation  
### **Windows (Using GCC / MinGW)**  
```sh
gcc atm.c -o atm
atm
