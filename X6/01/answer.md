_When first reading this chapter, keep a record of information that was new or surprising to you. Later, use that list to focus your further studies._

* aquire a ```unique_lock``` on a ```mutex``` to manipulate shared data
* ```unique_ptr``` has no space/time overhead relative to raw pointers
* a task is executed by a ```thread```, but tasks aren't explicitly modeled by the standard library (although a ```packaged_task``` is) - tasks are just function objects or pointers - ```thread t1 {function}``` will create and execute a new task
* a ```thread``` is constructed through a variadic template where the 0th arg is the function and 1-nth args are parameters to that function
* block on thread completion through ```join```
* ```ref()``` is needed to tell variadic template that the argument should be treated as a reference, not an object
* multiple locks can be acquired atomically: ``` unique_lock<mutex> lck1 {m1, defer_lock}; unique_locl<mutex> lck2 {m2, defer_lock}; lock (lck1,lck2);```
* thread sleeping - ```this_thread::sleep_for(milliseconds(20)); ```
* ```condition_variable``` is used to wait on some condition happening - eg message added to a queue:
	* ```condition.wait(lock, lambda)``` 
	* waiters are notified via ```condition.notify_one();``` 
	* note this is a *lock-based* mechanism
* ```future``` and ```promise``` allow for results to be handed back to other threads *without the use of a lock*
	* ```X result = future<X>.get()```
	* ```promise.set_value()``` or ```set_exception()```
* ```current_exception()``` lets you get at the ... current exception
* ```packaged_task``` simplifies promise/future handoff - pass the task to the ctor and obtain a future for the task. Don't have to muck around with promises.
* ```async()``` makes it even easier - pass the function + args, get the future back
* ```time_point``` values can be substracted to get a ```duration```
* ```numeric_limits``` return type min/max values
* ```iterator_traits``` define iterator flavors (random access, etc)
* The use of type traits to dispatch different implementations of a method (e.g. sorting a random-access collection vs. a sequential one) is an idiom known as _tag dispatch_. The type-trait is passed as a function argument and function overloading is used to make the right call.
* Type predicates are used to answer boolean questions about the nature of a type - common use case is via ```static_assert``` in templates to enforce constraints
* regular expression patterns are written with _raw string literals_ : ``` std::regex pat (R ".... ");``` - this allows for double quotes and backslashes to be included directly
* ```accumulate(...) ``` will sum values 
* RNGs are given a ```distribution``` - bell curve, uniform, etc.
* ```bind(...)``` binds arguments 1-N to a function defined by argument 0 and invokes the function


