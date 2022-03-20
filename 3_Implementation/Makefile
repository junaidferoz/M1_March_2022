#Name of the project being done
PROJECT_NAME = Hospital_Management_System
#output folder
BUILD = build 
SRC = src/functions.c\
src/utility.c\
#test source files
TEST_SRC = ${SRC}\
test/hospital_test.c\
unity/unity.c
#here we are adding all the include files
INC = -Iinc\
-Iunity
#here we include library files
INCLUDE_LIBS = 
#the output of our project
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
#files for documentation
DOCUMENTATION_OUTPUT = doc/html 
#target build for all
$(PROJECT_NAME):all
.PHONY: run clean test doc all
all: $(SRC) $(BUILD)
	gcc hospitalmanagement.c $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

run:$(PROJECT_NAME) 
	./$(PROJECT_OUTPUT).out

doc:
	make -C ./doc

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) patients.bin 

$(BUILD)
	mkdir build
