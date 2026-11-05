## 1. Computer Architecture (Abhijit)

The most interesting problem for me is the memory wall. CPUs got 1000x faster over the years while Memory only got 10x faster. Moving data costs far more time and energy than doing computation on it. To deal with this, caches are used, which bring data from memory in smaller chunks, to speed up the access as accessing nearby data is cheap. Pipelining and Speculation are also used to hide the delay. But, speculation leaves traces of data in the cache, which can be exploited for malicious intent(Spectre). This is a problem even today for AI chips, which sit idle for a lot of the time waiting for data.

---
## 2. Compilers (Jyothi)

The most interesting problem for me is how to make the generated code fast and still correct. To optimise, the compiler has to know things about the program, like whether a variable is used again. But by Rice's Theorem, any non trivial question about what a program does is undecidable. So, the compiler can never answer these exactly. So it plays safe, if it cannot prove an optimisation is safe, it does not apply it. Even the parts it can do are hard. This matters even more now as hardware like GPUs and NPUs is getting more and more varied and specialised.

---
## 3. Programming Languages (Ashish)

The most interesting problem for me is memory safety without losing performance and Rust is built around solving it. In C/C++, you manage the memory yourself and mistakes like use after free, buffer overflows and data races cause a lot of real security bugs. Languages like Java, C# solve this via Garbage Collection, but that introduces its own overhead at runtime and is slower. Rust avoids both using ownership and borrow checker. The compiler checks everything at compile time, so there is no runtime cost, The downside is that the compiler may reject "valid" code and also Rust has a steep learning curve.

---
## 4. Operating Systems (Sathya)

The most interesting problem for me is protection. How the OS stays in control when it runs programs it cannot trust. A buggy or malicious program could run an infinite loop, hog the CPU, write over another program's memory or access the disk. the OS cannot check every instruction in software because that would be far too slow, so it needs help from hardware. The CPU has two modes, user and kernel and only kernel mode can run privileged instructions like I/O. When a userspace program needs something from OS, it makes a system call which is handled by the OS.

---
## 5. Cryptology (Shibam)

The most interesting problem for me is defining what "secure" even means. By Kerckhoffs' principle, the attacker knows the encryption algorithm and only the key is secret. The idea is that a scheme is secure if the attacker learns nothing useful from the ciphertext, even while knowing how the scheme works. The deeper problem is that real systems depend on assumptions, like factoring being hard, that nobody has proved, and a quantum computer can break some of them.

---

## 6. DBMS (Manish)

The most interesting problem for me is keeping data correct and fast when many users access it at once, and the system can fail at any moment. Take a bank transfer: money must be taken from one account and added to another, and either both steps happen or neither does. If two transfers touch the same account, or the system fails halfway, the data may end up wrong. Running one transaction at a time is safe but very slow. Getting both correctness and speed is hard.

---
## 7. Theory of Computation (Nitin) ⚠ no slides

The most interesting problem for me is P vs NP. Some problems, like Sudoku or scheduling, have solutions that are easy to verify but seem to need exponential/factorial time to find. Nobody has proven that this gap is real: we can't show that a faster algorithm doesn't exist. What makes it deeper is NP-completeness: thousands of problems from different fields are equivalent, so a fast algorithm for one would give a fast algorithm for every problem in NP. I find it fascinating because the answer would break most of modern cryptography if P = NP, and it would show whether creative search (proofs, designing circuits) can be automated.

---
## 8. (Optional) NLP

The most interesting problem for me is getting one model to handle any language task reliably. Language is ambiguous, same words can mean different things in differet contexts and the model has to understand the instruction given to it. Earlier, a seperate model was trained with labeled data for each task. Large Language Models(LLMs) replaced this with one idea, generate text, one word at time, choosing the next word by its probablity given the words so far. After training on huge amounts of text and fine tuning, a single model can do many tasks just from a prompt. The unsolved part is reliability. Because models follow probability and not facts, they can and do hallucinate, they can be tricked by jailbreak prompts, distillation attacks, etc.

---