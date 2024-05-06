================================================================================
Basic Concepts in C++
================================================================================

Variable Initialization
--------------------------------------------------------------------------------
The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. 
This is called list initialization (or uniform initialization or brace initialization).

List initialization comes in three forms::

    int width { 5 };    // direct list initialization of initial value 5 into variable width
    int height = { 6 }; // copy list initialization of initial value 6 into variable height
    int depth {};       // value initialization (see next section)

List initialization has an added benefit: “narrowing conversions” in list initialization are ill-formed. 
This means that if you try to brace initialize a variable using a value that the variable can not safely hold, 
the compiler is required to produce a diagnostic (usually an error). For example::

    int width { 4.5 }; // error: a number with a fractional value can't fit into an int
    