# Concept 2 and 6

Example shows how you can keep processes isolated by using semaphores to lock shared memory, so no two processes can be accessing the memory at the same time. This is also password protected in that the program cannot be run without the correct password.

Nonexample, this shows that the memory can be accessed at the same time by multiple threads and manipulate memory wrongly even though the check looks like it will work and without a password the program can be run by anyone.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%202-6/processIso.png)

The screenshot shows another example of process isolation where a virtual machine isolates memory and will not the real operating system see the virtual machine os or vice versa so that way the computers can not access files in the other.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%202-6/password.jpg)

The lock shows layering and how if you password protect things then only certain aspects of an application can be accessed.
