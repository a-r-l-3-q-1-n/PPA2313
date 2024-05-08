cmake_minimum_required(VERSION 3.28)
project(PPA2313)

set(CMAKE_CXX_STANDARD 26)

add_executable(PPA2313
#        Year-1/Semester-1/Homework-1/Exercise-1.cpp
#        Year-1/Semester-1/Homework-1/Exercise-2.cpp
#        Year-1/Semester-1/Homework-1/Exercise-3.cpp
#        Year-1/Semester-1/Homework-1/Exercise-4.cpp
#        Year-1/Semester-1/Homework-1/Exercise-5.cpp
#        Year-1/Semester-1/Homework-1/Exercise-6.cpp
#        Year-1/Semester-1/Homework-1/Exercise-7.cpp
#        Year-1/Semester-1/Homework-1/Exercise-8.cpp
#        Year-1/Semester-1/Homework-1/Exercise-9.cpp
#        Year-1/Semester-1/Homework-1/Exercise-10.cpp
#        Year-1/Semester-1/Homework-1/Exercise-11.cpp
#        Year-1/Semester-1/Homework-1/Exercise-12.cpp
#        Year-1/Semester-1/Homework-1/Exercise-13.cpp
#        Year-1/Semester-1/Homework-1/Exercise-14.cpp
#        Year-1/Semester-1/Homework-1/Exercise-15.cpp
#        Year-1/Semester-1/Homework-1/Exercise-16.cpp
#
#        Year-1/Semester-1/Homework-2/Exercise-1.cpp
#        Year-1/Semester-1/Homework-2/Exercise-2.cpp
#
#        Year-1/Semester-1/Homework-3/Exercise-1.cpp
#        Year-1/Semester-1/Homework-3/Exercise-2.cpp
#        Year-1/Semester-1/Homework-3/Exercise-3.cpp
#        Year-1/Semester-1/Homework-3/Exercise-4.cpp
#        Year-1/Semester-1/Homework-3/Exercise-5.cpp
#        Year-1/Semester-1/Homework-3/Exercise-6.cpp
#        Year-1/Semester-1/Homework-3/Exercise-7.cpp
#        Year-1/Semester-1/Homework-3/Exercise-8.cpp
#        Year-1/Semester-1/Homework-3/Exercise-9.cpp
#        Year-1/Semester-1/Homework-3/Exercise-10.cpp
#        Year-1/Semester-1/Homework-3/Exercise-11.cpp
#        Year-1/Semester-1/Homework-3/Exercise-12.cpp
#        Year-1/Semester-1/Homework-3/Exercise-13.cpp
#        Year-1/Semester-1/Homework-3/Exercise-14.cpp
#        Year-1/Semester-1/Homework-3/Exercise-15.cpp
#        Year-1/Semester-1/Homework-3/Exercise-16.cpp
#        Year-1/Semester-1/Homework-3/Exercise-17.cpp
#
#        Year-1/Semester-1/Homework-4/Exercise-1.cpp
#        Year-1/Semester-1/Homework-4/Exercise-2.cpp
#        Year-1/Semester-1/Homework-4/Exercise-3.cpp
#        Year-1/Semester-1/Homework-4/Exercise-4.cpp
#        Year-1/Semester-1/Homework-4/Exercise-5.cpp
#        Year-1/Semester-1/Homework-4/Exercise-6.cpp
#
#        Year-1/Semester-1/Homework-5/Exercise-1.cpp
#        Year-1/Semester-1/Homework-5/Exercise-2.cpp
#        Year-1/Semester-1/Homework-5/Exercise-3.cpp
#        Year-1/Semester-1/Homework-5/Exercise-4.cpp
#        Year-1/Semester-1/Homework-5/Exercise-5.cpp
#        Year-1/Semester-1/Homework-5/Exercise-6.cpp
#        Year-1/Semester-1/Homework-5/Exercise-7.cpp
#        Year-1/Semester-1/Homework-5/Exercise-8.cpp
#        Year-1/Semester-1/Homework-5/Exercise-9.cpp
#        Year-1/Semester-1/Homework-5/Exercise-10.cpp
#        Year-1/Semester-1/Homework-5/Exercise-11.cpp
#        Year-1/Semester-1/Homework-5/Exercise-12.cpp
#        Year-1/Semester-1/Homework-5/Exercise-13.cpp
#        Year-1/Semester-1/Homework-5/Exercise-14.cpp
#
#        Year-1/Semester-1/Homework-6/Exercise-15.cpp
#        Year-1/Semester-1/Homework-6/Exercise-16.cpp
#        Year-1/Semester-1/Homework-6/Exercise-17.cpp
#        Year-1/Semester-1/Homework-6/Exercise-18.cpp
#        Year-1/Semester-1/Homework-6/Exercise-19.cpp
#        Year-1/Semester-1/Homework-6/Exercise-20.cpp
#        Year-1/Semester-1/Homework-6/Exercise-21.cpp
#        Year-1/Semester-1/Homework-6/Exercise-22.cpp
#        Year-1/Semester-1/Homework-6/Exercise-23.cpp
#        Year-1/Semester-1/Homework-6/Exercise-24.cpp
#        Year-1/Semester-1/Homework-6/Exercise-25.cpp
#        Year-1/Semester-1/Homework-6/Exercise-26.cpp
#
#        Year-1/Semester-1/Homework-7/Exercise-27.cpp
#        Year-1/Semester-1/Homework-7/Exercise-28.cpp
#        Year-1/Semester-1/Homework-7/Exercise-29.cpp
#        Year-1/Semester-1/Homework-7/Exercise-30.cpp
#        Year-1/Semester-1/Homework-7/Exercise-31.cpp
#        Year-1/Semester-1/Homework-7/Exercise-32.cpp
#
#        Year-1/Semester-1/Homework-8/Exercise-1.cpp
#        Year-1/Semester-1/Homework-8/Exercise-2.cpp
#        Year-1/Semester-1/Homework-8/Exercise-3.cpp
#        Year-1/Semester-1/Homework-8/Exercise-4.cpp
#        Year-1/Semester-1/Homework-8/Exercise-5.cpp
#        Year-1/Semester-1/Homework-8/Exercise-6.cpp
#        Year-1/Semester-1/Homework-8/Exercise-7.cpp
#        Year-1/Semester-1/Homework-8/Exercise-8.cpp
#        Year-1/Semester-1/Homework-8/Exercise-9.cpp
#
#        Year-1/Semester-1/Homework-9/Exercise-1.cpp
#        Year-1/Semester-1/Homework-9/Exercise-2.cpp
#        Year-1/Semester-1/Homework-9/Exercise-3a.cpp
#        Year-1/Semester-1/Homework-9/Exercise-3b.cpp
#        Year-1/Semester-1/Homework-9/Exercise-3c.cpp
#        Year-1/Semester-1/Homework-9/Exercise-4a.cpp
#        Year-1/Semester-1/Homework-9/Exercise-4b.cpp
#        Year-1/Semester-1/Homework-9/Exercise-4c.cpp
#        Year-1/Semester-1/Homework-9/Exercise-5.cpp
#        Year-1/Semester-1/Homework-9/Exercise-6.cpp
#        Year-1/Semester-1/Homework-9/Exercise-7.cpp
#
#        Year-1/Semester-1/Homework-10/Exercise-1.cpp
#        Year-1/Semester-1/Homework-10/Exercise-2.cpp
#        Year-1/Semester-1/Homework-10/Exercise-3.cpp
#        Year-1/Semester-1/Homework-10/Exercise-4.cpp
#        Year-1/Semester-1/Homework-10/Exercise-5.cpp
#        Year-1/Semester-1/Homework-10/Exercise-6.cpp
#        Year-1/Semester-1/Homework-10/Exercise-7.cpp

#        ======/==========/===========/==============

#        Year-1/Semester-2/Homework-1/Exercise-1.cpp
#        Year-1/Semester-2/Homework-1/Exercise-2.cpp
#        Year-1/Semester-2/Homework-1/Exercise-3.cpp
#        Year-1/Semester-2/Homework-1/Exercise-4.cpp
#        Year-1/Semester-2/Homework-1/Exercise-5.cpp
#        Year-1/Semester-2/Homework-1/Exercise-6.cpp
#        Year-1/Semester-2/Homework-1/Exercise-7.cpp
#        Year-1/Semester-2/Homework-1/Exercise-8.cpp
#        Year-1/Semester-2/Homework-1/Exercise-9.cpp
#        Year-1/Semester-2/Homework-1/Exercise-10.cpp
#
#        Year-1/Semester-2/Homework-2/Exercise-11.cpp
#        Year-1/Semester-2/Homework-2/Exercise-12.cpp
#        Year-1/Semester-2/Homework-2/Exercise-13.cpp
#        Year-1/Semester-2/Homework-2/Exercise-14.cpp
#        Year-1/Semester-2/Homework-2/Exercise-15.cpp
#        Year-1/Semester-2/Homework-2/Exercise-16.cpp
#        Year-1/Semester-2/Homework-2/Exercise-17.cpp
#        Year-1/Semester-2/Homework-2/Exercise-18.cpp
#        Year-1/Semester-2/Homework-2/Exercise-19.cpp
#        Year-1/Semester-2/Homework-2/Exercise-20.cpp
#        Year-1/Semester-2/Homework-2/Exercise-21.cpp
#        Year-1/Semester-2/Homework-2/Exercise-22.cpp
#
#        Year-1/Semester-2/Homework-3/Exercise-1.1.cpp
#        Year-1/Semester-2/Homework-3/Exercise-1.2.cpp
#        Year-1/Semester-2/Homework-3/Exercise-1.3.cpp
#        Year-1/Semester-2/Homework-3/Exercise-2.1.cpp
#        Year-1/Semester-2/Homework-3/Exercise-2.2.cpp
#        Year-1/Semester-2/Homework-3/Exercise-2.3.cpp
#        Year-1/Semester-2/Homework-3/Exercise-3.cpp
#        Year-1/Semester-2/Homework-3/Exercise-4.cpp
#        Year-1/Semester-2/Homework-3/Exercise-5.cpp
#        Year-1/Semester-2/Homework-3/Exercise-6.cpp
#        Year-1/Semester-2/Homework-3/Exercise-7.cpp
#
#        Year-1/Semester-2/Homework-4/Exercise-1.cpp
#        Year-1/Semester-2/Homework-4/Exercise-2.cpp
#        Year-1/Semester-2/Homework-4/Exercise-3.cpp
#        Year-1/Semester-2/Homework-4/Exercise-4.1.cpp
#        Year-1/Semester-2/Homework-4/Exercise-4.2.cpp
#        Year-1/Semester-2/Homework-4/Exercise-5.cpp
#        Year-1/Semester-2/Homework-4/Exercise-6.cpp
#        Year-1/Semester-2/Homework-4/Exercise-7.cpp
#
#        Year-1/Semester-2/Homework-5/Exercise-1.cpp
#        Year-1/Semester-2/Homework-5/Exercise-2.cpp
#        Year-1/Semester-2/Homework-5/Exercise-3.cpp
#        Year-1/Semester-2/Homework-5/Exercise-4.cpp
#        Year-1/Semester-2/Homework-5/Exercise-5.cpp
#        Year-1/Semester-2/Homework-5/Exercise-6.cpp
#        Year-1/Semester-2/Homework-5/Exercise-7.cpp
#        Year-1/Semester-2/Homework-5/Exercise-8.cpp
#
#        Year-1/Semester-2/Homework-6/Exercise-1.cpp
#        Year-1/Semester-2/Homework-6/Exercise-2.cpp
#        Year-1/Semester-2/Homework-6/Exercise-3.cpp
#
#        Year-1/Semester-2/Homework-7/Exercise-1.cpp
#        Year-1/Semester-2/Homework-7/Exercise-2.cpp
#        Year-1/Semester-2/Homework-7/Exercise-3.cpp
#
#        Year-1/Semester-2/Homework-8/Exercise-1.cpp
#        Year-1/Semester-2/Homework-8/Exercise-2.cpp
#        Year-1/Semester-2/Homework-8/Exercise-3.cpp
#
#        Year-1/Semester-2/Homework-9/Exercise-1.cpp
#        Year-1/Semester-2/Homework-9/Exercise-2.cpp
#        Year-1/Semester-2/Homework-9/Exercise-3.cpp

#        Year-1/Semester-2/Homework-10/src/main.cpp

)
