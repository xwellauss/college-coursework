
# ITC Final Exam: Prepared Answers (v2, aligned with your slides)

Exam format: 7 questions, each asks for one paragraph on "the most interesting technical problem in X". Grade = 3 + (number answered), and 3 or below fails. Answer all 7 and rephrase in your own words. Each topic has a paragraph (~100 words) plus **Slide words**: terms from the profs' intro slides worth dropping in, since those are what each prof will recognise.

Topics marked ⚠ had no slides in what you shared, so those answers are unchanged from v1.

---

## Theory of Computation (Nitin) ⚠ no slides

The most interesting problem is P vs NP. Some problems, like Sudoku or scheduling, have solutions that are quick to verify but seem to need exponential search to find. Nobody has proven that this gap is real: we can't show that a fast algorithm doesn't exist, only that nobody has found one. What makes it deeper is NP-completeness: thousands of problems from different fields are all equivalent, so a fast algorithm for one would give a fast algorithm for all of them. I find it fascinating because the answer would decide whether cryptography is possible and whether creative search (finding proofs, designing circuits) can ever be automated.

**Backup:** the halting problem, a sharper limit: some questions about programs can never be answered by any algorithm.

## Data Structures & Algorithms (MVP) ⚠ no slides

My pick is the gap between asymptotic analysis and real hardware. On paper, a linked list or a balanced binary tree looks great, but in practice a plain array or a B-tree often wins by a large margin. The reason is the memory hierarchy: a cache miss costs hundreds of cycles, so contiguous data is processed much faster than pointer-chasing structures with the same Big-O. This pushed the field towards cache-aware and cache-oblivious designs, where you choose structures by how they touch memory, not just by operation counts. It's interesting because the "best" algorithm depends on the machine it runs on.

## Computer Architecture (Abhijit)

The most interesting problem is the memory wall: moving data costs far more than computing on it. Two loops that sum the same 2D array, differing only in loop order, can run about 7× apart, because processors got roughly 1000× faster while memory got only about 10× faster, so a fast core spends most of its life waiting. Hardware hides this with caches that fetch memory in 64-byte cache lines: a row-wise loop uses every value in each line, while a column-wise loop uses one and evicts the line before coming back. Architects add pipelining and speculation on top, but speculation leaves traces in the cache, which is what Spectre exploited. Fetching a number can cost thousands of times more energy than the arithmetic on it, and AI accelerators now sit idle waiting for data. I find it fascinating that nothing in the source code shows this cost, and I've seen cache behavior matter in C code like game loops.

**Slide words:** memory wall, cache line (64 bytes), cache hierarchy (L1 / L2 / L3 / DRAM), pipelining, branch prediction / speculation, Spectre and Meltdown (2018), power wall and the end of Dennard scaling (2005, multicore), Moore's Law, data movement vs computation energy (~6,400×), compute-in-memory, 3D stacking.
**Backup:** the power wall. Clock speeds stopped rising around 2004-2005 because power becomes heat, so chips went multicore, then heterogeneous and domain-specific.

## Compilers (Jyothi)

The interesting problem is how a compiler produces fast code for ever more diverse hardware when perfect analysis is impossible. By Rice's theorem, any non-trivial question about what a program does (is this code dead? can these pointers alias?) is undecidable, so the optimizer's analysis must be a conservative approximation: if it can't prove a transformation is safe, it doesn't apply it. Compilers get through this by borrowing from many areas of CS: graph algorithms for register allocation (graph coloring, NP-hard, solved with heuristics), dynamic programming for instruction selection, and fixed-point iteration for data-flow analysis. This matters more now that GPUs, TPUs and FPGAs make efficient code generation harder. I like it because compilers turn theory into practice.

**Slide words:** analysis + transformation (code optimizer), lexical / syntax / semantic checks, domain-specific architectures (GPU, TPU, FPGA), "marriage of theory and practice" (Aho).

## Machine Learning (Saketha)

Why do hugely overparameterized neural networks generalize? Classical theory says a model with far more parameters than data points can memorize the training set and fail on new data, yet deep networks do well anyway. Double descent (test error falls, rises, then falls again as model size grows) and implicit regularization (gradient descent prefers simple solutions among the many that fit) give partial explanations, but no complete theory exists. A related puzzle from the slides: in-context learning improves as models get larger, and nobody fully knows why. It's interesting because practice is far ahead of theory, so we deploy systems we can't yet fully justify.

**Slide words:** supervised vs unsupervised, classification / regression / clustering, k-NN, perceptron, SVM (max margin), k-means, pre-train → fine-tune → prompt, GPT training regime (pretraining, SFT, reward modeling, RL), scaling.
*Note: the AI/ML deck you shared is by Sandipan Dandapat, not Prof. Saketha, so if his slides differ, trust his.*

## Natural Language Processing

The core problem is getting one model to handle arbitrary language tasks. Older NLP needed a separate model and lots of labeled data for each task (sentiment, NER, question answering). LLMs replaced that with a single idea: language modeling, i.e. generating text one token at a time, scoring every word in the vocabulary by P(next word | words so far). Combined with learned word embeddings, contextual meaning (the "bank" of a river vs a blood bank) and instruction tuning, this lets one model follow instructions it was never explicitly trained for. What remains unsolved is reliability: models hallucinate details that just follow high-probability text, can be jailbroken, and reflect mostly Western training data, which is why India builds models like BharatGen. I find that gap between fluency and trustworthiness the most interesting part.

**Slide words:** language modeling, token-by-token generation, word embeddings (king − man + woman ≈ queen), contextualized embeddings, instruction fine-tuning, few-shot prompting, hallucination, jailbreak, cultural alignment.

## Programming Languages (Ashish)

The most interesting problem is memory safety without giving up performance, and Rust is the language that solves it in a way no mainstream language did before. In C you manage memory by hand, and mistakes like use-after-free, dangling pointers, buffer overflows and data races cause a large share of real-world security bugs. Garbage-collected languages remove these bugs, but pay with runtime overhead and unpredictable pauses. Rust's answer is ownership and borrowing: every value has exactly one owner and is freed when that owner goes out of scope, and references follow a strict rule, either many shared (read-only) references or exactly one mutable reference, never both, with lifetimes tracked by the compiler's borrow checker. All of this is checked at compile time, so there is no runtime cost. The same rule that prevents use-after-free also rules out data races, so concurrency becomes safe by construction. The price is that the compiler sometimes rejects valid programs and the language is harder to learn. I find it fascinating because it shows that a type system can act as a built-in proof of correctness for a whole class of bugs.

**What makes Rust unique (pick 2-3 to mention):**
- Ownership and borrowing: memory safety checked at compile time, with no garbage collector.
- Zero-cost abstractions: high-level code compiles down to the same machine code you'd write by hand.
- Fearless concurrency: the type system (Send / Sync) prevents data races at compile time.
- No null: absence is an `Option` type you must handle, and errors are `Result` values, not exceptions.
- Enums with pattern matching, so the compiler checks you handled every case.
- `unsafe` blocks: an explicit, small escape hatch, so the risky code is easy to find and audit.

**Slide words:** programming languages as tools for building abstractions (Hoare, Dijkstra), "reason about the behavior of the system", type safe, memory safe, concurrency, strong and static typing, systems languages like C/C++.

## DBMS (Manish)

My pick is query optimization. SQL is declarative: you say what data you want, not how to get it. The system must then pick an execution plan from many equivalent ones (different join orders, different algorithms per operation, with or without indexes), and the slides point out that the cost gap between a good and a bad plan can be enormous. The hard part is that the optimizer must estimate costs without running anything, using statistics about the data, including guesses for the size of intermediate results, and those estimates are often wrong. I find it interesting because the user's one-line query hides a search problem that decides whether it takes milliseconds or hours.

**Slide words:** declarative vs procedural, parsing → optimization → evaluation, statistics, indexing, data independence (physical / logical / view levels), transactions (atomicity, concurrency control, recovery).
**Backup:** concurrency control. Full serializability is expensive, so databases use weaker isolation (e.g. snapshot isolation) that allows anomalies like write skew.

## Networks (Praveen) ⚠ no slides

Congestion control: how millions of independent senders share links fairly with no central coordinator. If everyone sends as fast as they can, the network collapses; if they're too cautious, capacity is wasted. TCP solves this with AIMD (additive increase, multiplicative decrease): each sender slowly raises its rate until it detects packet loss, then cuts it sharply, and this simple local rule converges to a roughly fair, efficient share. Newer algorithms like BBR estimate bandwidth and delay directly instead of reacting to loss. It's interesting because stable global behavior emerges from purely local decisions.

## Operating Systems (Sathya)

The interesting problem is how an OS keeps control of a machine while running programs it can't trust. A user program could loop forever, overwrite another process, or touch hardware directly. The solution needs hardware support: dual-mode operation (a mode bit separates user mode from kernel mode, and privileged instructions only run in kernel mode), system calls as the controlled way into the kernel, and a timer interrupt so the OS regains the CPU from any program that hogs it. On top of this, the OS multiplexes one CPU and limited memory across many processes, using the storage hierarchy and virtual memory to make it feel like each has its own machine. I like it because a few hardware bits and interrupts make multitasking safe.

**Slide words:** interrupt-driven OS, interrupt vector, trap / system call, user vs kernel mode, privileged instructions, timer, multiprogramming and timesharing, storage hierarchy and caching, process vs program.
**Backup:** priority inversion (Mars Pathfinder, 1997), where a low-priority task holding a lock indirectly blocks a high-priority one; fixed with priority inheritance.

## Cryptology (Shibam)

The most interesting problem is defining what "secure" even means. Kerckhoffs' principle says the algorithm is public and only the key is secret, so security must be stated against an attacker with a precise model: ciphertext-only, known-plaintext, chosen-plaintext, chosen-ciphertext. The standard formalization is indistinguishability: the adversary submits pairs of messages, gets back the encryption of one of them, and must guess which; the cipher is secure if it can't do better than chance. Simple ciphers fail this, e.g. the Hill cipher falls to a known-plaintext attack via Gaussian elimination, and even the one-time pad is malleable. Generic attacks like brute force, dictionaries and Hellman's time-memory trade-off show what any key size must withstand. It's fascinating that security rests on hardness assumptions we can't prove, and that Shor's algorithm threatens them.

**Slide words:** Kerckhoffs' principle, attack models (COA, KPA, CPA, CCA), indistinguishability game, non-malleability, time / data / memory complexity, brute force, dictionary, Hellman TMTO, symmetric vs asymmetric (hybrid TLS).

---

## Quick strategy

- Cover all 7 asked topics, even if a paragraph is shorter than you'd like. One answer is enough to pass.
- Structure: problem → why it's hard → the idea that helps → why it's interesting.
- One concrete example per topic (Spectre, FlashFill, query plans, AIMD, Hellman) makes an answer sound genuine.
