================================================================================
Tutorial From `learncpp.com <http://www.learncpp.com>`_
================================================================================

Examples and practice programs from `learncpp.com <http://www.learncpp.com>`_.

.. contents::

Compiling and running a C++ Program
--------------------------------------------------------------------------------
Install g++ compiler in (assuming Ubuntu environment)::
    
    $ sudo apt install g++

Compile the program::

    g++ -o hello_world.out hello_world.cpp

Running the program::

    $./hello_world.out

Build Configurations for GCC/G++ Users 
--------------------------------------------------------------------------------
Add `-ggdb` to the command line when debugging and `-O2 -DNDEBUG` for release builds. Use the former for now.