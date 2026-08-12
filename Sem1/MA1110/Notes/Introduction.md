### Basic properties of real numbers

**Law of Trichotomy**
For any two real numbers $x, y$, exactly one of the three statements holds:
- $x = y$
- $x > y$
- $x < y$
---

**Bounds**
- Let $A \subset R$ be nonempty. A real number $\alpha$ is called an upper bound of A if for each $x \in A$, we have $x \le \alpha$.
- Let $A \subset R$ be nonempty. A real number $\alpha$ is called a lower bound of A if for each $x \in A$, we have $x \ge \alpha$.
- Let $A \subset R$ be nonempty. We say A is bounded above in R, if there exists an upper bound of A. i.e $\exists \ \alpha \in R \ \text{ s.t } x \le \alpha, \forall \ x \in A$
- Let $A \subset R$ be nonempty. We say A is bounded below in R, if there exist a lower bound of A.    i.e $\exists \ \alpha \in R \text{ s.t } x \ge \alpha, \ \forall \ x \in A$
- An upper bound of a set or the lower bound need not be an element of the set. eg: $A =(a, b)$ both, a and b are the bounds of the set, but are not elements of the set.
- If the upper bound of a set is its element too, then it is called maximum of the set. similarly minimum.
- A subset $A \subset R$ is said to be bounded if it is both bounded above and bounded below. i.e $\exists m,M \in R \text{ s.t } m \le x \le M \ \forall x \in A$

---

**Supremum and Infimum**

Let $A \subset R$ be a nonempty set that is bounded above. A real number $\alpha \in R$ is called the *least upper bound of A*(LUB) or *supremum* of A, if:
1. $\alpha$ is an upper bound of A
2. if $\beta$ is any upper bound of A, then $\alpha \le \beta$

Denoted by: $\alpha = \text{sup } A = \text{lub } A$

Let $A \subset R$ be a nonempty set that is bounded below. A real number $\alpha \in R$ is called the *greatest lower bound*(GLB) or *infimum* of A, if:
1. $\alpha$ is a lower bound of A
2. if $\beta$ is any lower bound of A, then $\alpha \ge \beta$

Denoted by: $\alpha = \text{inf } A = \text{glb } A$

Example: $A = (0,1); \text{sup } A = 1; \text{inf } A = 0$ and neither 0 or 1 belong to A.

---

**LUB property of real numbers or Completeness Property**

Let $A \subset R$ be nonempty and bounded above. Then there exists $\alpha \in R$ such that $\alpha = \text{sup } A$.

$Q$ does not satisfy the Least Upper Bound Property.
The set $N$ is not bounded above in $R$

![[image2.png]]

**Archimedean Property**
For every $x, y \in R$ with x > 0, there exists $n \in N$ such that $nx > y$ .
*Proof by Contradiction*: Suppose $nx \le y \ \forall n \in N$. Then, $n \le y/x \ \forall \ n \in N$. Thus $y/x$ is the upper bound of N, contradicting the previous theorem.

**Density of Q in R**
Let $a,b \in R$ be such that $a < b$. Then there exists a rational number $r \in Q$ satisfying: $a < r < b$
*TODO: Proof*


$\text{max} \{a,b\} = (a+b+|a-b|)/2$
$\text{min} \{a,b\} = (a + b - |a-b|)/2$

---
