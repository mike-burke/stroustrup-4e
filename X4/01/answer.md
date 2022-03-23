_When first reading this chapter, keep a record of information that was new or surprising to you. Later, use that list to focus your further studies._

* string types can be concatenated via operator +()
* char will implicitly convert to int (thanks to C)
* reading from an inputstream returns a predicate that can be used in if statements
	```if (is>>c)```
* this is a nice concise way of reading + validating input streams
	```if (is>>c && c=='{' && is>>c2 && c2=="")```
* structs can be initialized memberwise:
	``` Entry e {name,number};```
* setstate(ios::failbit) to mark inputstream as corrupt/failed
* ```is >> c``` will skip whitespace by default
* this is a nice idiom for reading multiple entries:
	```for (Entry ee; cin >> ee;) {...} ```
* containers can be initialized like this:
	```Vector<Entry> v = { {name,number}, {name,number} ...}```
* ```vector``` is not range checked
* the ```list``` is doubly linked
* iterators are semi-closed ranges [b,e) - end is one-past the last element
* the ```map``` is a (sorted) search tree, not a hash map - use ```unorderd_map``` for that
* container library naming convention:
	* multiX - an X where values (or keys) are non-unique
	* unorderedX - an X where values are not ordered
* use ```back_inserter``` to add items to the back of a collection - it is an example of an 'insert iterator'
* an ```ostream_iterator``` can be assigned to in order to write values: ```*os = "my string"```, but you have to increment the iterator after each write (```++os```)
* lambda syntax: ```[] (params) { ...code ... }```


