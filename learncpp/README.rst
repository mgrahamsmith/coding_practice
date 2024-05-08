================================================================================
Tutorial From `learncpp.com <http://www.learncpp.com>`_
================================================================================

Examples and practice programs from `learncpp.com <http://www.learncpp.com>`_.


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

See `default_comipler_flags.txt <default_comipler_flags.txt>`_ for the default 
compiler options used in this tutorial.  See below explanations for more details
on these options.

Dubug Configuration:
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Add :code:`-ggdb` to the command line when debugging and :code:`-O2 -DNDEBUG` 
for release builds. Use the former for now.

Disable Compiler Extensions
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
You can disable compiler extensions by adding the :code:`-pedantic-errors` flag 
to the compile command line.

Compiler Warnings
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Best practice: Don’t let warnings pile up. Resolve them as you encounter them 
(as if they were errors).  Otherwise a warning about a serious issue may be 
lost amongst warnings about non-serious issues.  Turn your warning levels up to 
the maximum, especially while you are learning. It will help you identify 
possible issues.

Add the following compiler flags to the command line: 
:code:`-Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion`

Treat Warnings as errors
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
It is considered best practice to treat warnings as errors. This will force you 
to resolve all issues causing warnings.

Add :code:`-Werror` to the command line.

Choosing a Language Standard
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
In professional environments, it’s common to choose a language standard that is 
one or two versions back from the latest standard.
For the learncpp.com tutorial, currently the C++17 standard is targeted.

Add :code:`-std=c++17` to the command line.
