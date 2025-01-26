# unit-test-help
## What is Unit Test?
- Unit testing is a level of software testing where individual components or units of a software are tested. The purpose is to validate that each unit of the          software code performs as expected. A unit is the smallest testable part of software and it usually has one or a few inputs and a single output.

## Why Unit Test?
- Unit tests are conducted to ensure that each unit of the software works as intended, thereby guaranteeing the quality of the software. It helps in identifying and   fixing bugs at an early stage, which can save time and cost in the later stages of development. It also helps in maintaining and changing the code, as it ensures    that changes do not break the software or introduce new bugs.

## What are all the benifits by doing Unit Test?
- It helps in finding and fixing bugs early before the software goes into production.
- It simplifies code integration by ensuring that individual units work correctly.
- It helps in maintaining and changing code, as it provides a sort of documentation of the system.
- It improves the design of the code, as writing tests requires the developers to think through their design and interfaces.
- It encourages developers to write code that is easy to test and thus, more reliable.

## Who Will perform Unit Test?
- Unit tests are usually written and executed by software developers to ensure that code meets its design and behaves as intended.
  
## What are all the Unit Test frame work availabel?
- There are many unit test frameworks available depending on the programming language used. Some of the popular ones are:
  1. JUnit for Java
  2. NUnit for .NET
  3. PyTest for Python
  4. GoogleTest for C++

# Reference Document
https://google.github.io/googletest/

# Google Test (G-Test)
-----------------------
Google Test (also known as GTest) is a unit testing library for the C++ programming language, developed by Google. It is designed to be portable and to have a rich set of features.

Here are some key features and aspects of Google Test:

1. **Rich set of assertions:** Google Test provides a robust and extensive set of assertions to help you write tests. These include assertions for equality, inequality, string comparison, and more.

2. **Test fixtures:** With Google Test, you can define a test fixture class to set up a common testing environment for multiple test cases. This can reduce code duplication and make your tests clearer and easier to maintain.

3. **Test suites:** You can group related tests into a test suite, making it easy to run them together.

4. **Death tests:** Google Test supports "death tests", which verify that a program terminates in a certain way. This is useful for testing code that is expected to crash under certain conditions.

5. **Value-parameterized tests:** Google Test allows you to define a test case that takes a set of values as input. The test case will be instantiated and run once for each value, making it easy to run the same test logic with different inputs.

6. **Mocking support:** When used with Google Mock, Google Test provides powerful support for creating mock objects and setting expectations on them. This can help you isolate the code under test and write more focused, reliable tests.

7. **Automatic test discovery:** Google Test automatically discovers tests, so you don't have to manually list them. As long as your tests are linked into the binary, Google Test will find them.

8. **Flexible test running:** You can choose to run all tests, a single test, or a subset of tests that match a certain pattern. This gives you a lot of flexibility in how you run your tests.

