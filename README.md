List Processes Task

This is a simple C++ program that lists all running processes on a Linux system using the ps command. It demonstrates how to execute system commands from within a C++ program using the popen function.

Description

This program uses the popen function to execute the ps -e command, which lists all running processes on a Linux system. The output of the command is captured and displayed in the terminal.
Requirements

    Linux-based operating system (e.g., Ubuntu, Fedora, CentOS, etc.).

    GCC compiler (to compile the C++ code).

    Basic knowledge of the Linux terminal.

How to Compile

    Clone this repository or download the source code:
 

    git clone https://github.com/your-username/your-repo-name.git
    cd your-repo-name

    Compile the program using g++:
    

    g++ list_processes.cpp -o list_processes

        list_processes.cpp is the source file.

        -o list_processes specifies the output executable name.

How to Run

After compiling the program, run it using the following command:


./list_processes
