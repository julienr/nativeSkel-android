Native activity skeleton
========================
A C++ skeleton for an Android native activity. 
Based on the Android NDK native activity sample.

Usage
-----
Activity.h/.cpp provide a wrapper around the native activity API.
To use it, create a subclass of Activity, overriding the needed methods (at least drawImpl)

Have a look at jni/main.cpp for sample code.
