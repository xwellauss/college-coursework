	 **Infinite Series**
Let ($a_n$) be a sequence of real numbers. A formal expression of the form $\sum_{n=1}^{\infty}a_n$ or simply $\Sigma a_n$ or $\sum_{n} a_n$ is called an infinite series

*Partial Sum*: Let $\sum_{n=1}^{\infty}$ be an infinite series. For each $n \in \mathbb{N}$, the finite sum, $s_n = a_1 + a_2 + ... + a_n$ is called the partial sum of the series.

*Convergence*: An infinite series is said to be convergent if the sequence of partial sum $s_n$ is convergent. If $s_n \rightarrow s$, then we call $s$ the sum of the series and write $sum_{n=1}^{\infty} a_n = s$ 

*Divergent Series*: An infinite series is said to be divergent if the sequence of partial sums $s_n$ is divergent.
Example:
![[image7.png]]

![[image8.png]]

**Theorem**: Let $m$ be a natural number. Then, the two series $\sum_{n=1}^{\infty}a_n$ and $\sum_{n=m+1}^{\infty}a_n$ converge or diverge together. 
i.e removing or adding a finite number of terms from the beginning of the series does not affect the convergence or divergence.

*Algebra of Convergent Series*: Let $\sum_{n=1}^{\infty}a_n, \sum_{n=1}^{\infty}b_n$ be two convergent series with $A,B$ as sums
- $\sum_{n=1}^{\infty} a_n+b_n$ is convergent and equal to $A+B$
- $\forall \lambda \in \mathbb{R}$, the series $\sum_{n=1}^{\infty}\lambda a_n$ is convergent and equal to $\lambda A$

**Cauchy Criterion for Convergence**
The series $\sum_{n=1}^{\infty}a_n$ converges if and only if for every $\epsilon > 0$  there exists $N \in \mathbb{N}$ such that $n,m \ge N \implies |s_n-s_m|<\epsilon$. Thus, the infinite series converges if and only if for every $\epsilon < 0$ there exists $N \in \mathbb{N}$ such that $n>m\ge N \implies |a_{m+1} + a_{m+2}+...+a_n|<\epsilon$ 

*Proof*: The series converges if and only if the sequence $a_n$ converges. i.e $a_n$ is a Cauchy sequence, which is equivalent to saying $s_n$ is a Cauchy sequence.

**Theorem**: Suppose that the series $\sum_{n=1}^{\infty}a_n$ converges to s. Then, for every $\epsilon > 0$, there exists $N \in \mathbb{N}$ such that $|\sum_{n=N+1}^{\infty}a_n| < \epsilon$ 
*Proof*: Let $\epsilon > 0$ be given. Since $s_n \to s$, there exists $N \in \mathbb{N}$ such that $|s-s_N|<\epsilon$. Since,  $\sum_{n=N+1}^{\infty}a_n = s - s_N$, it follows that $|\sum_{n=N+1}^{\infty}a_n| = |s - s_N| < \epsilon$.


**Theorem**: If the series $\sum_{n=1}^{\infty}a_n$ converges, then $lim_{n \to \infty}a_n = 0$ 
*Proof*: Let $s_n = \sum_{k=1}^{\infty}a_k$ be a sequence of partial sums. Since the series converges, $s_n$ converges. By Cauchy Criterion for sequences, for every $\epsilon > 0$ there exists $N \in \mathbb{N}$ such that $|s_n-s_m|<\epsilon \ \forall m,n \ge N$. Now let $n \ge N+1$, then $n-1 \ge N$ and therefore, $|a_n|=|s_n-s_{n-1}| < \epsilon$. Hence, $a_n \to 0$

**Theorem**: If the series $\sum_{n=1}^{\infty}|a_n|$ converges, then the series $\sum_{n=1}^{\infty}a_n$ also converges
*Proof*: Let $s_n = \sum_{k=1}^{n}a_k$ and $\sigma_n = \sum_{k=1}^{n}|a_k|$ denote the sequences of partial sums.
Since, $\sigma_n$ converges, it is a Cauchy sequence. Thus, for every $\epsilon > 0$, there exists $N \in \mathbb{N}$ such that $|\sigma_n - \sigma_m| < \epsilon \ \forall n > m \ge N$.

Then, $|s_n - s_m| = |a_{m+1}+a_{m+2}+...+a_n| \le |a_{m+1}|+...+|a_n|=|\sigma_n - \sigma_m| < \epsilon$. Hence, $s_n$ is also a Cauchy sequence and the series also converges.

Eg: ![[image9.png]]

---

#### Tests of Convergence of a series of positive terms

**Theorem**: A series of positive real numbers $\sum_{n=1}^{\infty}a_n$ is convergent if and only if the sequence of partial sums ${s_n}, s_n = \sum_{k=1}^{\infty}a_k$ is bounded above.

Since $s_n$ is a monotone increasing sequence, if it is not bounded above, then $lim_{n \to \infty}s_n = \infty$. Hence, the series $\sum_{n=1}^{\infty}a_n$ diverges to infinity. Therefore, a series of positive real numbers either converges to a finite real number or diverges to infinity.

**Theorem**: (Comparison Test) Let $\sum_{n=1}^{\infty}a_n, \sum_{n=1}^{\infty}b_n$ be two series of non negative real numbers. Suppose, that $a_n \le b_n$ for all $n \in \mathbb{N}$. Then: 
- If $b_n$ series converges, then $a_n$ series also converges
- If $a_n$ series diverges, then $b_n$ series also diverges.

**Theorem** (Limit form of Comparison Test):
Let $\sum_{n=1}^{\infty}a_n, \sum_{n=1}^{\infty}b_n$ be two series of positive real numbers. If $\lim_{n \to \infty}a_n/b_n = l$
where, 0 < l < $\infty$, then the two series either both converge or both diverge.

If $lim_{n \to \infty} a_n/b_n = 0$, then $\sum_{n=1}^{\infty}a_n$ converges whenever $\sum_{n=1}^{\infty}b_n$ converges
If $lim_{n \to \infty} a_n/b_n = \infty$, then $\sum_{n=1}^{\infty}a_n$ diverges whenever $\sum_{n=1}^{\infty}b_n$ diverges

**Theorem** (p-Series Test):
The series $\sum_{n=1}^{\infty}1/n^p$ converges if p > 1 and diverges if p < 1

**Theorem** (d'Alembert's Ratio Test):
Let $\sum_{n=1}^{\infty}a_n$ be a series of positive real numbers. Suppose that: $\lim_{n \to \infty} a_{n+1}/a_n = r$. Then, 
- if 0 < r < 1, then the series $\sum_{n=1}^{\infty}a_n$ converges
- if r > 1, then the series $\sum_{n=1}^{\infty}a_n$ diverges
- if r = 1, then the test is inconclusive

**Theorem** (Cauchy's Root Test):
Let $\sum_{n=1}^{\infty}a_n$ be a series of positive real numbers. Suppose that: $\lim_{n \to \infty} \sqrt[n]a_n = r$. Then,
- if 0 < r < 1, then the series $\sum_{n=1}^{\infty}a_n$ converges
- if r > 1, then the series $\sum_{n=1}^{\infty}a_n$ diverges
- if r = 1, then the test is inconclusive

**Theorem** (Gauss's Test):
Let $\sum_{n = 1}^{\infty}a_n$ be a series of positive real numbers. Suppose $a_n/a_{n+1}=1+\alpha / n + b_n / n^p$ , where p > 1 and {$b_n$} is a bounded sequence. Then, $\sum_{n=1}^{\infty}a_n$ converges if $\alpha > 1$ and diverges if $\alpha \le 1$.

**Big O Notation**
![[image10.png]]

**Alternative Form of Gauss's Test**
Let $\sum_{n=1}^{\infty}a_n$ be a series of positive real numbers. If

$a_n/a_{n+1}=1+\alpha / n + O(1/n^p), p > 1$, then the series converges if $\alpha > 1$ and diverges if $\alpha \ge 1$

**Tests for convergence of Alternating Series**
A series of the form $\sum_{n=1}^{\infty}(-1)^{n+1}a_n$, where $a_n$ is a sequence of positive terms is called an alternating series.

*Absolutely Convergent Series*: An infinite series $\sum_{n=1}^{\infty}a_n$ is said to be an absolutely convergent series if $\sum_{n=1}^{\infty}|a_n|$ is convergent.

An absolutely convergent series is convergent.

