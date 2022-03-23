_List five language features offered by the 1985 version of C++, five features added by C++98, and finally five new features added by C++11. In each case, order the features in order of importance and for each feature write a sentence describing its role in programming._

### 1985

1. *Classes* - introduce new types that can be treated similarly to built-in types
2. *Templates* - support generic programming - functions and classes with types defined at compile-time
3. *New/delete freestore management* - clean and simple memory management for custom types
4. *Operator overloading* - make user-defined types look and feel like built-in types
5. *References* - enable code that acts on objects without requiring pointer-dereferencing - means that templates can be written that act on 'pointed-to' things and concrete things in a uniform way


### C++98
1. *Abstract classes* - enables modelling of interfaces or partial implementation in a class hierarchy
2. *Const member functions* - define functions that do not change the state of an object
3. *Protected members* - define members that are only accessible to derived classes
4. *Multiple inheritance* - inherit interface/implementation from multiple base classes
5. *Static member functions* - provide class-scoped functions that do not operate on an object


### C++11
1. *auto types* - have the compiler figure out the exact type and catch any errors without having to type the entire type name by hand
2. *namespaces* - partition class/function/etc names into separate namespaces to avoid accidental name clashes in the global (default) namespace 
3. *enum classes* - model enumerations as classes that block accidental type conversions and provide scoped names (avoiding common pain-points of C-based enums)
4. *type aliases* - define shorthand names for long/complex type names (these can be templatized to support common aliases across templatized classes such as collections)
5. *constexpr* - support expressions that can be evaluated at compile-time for performance


