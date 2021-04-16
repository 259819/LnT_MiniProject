# Name of the project
PROJECT_NAME = SRS

TEST_PROJ_NAME = Test_$(PROJ_NAME)

COVERAGE_TEST_NAME = coverage_$(PROJECT_NAME)

# Output directory
BUILD = build

# All source code files
SRC = src/Add_Student.c\
src/Delete_Student.c\
src/Display_Student.c\
src/Modify_Student.c\
src/Search_Student.c\
src/utility.c\

# All test source files
TEST_SRC = ${SRC}\
test/SRS_Test.c\
unity/unity.c\





# All include folders with header files
INC	= -Iinc\
-Iunity\


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
#Library Includes
INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all valgrind coverage

all: $(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(SRC) 
	
	gcc -fprofile-arcs -ftest-coverage main.c $(INC) $(SRC)  -o $(COVERAGE_TEST_NAME).$(EXEC)
	./$(COVERAGE_TEST_NAME).$(EXEC) < input_redirect.txt
	gcov -a main.c 
	$(editor)main.c.gcov

#only for linux
valgrind:
		./$(PROJECT_NAME).$(EXEC) < input_redirect.txt
# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.(EXEC)
	$(RM) Students.bin
	$(RM) *.gcno
	$(RM) *.gcov
	$(RM) *.gcda
	$(RM) $(BUILD)

# Create new build folder if not present
$(BUILD):
	mkdir build