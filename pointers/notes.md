**Notes on Pointers**

**What Are Pointers?**  
- Think of a **pointer** as a "direction slip" that tells you *where* a variable is stored in memory.  
- A variable holds a value (like `5`), while a pointer holds the **address** (location) of that variable.  

---

**Code Breakdown**  
1. **Function `addition`:**  
   ```c
   void addition(int *target, int a, int b) {
       *target = a + b; 
   }
   ```
   - `int *target`: `target` is a pointer. It *doesn’t* store a number, it stores the **address** of a variable (like a GPS location).  
   - `*target = ...`: The `*` means "go to the address stored in `target` and change the value there."  

2. **In `main`:**  
   ```c
   addition(&answer, x, y);
   ```
   - `&answer`: The `&` gives the **address** of `answer` (like writing down where `answer` lives in memory).  
   - The function `addition` uses this address to directly modify `answer`.  

---

**Key Analogy**  
- **Variables** are like boxes that hold values.  
- **Pointers** are notes that tell you *where a box is located*.  
- Using `*` is like opening the box to read or change its contents.  

---

**Why Use Pointers?**  
1. **Modify Variables in Functions:**  
   Without pointers, functions can’t change the original variables (they only get copies).  
2. **Efficiency:**  
   Copying large data (like arrays) is slow. Pointers let you share the address instead.  

---

**Example Flow**  
1. `answer` is created in `main` (but has no value yet).  
2. `addition(&answer, 5, 15)` sends the address of `answer` to the function.  
3. The function writes `5 + 15 = 20` directly into `answer`’s memory location.  
4. `printf` shows `Answer: 20`.  

---

**Remember**  
- `&variable`: Get the **address** of `variable` ("Where is it?").  
- `*pointer`: Access the **value** at the address stored in `pointer` ("What’s inside that box?").  

Pointers let functions "work on the original variable" instead of a copy! 🎯