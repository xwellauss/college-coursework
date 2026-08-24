#### Introduction to Proofs

**Direct Proof**
To show: $\forall x P(x) \rightarrow Q(x)$

We start by taking an arbitrary t from the domain of x and assume that P(t) is true. Using a series of deductions or various rules of inference, we finally infer that Q(t) is true.

**Proof by Contraposition**
To show: $p \rightarrow q$, it is enough to show that $\lnot q \rightarrow \lnot p$

Eg: Let n be an integer. Prove that, if 3n+2 is odd, then n is odd.
If n is even, then 3n+2 is even.

**Vacuous Proofs or Trivial Proofs**
Statements like $\forall x, P(x) \rightarrow Q(x)$. The case where P(x) is FALSE, the above statement is vacuously TRUE.

**Proof by Contradiction**
To show: $p$ is TRUE
Assume $p$ is FALSE, ($\lnot p$ is TRUE). Using a series of logical deductions, show that $q$ is TRUE, which we know is a Contradiction. $\lnot p \rightarrow q$.

$\lnot q$. Therefore $p$ is TRUE.

Eg: Show that at least 4 of any 22 days must fall on the same day of the week.

Assume that statement is FALSE.
\# Sundays $\le 3$
\# Mondays $\le 3$
...

3 \* 7 = 21

i.e days given $\le$ 21. which is a contradiction

**Proof by Equivalence**
Using $\leftrightarrow$ bijection, if and only if

To prove a theorem that is a biconditional statement, that is, a statement of the form p $\leftrightarrow$ q, we show that p $\rightarrow$ q and q $\rightarrow$ p are both true. The validity of this approach is based on the tautology:
(p $\leftrightarrow$ q) $\leftrightarrow$ (p $\rightarrow$ q) $\land$ (q $\rightarrow$ p). 

Eg: Prove "If n is a positive integer, then n is odd if and only if $n^2$ is odd"
Let n be a positive integer
- if $n$ is odd, then $n^2$ is odd.
- if $n^2$ is odd, then $n$ is odd.
Prove these two individually.

![[Sem1/CS1010/Images/image2.png]]


**Counterexamples**
We only need to find a counterexample which disproves the given statement.

**Exhaustive Proofs or Proof by cases**
To show: $(P_1 \cup P_2 \cup P_3...) \rightarrow q$
Instead we show: $(P_1 \rightarrow q) \land (P_2 \rightarrow q)...$

**Constructive Existence Proofs**
...

**Non-Constructive Existence Proofs**
Eg: Show that there exist irrational numbers x and y, such that $x^y$ is rational.

*Proof*: Take $x = \sqrt 2, y = \sqrt 2$
Case 1: $\sqrt 2 ^ \sqrt 2$ is rational. Then we are done.
Case 2: Suppose it is irrational. Then, x = $\sqrt 2 ^ \sqrt 2, y = \sqrt 2$
$x^y = \sqrt 2 ^ 2 = 2$

#### Normal Forms
- Disjunctive Normal Form (sum of elementary products)
- Conjunctive Normal Form (product of elementary sums)
*A variable or its negation is called a literal.*

Eg: Convert to DNF
![[Sem1/CS1010/Images/image6.png]]
if we stop at step 1 only, then it is CNF

