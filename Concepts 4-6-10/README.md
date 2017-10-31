# **Overview:**

This example and non-example pair serve to cover concepts 4, 6, and 10 (least privilege, layering, and minimization repsectively).

The example is a tier-based file system. The first thing the user will be prompted to do is login as either a guest, user, or the admin. Depending on whether you are a guest, user, or admin, you will have different file permissions. In this case, guests can only check to see if the file with a given name exists, users can only read from files, and the admin has both read and write permissions for files.

The non-example does away with this login system. Rather, every user immediately has access to all file permissions as soon as they run the program.

_Note: The file MUST be included in the current working directory._

For each concept: I will discuss how the example serves fufills the concept, whereas the non-example does away with the inclusion of that respective concept.

# Concept 4 (Least Privilege):

In the example, least privilege is demonstrated by the permissions assocoiated with the 3 levels of clearance (guest, user, admin). A regular user may not need/want to write to files at the risk of ruining the integrity of them. Similarly, we may not want guests being able to read files which may contain sensitive information. By closing off unnecessary functionality, we are ensuring that the individual using the program will not be allowed to do anything more than they should, or prevented from doing anything they should be able to do.

In the non-example, anyone can do anything to a file. If someone simply stumples across the executable file, they can cause some serious harm to important files, knowingly or otherwise.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%204-6-10/least_privilege.jpg)

_This illistrates the concept of least privilege by pointing out how you can get into trouble when completing tasks with more privileges than necessary._

# Concept 6 (Layering):

In the example, the login serves as layering in the fact that you must first do this if you want to have any sort of file access. Although there is the option to sign-in as a guest, which essentially does not require anything more than just typing in "guest", it still serves as a method of requiring the user to conquer this task before moving on.
 
In the non-example, there is no such step that the user needs to conquer. They can immediately start working with files.
 
 ![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%204-6-10/layering.jpg)
 
 _This picture shows off the importance of good layering. In this example, given a proper wall, a door is the layering required to get into the room (which can serve as whatever functionality the user is trying to get to). In order to proceed, they must first open the door. However, in this example the wall does not do a good job of making the door (layering) necessary, and it can be skipped. For layering to be successful, there cannot be a work around._

# Concept 10 (Minimization):

Due to the inclusion of the concept of least privilege, minimization comes hand-in-hand (as stated in the powerpoint: _"The goal of minimization is to simplify and decrease the number of ways that software can be exploited. This can include turning off ports that are not needed, reduce the amount of code running, **use the concept of least privilege** and turn off unneeded features."_) Because we are minimizing the functionality of someone using the program based off of their permissions, we are preventing unecessary functionality from being present where it does not need to be. For example, if there was a vunerability in the ability to write to a file, having that excluded from guests and standard users and only available to people who would not seek to exploit that vunverability (the admin) we can help protect the software.

In the non-example, all code is always able to be ran at any given time. In the aforementioned example, anyone would potentially be able to exploit a vunerability in any section of the available functionality.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%204-6-10/minimization.jpg)

_This picture illistrates the concept of minimization in the fact that the flashlight app on the left is requiring way more permissions than necessary. When using it, there is a chance to do sinister things to the user by exploiting these permissions, where they simply are not available in the flashlight app on the left. The left app is minimizing the risk of something bad happening to the user in this regard._

________________________________________________________________________________________________________________________________________
