---
description: Check this out!
---

# Chapter 0: Basics

##

In this section, we will be going over the basic syntax, control flow (for, while, range-based-for, if), functions w/ primitive args, overloading, variable declarations; (differences) stack + heap; automatic, dynamic, static, (thread\_local) storage durations; “abstract machine”; resources (standard, C++ ref, ISO CPP guidelines, totw)



## main.cpp

A C++ program needs to have a function named main to be an executable.

We usually call the source code of the executable with the same name: main.cpp

Below is a basic main.cpp file, with the function main, of type integer, returning 0.

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/main.cpp" %}

Another way to write main.cpp is with the parameter _argc_ and _argv,_ respectively representing the number of arguments passed to the executable and the arguments passed to the programs:&#x20;

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/main_2.cpp" %}

## Basic Syntax

### Hello world

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/hello_world.cpp" %}

How to compile this piece of code and get an output

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/hello_world_output.txt" %}

### Comments

```cpp
// This is a single-line comment

/*
This is a
multi-line comment
*/

```

### Variables / Types

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/variables_and_types.cpp" %}

* [ ] Pattern-match the commands in the **Hello World** lesson to compile the file in section **Variables and Types** to make an executable called _kittle\_cat_

## Control Flows

{% @github-files/github-code-block url="https://github.com/badumbatish/decal_on_a_car/blob/main/project_code/chapter_0/control_flow.cpp" %}

* [ ] Compile control\_flow.cpp and see check if you can correctly predict its output.

## Resources

* For basic problems,  , you can consult Chat-gippity : [https://chat.openai.com](https://chat.openai.com)
* main.cpp : [https://en.cppreference.com/w/cpp/language/main\_function](https://en.cppreference.com/w/cpp/language/main\_function)
* variables and types : [https://cplusplus.com/doc/tutorial/variables/](https://cplusplus.com/doc/tutorial/variables/)

