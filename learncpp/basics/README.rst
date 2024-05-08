================================================================================
Basic Concepts in C++
================================================================================

Variable Initialization
--------------------------------------------------------------------------------
The modern way to initialize objects in C++ is to use a form of initialization 
that makes use of curly braces.  This is called list initialization (or uniform 
initialization or brace initialization).

List initialization comes in three forms::

    int width { 5 };    // direct list initialization of initial value 5 into variable width
    int height = { 6 }; // copy list initialization of initial value 6 into variable height
    int depth {};       // value initialization (see next section)

List initialization has an added benefit: “narrowing conversions” in list 
initialization are ill-formed. This means that if you try to brace initialize a 
variable using a value that the variable can not safely hold, the compiler is 
required to produce a diagnostic (usually an error). For example::

    int width { 4.5 }; // error: a number with a fractional value can't fit into an int


Specify Variables as Maybe Unused (C++17)
--------------------------------------------------------------------------------
C++17 introduced the [[maybe_unused]] attribute, which allows us to tell the 
compiler that we’re okay with a variable being unused. The compiler will not 
generate unused variable warnings for such variables.

The following program should generate no warnings/errors::

    int main()
    {
        [[maybe_unused]] double pi { 3.14159 };
        [[maybe_unused]] double gravity { 9.8 };
        [[maybe_unused]] double phi { 1.61803 };

        // the above variables will not generate unused variable warnings

        return 0;
    }

Additionally, the compiler will likely optimize these variables out of the 
program, so they have no performance impact.