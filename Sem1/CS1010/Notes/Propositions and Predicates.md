#### Proposition
A declarative statement that is either TRUE or FALSE.
Examples:
- Sunday is a holiday $\checkmark$
- Water is a solid. $\checkmark$
- Clean your room. $\times$
---

#### Logical Operators
1. NOT ($\neg$)
2. Logical AND ($\land$) or Conjunction
3. Logical OR ($\lor$) or Disjunction
4. Exclusive OR (XOR) ($\oplus$)
---

#### Conditional Statements or Implications
$p,q$ are two propositions.

$p \rightarrow q$ , read as "p implies q" or "if p then q"

The statement is FALSE only when p is TRUE and q is FALSE.

**Other English Constructs**
- p only if q
- q when p
- q whenever p
- q follows from p
- q is necessary for p
- p is sufficient for p
- p is necessary for p
- **q unless $\neg$p**

$A$ unless $B$ means: $\neg B \rightarrow A$ or equivalently $A \lor B$

---

#### Converse, Contrapositive and Inverse
Given a conditional statement: $p \rightarrow q$, its:
**Converse**: $q \rightarrow p$
**Contrapositive**: $\neg q \rightarrow \neg p$
**Inverse**: $\neg p \rightarrow \neg q$

![[image3.png]]

---

#### Biconditional Statements
$p,q$ are two propositions

$p \leftrightarrow q$ , read as "p if and only if q" (iff)

This is TRUE when both p and q are TRUE or both are FALSE.

---

#### Compound Propositions
Example: $(p \lor \lnot q) \rightarrow (p \land q)$  

#### Precedence of logical operators
$\lnot \ > \ \land \ > \ \lor \ > \ \rightarrow \ > \ \leftrightarrow$

**Examples**
![[Sem1/CS1010/Images/image1.png]]

**Bitwise OR and AND** - YK

#### Propositional Equivalence
Two compound propositions are said to be "logically equivalent" if they have the same truth values in all possible cases. Denoted by $\equiv$   

![[Sem1/CS1010/Images/image7.png]]

*Tautology*: A compound proposition is said to be a tautology if it is always TRUE, no matter what truth values the propositions that occur in it take.
Eg: $p \lor \lnot p$ 

Two compound propositions are logically equivalent if $p \leftrightarrow q$ is a Tautology.

*Contradiction*; A compound proposition is called a contradiction if it is always FALSE, no matter what truth values the propositions present in it take.
Eg: $p \land \lnot p$

**De Morgan's Law**
- $\lnot (p \lor q) \equiv \lnot p \land \lnot q$
- $\lnot (p \land q) \equiv \lnot p \lor \lnot q$

**More "Formulas"/"Identities"**
- $p \rightarrow q \equiv \lnot p \lor q$
- $(p \rightarrow r) \land (q \rightarrow r) \equiv (p \lor q) \rightarrow r$
- $(p \rightarrow r) \lor (q \rightarrow r) \equiv (p \land q) \rightarrow r$
- $\lnot (p \leftrightarrow q) \equiv p \leftrightarrow \lnot q$

#### Predicates and Quantifiers
Eg: $x > 3$ cannot be expressed in propositional logic

Predicate logic is propositional logic with variables.
$P(x)$ denotes a propositional function, P is the predicate and x is the subject.

*Quantifiers*: $\forall \ \ \exists$

*Logical Equivalence involving Quantifiers*:
- $\forall (P(x) \land Q(x)) \equiv \forall x P(x) \land \forall x Q(x)$
- $\exists (P(x) \lor Q(x)) \equiv \exists x P(x) \lor \exists x Q(x)$

*Negative Quantified Expressions*
- $\lnot (\forall x P(x)) \equiv \exists x (\lnot P(x))$
- $\lnot (\exists x P(x)) \equiv \forall x (\lnot P(x))$

**Nested Quantifiers** (*Order Matters*)

Eg: Negate this: $\forall x \exists y (xy=1)$ 
$\exists x \forall y (xy\not= 1)$ 

**Rules of Inference**
![[Sem1/CS1010/Images/image4.png]]

![[Sem1/CS1010/Images/image5.png]]

![[Sem1/CS1010/Images/image8.png]]