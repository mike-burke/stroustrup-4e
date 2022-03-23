_What is an invariant and what good might it do?_

An invariant defines a rule about the state of a program or data that must never be violated. Examples:
* a pointer to some data object must never be null
* the value of an integer must always be more than 41
* the number of elements in a container must always equal its size

Invariants provide a way for engineers to think about and test for program correctness. They can be written as comments, but may also be codified as assertions or runtime checks. Invariants are increasingly useful for programs with complex state and/or where that state can be manipulated through many different channels (invoked by the object itself or some external caller).
