_When first reading this chapter, keep a record of information that was new or surprising to you. Later, use that list to focus your further studies._

* classes that encapsulate a pointer or some other dynamically allocated resource are referred to as 'handle' types

* RAII (Resource Acquisition Is Initialization) names the idiom used to obtain resources in the ctor and release them in the dtor

* ```std::initializer_list<T>``` can be passed to a ctor to support ```{ x, y, z }``` initialization syntax 

* virtual method calls are generally resolved through a vtbl (virtual lookup table) - each object carries a pointer to the vtbl; the vtbl is lookup table of method name to pointer-to-method. The table is consulted at runtime.

* move semantics allow for a 'rvalue' to be reallocated through assignment - for example, when returning a local object from a function by value (```x = f()```), or assigning the result of a +/- operation (```x = a+b```) 

* specifically, move semantics mean that for the state of the 'temporary' object is 're-wrapped' by the receiving object - no copy needed, no pass-by-reference or pass-by-pointer needed

* move semantics are supported through move ctor ```Type(Type&& t)```

* ```std:move(T)``` creates an rvalue suitable for passing to a move ctor for the provided object

* it is a compile-time error for a class to have a dtor without copy/assignment implementations

* copy + move ctors and assignment operations in abstract classes are problematic - they are not invoked dynamically based on the contents of the passed-in parameter  - ```Shape(Shape& c)``` will create a shape, not a Square, Circle, etc. 

* use ```= delete;``` against copy/move/assignment methods in class definitions to prevent the generation of default implementations by the compiler. This can be used for any operation.

* ```template <typename T>``` is the prefix for templatized functions, classes, etc

* Lambda expressions: ```[] (params) { ... }```
	* ```[&]``` - capture local names by reference
	* ```[=]``` - capture local names by copying
	* ```[&x, &y]``` - capture specific names only
	* ```[]``` - capture nothing

* Variadic templates - open-ended list of  arguments passed to a template that can be used through recursion:
	* ```template<Typename H, Typename... Tail> f(H head, Tail tail) { ... ; f(tail);}```

* Tyname aliases can be templatized:
	* ```template<typename T> using my_type = typename T::the_type;```
	* which can be used to do: ```my_type<N>``` - refer to types within a templatized type consistency - iterators, value-types, etc
