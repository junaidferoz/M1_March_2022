#Name of the project being done
PROJECT_NAME = hospitalmanagement
#Name of test project being done
TEST_PROJECT_NAME = test_$(PROJECT_NAME)
#output folder
BUILD = build
SRC = hospitalmanagement.c\
src/functions.c\
src/utility.c\
#test source files
TEST_SRC = src/functions.c\
src/utility.c\
test/hospital_test.c\
unity/unity.c\

COV_SRC = hospital_test.c
#here we are adding all the include files
INC = -I inc\
-I unity\
#here we include library files
INCLUDE_LIBS = -lcunit
#the output of our project
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out
#files for documentation
DOCUMENTATION_OUTPUT = doc/html 
#To check if the OS used is windows or linux and act accordingly
ifdef OS
	RM = rm -rf
	FixPath = $(subst /,\,$1)
	EXEC = exe 
else
	ifeq ($(shell uname), Linux)
	RM = rm -rf
	FixPath = $1
	EXEC = out
	endif
endif
#target build for all
$(PROJECT_NAME):all
.PHONY: run clean test doc all
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC)) -lm

dev: all
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC)) dev

run:$(PROJECT_NAME) 
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

doc:
	make -C ./doc

test:$(TEST_SRC) $(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD))
	$(RM) $(call FixPath,$(DOCUMENTATION_OUTPUT))
	$(RM) $(call FixPath,$(PROJECT_NAME),$(PROJECT_NAME).gcno)

coverage:
	cp test.$(COV_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath,./$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcno
	$(RM) *.DAT
	$(RM) $(COV_SRC)

$(BUILD):
	mkdir build

dynamic: $(TEST_SRC) $(BUILD)
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_PROJECT_NAME).$(EXEC))

cppcheck:
	cppcheck -i unity --enable=all .