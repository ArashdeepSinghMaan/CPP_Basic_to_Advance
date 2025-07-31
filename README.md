
Each folder contains:
- `src/` → C++ source files
- `include/` → Header files (for modular tasks)
- `CMakeLists.txt` → Build file
- `README.md` → Task-specific description and instructions

---

## **Tasks Overview**

### **Task 1: Smart Pointers & RAII**
- **Goal:** Practice modern memory management with `std::shared_ptr` and `std::unique_ptr`.
- **Key Concepts:** Ownership semantics, RAII pattern.
- **Deliverable:** A `Sensor` class automatically managing its lifetime.

---

### **Task 2: Template Functions & Classes**
- **Goal:** Write type-independent code using templates.
- **Key Concepts:** Function templates, class templates, compilation-time type resolution.
- **Deliverable:** Generic math functions and a template-based `Storage` class.

---

### **Task 3: Inheritance & Polymorphism**
- **Goal:** Understand base/derived class hierarchy and runtime polymorphism.
- **Key Concepts:** Abstract classes, virtual functions, dynamic dispatch.
- **Deliverable:** `Shape` interface with `Circle` and `Rectangle` implementations.

---

### **Task 4: Operator Overloading**
- **Goal:** Explore custom operator behavior.
- **Key Concepts:** Overloading `+`, `-`, and `<<` operators.
- **Deliverable:** `Vector2D` class supporting vector arithmetic and streaming output.

---

### **Task 5: Lambdas & Function Objects**
- **Goal:** Learn callback mechanisms and functional programming style.
- **Key Concepts:** Lambda expressions, `std::function`, higher-order functions.
- **Deliverable:** Callbacks applied to data processing with lambdas.

---

### **Task 6: Exception Handling**
- **Goal:** Implement robust error handling.
- **Key Concepts:** `try-catch` blocks, exception safety.
- **Deliverable:** Division function handling division-by-zero exceptions.

---

### **Task 7: Multithreading**
- **Goal:** Work with parallel execution and synchronization.
- **Key Concepts:** `std::thread`, `std::mutex`, shared data handling.
- **Deliverable:** Multi-threaded counter with proper synchronization.

---

### **Task 8: File I/O & Serialization**
- **Goal:** Persist and retrieve data from files.
- **Key Concepts:** `std::ifstream`, `std::ofstream`, structured data parsing.
- **Deliverable:** Read sensor data from a file and log processed output.

---

### **Task 9: CMake Project Setup**
- **Goal:** Practice setting up a multi-file C++ project with CMake.
- **Key Concepts:** Targets, linking, include directories.
- **Deliverable:** Modular C++ project built with `CMakeLists.txt`.

---

### **Task 10: Mini Robot Simulation**
- **Goal:** Integrate all learned concepts into one simulation.
- **Key Concepts:** Object-oriented design, threading, file I/O, callbacks.
- **Deliverable:** A simple robot class updating its position in a separate thread and logging its trajectory.

---

## **How to Build**
### **Prerequisites**
- C++17 or later
- CMake 3.10+
- A Linux environment (Ubuntu recommended)

### **Build Steps**
```bash
# Clone the repository
git clone https://github.com/<your-username>/cpp-robotics-fundamentals.git
cd cpp-robotics-fundamentals

# Build (example for Task 1)
cd Task01_SmartPointers_RAII
mkdir build && cd build
cmake ..
make

# Run
./smart_pointer_demo
