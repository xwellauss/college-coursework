okA set is an unordered collection of objects.

**Notation**
- *Roster Form: list all elements, seperated by commas.
- *Set Builder*:  eg: {$x \in \mathbb{Z^+} | \exists k \in \mathbb{Z} (x=k^2) \text{ and } x < 50$}

- Order does not matter in a set.
- $\phi$ is the empty set. {$\phi$} is a set containing one element, which happens to be the empty set.
- $U$ denotes the universal set, the set of all elements
- Sets can be elements of other sets.
- Order and Repetition does not matter in a set.

#### Russell's Paradox of Self Reference
![[Sem1/CS1010/Images/image9.png]]

![[Sem1/CS1010/Images/image10.png]]

#### Set Equality
Two sets A and B are equal iff they contain the exact same elements. $\forall (x \in A \leftrightarrow x \in B)$. We write A = B, if they are equal sets.

#### Subsets
The set A is a subset of B, denoted by $A \subseteq B$, if and only if every element of A is also an element of B. $A \subseteq B \leftrightarrow \forall x(x \in A \rightarrow x \in B$.

- $\phi \subseteq S$
- $S \subseteq S$

*Proper Subset*: If $A \subseteq B$ but A != B, we say A is a proper subset of B, denoted by $A \subset B$
![[image11.png]]

**Cardinality**: The cardinality of a finite set S, denoted by |S|, is the number of distinct elements in S.

**Power Set**
Given a set A, the power set of A, denoted by $P(A)$, is the set of all subsets of A.
|P(A)| = $2^n$

#### Tuples
The ordered n-tuple($a_!, a_2, ..., a_n$) is an ordered collection.

#### Cartesian Product
The cartesian product of sets A and B, denoted by AxB, is the set of all ordered pairs (a,b) where $a \in A$ and $b \in B$

A x B = {$(a,b) | a \in A \land b \in B$}

### Set Operations
##### Union
The union of sets A and B, denoted by $A \cup B$ is the set containing elements that are in A or in B or both.
$A \cup B$ = {$x|x \in A \lor x \in B$}

##### Intersection
The intersection of sets A and B, denoted by $A \cap B$, is the set containing elements that are in both A and B.
$A \cap B$ = {$x|x \in A \land x \in B$}

*Disjoint Sets*: If two sets have no elements in common. ($A \cap B = \phi$)

![[image12.png]]

##### Complement
The complement of set A(wrt U), denoted by $A^c$ or $\overline{A}$, is the set of elements in U that are not in A.

##### Difference
The difference of sets A and B, denoted by A - B, is the set containing elements of A that are not in B.

$A - B = {x | x \in A \land x \not \in B} = A \cap B^c$

![[image13.png]]

![[image14.png]]

#### Proofs
![[image15.png]]

![[image16.png]]

![[image17.png]]

