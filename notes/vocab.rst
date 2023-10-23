================================================================================
Vocabulary
================================================================================

Common terms in programming.


.. contents ::


Methods / Member Functions
^^^^^^^^^^^^^^^^^^^^^^^^^^

See `Method (computer programming) <https://en.wikipedia.org/wiki/Method_(computer_programming)>`_

    "A **method** in object-oriented programming (OOP) is a procedure associated with an object, and generally also a message. An object consists of state data and behavior; these compose an interface, which specifies how the object may be used. A **method** is a behavior of an object parametrized by a user."

In C++, class methods are referred to as `member functions <https://en.cppreference.com/w/cpp/language/member_functions>`_:

    "A non-static **member function** is a function that is declared in a member specification of a class without a static or friend specifier"

*Example*

    ::
        
        // simple Date
        // guarantee initialization with constructor
        // provide some notational convenience

        struct Date {
            int y, m, d; // year, month, day
            Date(int y, int m, int d); // check for valid date and initialize
            void add_day(int n); // increase the Date by n days
        };

    "... an initialization function that can’t be forgotten and for operations that are less likely to be overlooked. The basic tool for that is **member functions**, that is, functions declared as members of the class within the class body."

    *B. Stroustrup: Programming – Principles and Practice Using C++ (Second Edition). Addison-Wesley. 2014. ISBN 978-0321-992789.*
