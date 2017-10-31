# **Overview:**
This example and non-example pair covers principles 4,6, and 10 (least privilege, layering, and minimization).  

# Concept 6 (Layering)
The example is a tier-based file system. The first thing is you will be prompted to login as either a guest, user, or the admin. This login serves as layering, in the fact that you must first do this if you want to have any sort of file access. 

# Concept 4 (Least Privilege)
Depending on whether you are a guest, user, or admin, you will have different file permissions. In this case, guests can only check to see if the file with a given name exists, users can only read from files, and the admin has both read and write permissions for files. As a result, this example serves to cover the principle of least priviledge, by preventing a user from having more privilege then they would ever need. 

# Concept 10 (Minimization)
In this manner, the login also works for minimization due to the incorperation of the principle of least privilege, as not every user will be able to perform the same functions. A regular user may not need/want to write to files at the risk of ruining the integrity of them. Similarly, we may not want guests being able to read files which may contain sensitive information. By minimizing the priveleges to only those who could possible have any use for needing that kind of access, we eliminate the security concerns associated with having these operations open to the public so to speak.

_Note: The file MUST be included in the current working directory._
