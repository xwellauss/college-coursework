A sequence of real numbers is a function: $f : \mathbb{N} \rightarrow \mathbb{R}$ 
For each $n \in N$, we write $x_n = f(n)$

Intuitively, a sequence {$x_n$} converges to a real number $x$, if its terms become arbitrarily close to $x$ as $n$ becomes sufficiently large.

**Convergence of Sequences or Limit of a Sequence or Epsilon-N Definition**
Let $x_n$ be a sequence of real numbers and let $x \in R$. We say that $x_n$ converges to $x$ if for every $\epsilon > 0$, there exists $N \in \mathbb{N}$ such that $|x_n - x| < \epsilon \ \forall \ n \ge N$.

In this case, $x$ is called the limit of the sequence $x_n$.

We write $x_n \rightarrow x \text{ as } n \rightarrow \infty$ or $lim_{n \to \infty} x_n = x$.

The positive number $\epsilon$ may be chosen arbitrarily small.

Also, if the limit does exist(sequence converges), then:
$x_n \in (x-\epsilon, x+\epsilon), \ \forall \ n \ge N$
Equivalently, this interval contains all but finitely many terms of the sequence. i.e only finitely many terms of the sequence can stay outside the interval.

**$\epsilon$-neighborhood of a**
Given a real number $a \in \mathbb{R}$ and a positive number $\epsilon > 0$, the

**"Proving" Limits**
![[image3.jpeg]]

**Disproving Convergence or Proving Divergence**
*TODO: Attach image*

A sequence that is not convergent is called divergent. This does not mean that the terms must tend to infinity. A divergent sequence may oscillate or may become arbitrarily large.

To prove that a sequence is convergent, we must identify the limit and verify the definition of convergence.

To prove that a sequence is divergent, it is enough to show that no real number can be its limit.

**Cauchy Sequences**
A sequence of real numbers is said to be Cauchy if, for every $\epsilon > 0 \ \exists \ N \in \mathbb{N}$ such that $|x_n - x_m| < \epsilon, \ \forall m,n \ge N$

*Cauchy Criterion: A sequence of real number is Cauchy if and only if it is convergent.*
*For Real Numbers, the term Cauchy Sequence = Convergent Sequence*
![[image4.png]]


**Monotone Sequences**
- A sequence is said to be increasing, if $x_n \le x_{n+1} \ \forall n \in \mathbb{N}$
- A sequence is said to be strictly increasing, if $x_n < x_{n+1} \ \forall n \in \mathbb{N}$
- A sequence is said to be decreasing, if $x_n \ge x_{n+1} \ \forall n \in \mathbb{N}$
- A sequence is said to be strictly decreasing, if $x_n > x_{n+1} \ \forall n \in \mathbb{N}$
- A sequence is said to be monotone, if it is either increasing or decreasing.
- Constant sequence is both increasing and decreasing.

**Monotone Convergence Theorem**
An increasing sequence of real numbers is convergent if and only if it is bounded above.
A decreasing sequence of real numbers if convergent if and only if it is bounded below.

*Notation*: $x_n \downarrow x$ means sequence is decreasing and converges to $x$. $x_n \uparrow x$ means that sequence is increasing and converges to $x$.

**Sandwich Theorem**

![[image5.png]]

**Sequences diverging to $\infty$**

- We say that a sequence diverges to $+\infty$ if, for every $R \in \mathbb{R}$, there exists $N \in \mathbb{N}$ such that, $n \ge N \implies x_n > R$. and we write $lim_{n \to \infty} x_n = +\infty$
- We say that a sequence diverges to $-\infty$ if, for every $R \in \mathbb{R}$, there exists $N \in \mathbb{N}$ such that, $n \ge N \implies x_n < R$. and we write $lim_{n \to \infty} x_n = -\infty$

**Ratio Test**
Let $(u_n)$ be a sequence of positive real numbers such that, $lim_{n \to \infty} u_{n+1}/u_n = l$
Then:
- If $0 \le l < 1$: $lim_{n \to \infty} u_n = 0$
- If $l > 1$: $lim_{n \to \infty} u_n = +\infty$
- For $l = 1$, no conclusion can be drawn

**Root Test**
Let ($u_n$) be a sequence of positive real numbers such that, $lim_{n \to \infty} \sqrt[n]{u_n} = l$
Then:
- If $0 \le l < 1$: $lim_{n \to \infty} u_n = 0$
- If $l > 1$: $lim_{n \to \infty} u_n = +\infty$
- For $l = 1$, no conclusion can be drawn

**Subsequences**
Let ($r_n$) be a strictly increasing sequence of natural numbers. If ($x_n$) is any sequence, then the sequence ($x_{r_n}$) is called a subsequence of ($x_n$).

![[image6.png]]

Let ($x_n$) be a sequence converging to $x$, If ($x_{r_n}$) is a subsequence of $(x_n)$, then $x_{r_n} \rightarrow x$.

**Existence of a Monotone Subsequence**
Every real sequence has a monotone subsequence

**Bolzano-Weierstrass Theorem**
Every bounded real sequence has a convergent subsequence

---

