**What are make and Makefiles?**
- `make` is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles.
- A Makefile is a special file that contains instructions on how to compile and link a program. It specifies dependencies between files and provides rules for updating the target (executable or object files) based on changes in the source files.

**When, why, and how to use Makefiles?**
- Makefiles are used when you have a project with multiple source files that need to be compiled and linked together.
- They are particularly useful for managing complex projects where recompiling only the necessary files saves time.
- Makefiles define rules for compiling and linking source files, making it easier to maintain and update the project.
- To use a Makefile, you create a file named `Makefile` in your project directory and define the compilation and linking rules inside it.

**What are rules and how to set and use them?**
- Rules in a Makefile define how to build target files (executable or object files) from source files.
- Each rule consists of a target, dependencies, and commands.
- Targets are typically the names of the files to be built.
- Dependencies are the files that the target depends on.
- Commands are the shell commands used to build the target from the dependencies.
- Here's an example of a rule:
  ```makefile
  target: dependency1 dependency2
  	command1
  	command2
  ```

**What are explicit and implicit rules?**
- **Explicit rules** are rules that explicitly define how to build a target from its dependencies. You specify the commands needed to build the target.
- **Implicit rules** are predefined rules in make that are used when there is no explicit rule available for a target. They are based on file name suffixes and known conventions. For example, make knows how to build a `.o` file from a `.c` file.

**What are the most common/useful rules?**
- **all**: Builds all the targets in the Makefile.
- **clean**: Removes all built files (e.g., executables, object files).
- **install**: Installs the built program or files in the appropriate directories.
- **uninstall**: Removes the installed files.
- **test**: Runs the test suite.
- **.PHONY**: Specifies targets that are not actual files and prevents make from confusing them with file names.

**What are variables and how to set and use them?**
- Variables in Makefiles are used to store values that can be referenced throughout the Makefile.
- You can set variables using the syntax `VARIABLE_NAME = value`.
- Variables can be referenced using `$(VARIABLE_NAME)`.
- Example:
  ```makefile
  CC = gcc
  CFLAGS = -Wall -Wextra
  
  target: dependency
  	$(CC) $(CFLAGS) -o target dependency
  ```
- In this example, `CC` and `CFLAGS` are variables used to store the compiler and compiler flags, respectively. They are then used in the rule for building the target.
