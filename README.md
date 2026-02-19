# 💥 Project 21 — Undo / Redo Simulation  

> A practical simulation of the **Undo / Redo mechanism** using the Stack Data Structure in C++.

---

## 🚀 Project Overview

This project demonstrates a real-world application of the **Stack** data structure by simulating how:

- 🔙 **Undo** works (go back to a previous state)  
- 🔜 **Redo** works (move forward again after undo)  

The system is built using two stacks:

- One stack for Undo history
- One stack for Redo history

Every time the string value changes, the previous state is stored automatically.

This allows full tracking of all modifications.

---

## 🧠 Why This Project Matters

Stacks are not just academic concepts.

They power real systems such as:

- Call Stack — managing function calls in memory  
- Undo / Redo systems — text editors and IDEs  
- Browser navigation (Back / Forward buttons)  

This project is a simplified simulation of how professional software manages state history.

---

## 🏗 Architecture Overview

We created a class that represents a string with built-in history tracking.

Internally, it contains:

- A variable holding the current string value  
- A stack that stores previous values (Undo stack)  
- A stack that stores reverted values (Redo stack)  

The class controls how values are updated and how history is managed.

---

## ⚙ How the System Works

### When Setting a New Value

Whenever the value changes:

1. The current value is first saved into the Undo stack
2. Then the value is updated

This ensures that every previous state is preserved before modification.

This is possible because we used Set & Get properties, allowing full control over what happens during assignment.

---

### Undo Operation

When Undo is triggered:

1. The system checks if the Undo stack contains data  
2. The current value is saved into the Redo stack  
3. The most recent value from the Undo stack becomes the current value  
4. That value is removed from the Undo stack  

Result: The system moves one step backward in history.

---

### Redo Operation

Redo performs the reverse process:

1. It checks if the Redo stack contains data  
2. The current value is pushed back into the Undo stack  
3. The most recent value from the Redo stack becomes the current value  
4. That value is removed from the Redo stack  

Result: The system moves one step forward again.

---

## 🔄 How Data Moves Between Stacks

The value transitions dynamically between:

- Current Value  
- Undo Stack  
- Redo Stack  

Undo transfers data from Undo → Current → Redo.  
Redo transfers data from Redo → Current → Undo.

This continuous exchange simulates real undo/redo engines.

---

## 🎯 Concepts Practiced

- Stack Data Structure  
- Two-Stack Undo/Redo Strategy  
- State History Tracking  
- Object-Oriented Programming  
- Encapsulation  
- Controlled Property Access  
- Simulation of Real Software Behavior  

---

## 🛠 Technologies Used

- C++  
- Custom Stack Implementation  
- OOP Concepts  
- __declspec(property) for controlled assignment behavior  

---

## 📌 Educational Value

This project trains you to:

- Think in terms of state transitions  
- Design systems that manage historical data  
- Use data structures to simulate real-world behavior  
- Understand how abstraction hides internal complexity  

Even though the project is small, the design thinking behind it is powerful.

---

## 🔥 Final Takeaway

Undo / Redo systems in professional applications  
are built on this exact principle:

Two stacks.  
State tracking.  
Controlled transitions.

Small simulation.  
Real engineering concept.

---

## 🌐 Platform

Programming Advices  
https://programmingadvices.com

---

## 👨‍🏫 Instructor

Dr. Mohammed Abu-Hadhoud  
Founder & Instructor — Programming Advices
