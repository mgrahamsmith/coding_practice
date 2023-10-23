================================================================================
General Notes
================================================================================

General notes and info on programming topics.

.. contents::

Vocabulary
--------------------------------------------------------------------------------


Methods / Member Functions
^^^^^^^^^^^^^^^^^^^^^^^^^^

In C++, class methods are referred to as `member functions <https://en.cppreference.com/w/cpp/language/member_functions>`_:

    "A non-static member function is a function that is declared in a member specification of a class without a static or friend specifier"

*Example*

    ::
        
        vector<double> v; // start off empty; that is, v has no elements
        v.push_back(2.7); // add an element with the value 2.7 at end (“the back”) of v
                        // v now has one element and v[0]==2.7

    Note the syntax for a call of push_back(). It is called a *member function* call; push_
    back() is a member function of vector and must be called using this dot notation:
    member-function-call:
    object_name.member-function-name ( argument-list )

    Stroustrup: Programming – Principles and Practice Using C++ (Second Edition). Addison-Wesley. 2014. ISBN 978-0321-992789.