# **Overview:**

As stated in class, we would have the option to incorperate multiple security principles into a single example if we chose to do so. This example serves to cover 4 of the 10 security concepts, namely: resource encapsulation, abstraction, data hiding and simplicity.

I chose to try to tackle the concepts this way to get the most out of the class. I am taking this class as a means to help better protect the software I write. Therefore, I believe it would be more beneficial to apply the concepts to a concrete example (even though this is not a great example of a useful program) rather than arbitrary code for the sake of showing how the concepts work. It also helped that there is a lot of overlap between the concepts, and by applying certain coding strategies you can ensure you are following multiple security concepts.

First, it is important to understand what the example actually does before we can discuss the application of the security concepts that can be found within. I took the idea from an Algorithms and Data Structures project I worked on. This project aims to provide a solution to the following problem:

_Propose a data structure that supports the stack push and pop operations as well as a third operation, findMin, which returns the smallest element in the data structure. Ensure that all of these operations are able to run in O(1) or constant time as the worst case._ 

To achieve this, I created a class which I named a SuperStack, which is really just an object that contains two private STL stack objects. The SuperStack object then uses its internal methods to interact with the two stacks and return the operation request results to the user. This gives the user the impression that it is one single data structure entity that is providing the necessary operations in constant time. Additionally, the i/o for this application is very straight-forward and uses error handling (at least in the good example, I did not bother in the bad one). Both the good and bad example do exactly the same thing and you can achieve the same results as long as you are intelligently using the bad example. The difference comes down to the implementation of the two separate examples and how the good chooses to follow the security principles, where the bad example does not.

Because this example covers 4 security concepts in one, I will go into depth about how these concepts are covered in the example and where they fail in the non-example individually below:

# Concept 3 (Resource Encapsulation):

This example provides resource encapsulation through the SuperStack class. Neither of the stacks are directly accessable by the user. The only way to interact with the stacks, is by using the SuperStack methods. In other words, the resources (i.e. stacks) and encapsulated by the SuperStack class.

In the bad example, all of the stacks are global variables in the cpp file. This means that at any time they are available for the user to modify, should they find a way to do that.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%203-7-8-9/resource_encapsulation.jpg)

_This illustrates the concept of resource encapsulation because the user (employee) is free to do whatever they want with the data (on the job work) as long as they follow the classes (bosses) methods of performing that task._

# Concept 7 (Abstraction):

Abstraction can also be seen in the SuperStack class. The idea of a "super stack" is just that, a stack which is capable of performing a task that a traditional task could not (i.e. find min value in constant, O(1) time). This removed the clutter of exactly how you would do that from the user, so that all they know is that they are going to find the minimum value, without the unecessary detail of how it works.

In the non-example, every operation shows you EXACTLY how this is done using two stacks. It is no longer a single SuperStack performing a task, but just two seprate stacks doing their own thing in a way that can achieve the intended functionality.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%203-7-8-9/abstraction.jpg)

_This illustrates the concept of abstraction because it is a bunch of separate pieces that each perform their own separate task well, coming together to create a complete working piece. As this pertains to the example, the SuperStack is one of these pieces, capable of performing the necessary data operations (push, pop and min) very well, but not being able to do anything else besides this._

# Concept 8 (Data Hiding):

Because the stacks can be found in the private SuperStack field, the data is well hidden from the user. They are not able to directly access the information contained within the stacks. While this example may seem trivial of why you may not want people to have access to the data, pretend that the data being stored in the super stack is highly confidential (although then pop and min may not be great user options). Because the stack data is protected by the SuperStack class, they could not access the data unless they found a way around the only direct channel given to maipulate the stack data.

Again, in the non-example all of the stacks are global. There is nothing stopping someone from simply manipulating the stack data as they see fit. I think this would be better illistrated if perhaps certain SuperStack operations require certain permissions (perhaps there is some extensibility for future concepts in this example...). In this case, the non-example would even more clearly demonstrate why you do not want data storage being global!

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%203-7-8-9/data_hiding.jpg)

_Not trying to get political, but this image illustrates data hiding well. In this case the user "has access" to the data... but not really since they are privately hidden within the SuperStack class._

# Concept 9 (Simplicity):

This is probably the weakest argument I felt was worth including. I could have tried to push more principles out of the example in its current version, but felt as though I could better illustrate those principles separately, as I still have time for the remaining concepts not already covered. _**Anyways...**_ I provide the user with a very simple method of interacting with the SuperStack using i/o. I do not let them perform more than a single task at a time, such that they could get themselves into trouble. Not to mention, all methods are very concise in the example and it is clear what is happening. Should a vunerability present itself, it would be very easy to figure out where they were able to access the private stack data.

The same cannot be said for the non-example. While I still only allow the user to perform one action at a time (part of the reason why I felt this was not as strong of an argument as the other 3 principles), the code that goes into the actions performed is much more complicated. You see the entire method in the SuperStack class essetially copy and pasted 3 times, with some minor stack variable name changes. This creates the problem of adding even more potentially vunerable points, as well as making them harder to spot and fix.

![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-joshsloan/blob/master/Concepts%203-7-8-9/simplicity.jpg)

_I believe this image is self-explanitory._

----------------------------------------------------------------------------------------------------------------------------------------

Conclusion: While I can imagine I could have been able to stretch the example to show further security concepts, I am better off either further modifying the existing code or creating new examples altogether. I certainly can say that the current example AND non-example are horrible representations of minimization, as I do nothing to delete either the un-used SuperStack or stack data structures after the user selects the data type they would like to use. I did not dynamically create the structures. Rather, I simply created them all at compile time, and then let them use which ever they select during run time. Beyond that, I think I can accurately say that these pieces of example and non-example code sucessfully fufills the 4 concepts stated and further modification would be needed to confidently say that it also fufills any additional concepts not yet met.
