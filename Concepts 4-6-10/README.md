# **Overview:**

This example and non-example pair serve to cover principles 4,6, and 10 (least privilege, layering, and minimization repsectively).

The example is a tier-based file system. The first thing the user will be prompted to do is login as either a guest, user, or the admin. Depending on whether you are a guest, user, or admin, you will have different file permissions. In this case, guests can only check to see if the file with a given name exists, users can only read from files, and the admin has both read and write permissions for files.

The non-example does away with this login system. Rather, every user immediately has access to all file permissions as soon as they run the program.

I will discuss how the example serves to cover each principle, whereas the non-example does away with the inclusion of that respective principle.

# Concept 4 (Least Privilege)


# Concept 6 (Layering)
 This login serves as layering, in the fact that you must first do this if you want to have any sort of file access.

# Concept 10 (Minimization)
In this manner, the login also works for minimization due to the incorperation of the principle of least privilege, as not every user will be able to perform the same functions. A regular user may not need/want to write to files at the risk of ruining the integrity of them. Similarly, we may not want guests being able to read files which may contain sensitive information. By minimizing the priveleges to only those who could possible have any use for needing that kind of access, we eliminate the security concerns associated with having these operations open to the public so to speak.

_Note: The file MUST be included in the current working directory._
