# Set this to @ to keep the makefile quiet
ifndef SILENCE
	SILENCE =
endif

OSTYPE:=$(shell uname -o)

### Directory structure ###
# Output file
TARGET_NAME=Blink
TARGET_DIR=build

# Production code
SRC_DIRS=src
INC_DIRS=inc
LIB_DIRS=
#Static library names without lib prefix and .a suffix
LIB_LIST=
OBJ_DIR=obj

# CppUTest test harness source code
CPPUTEST_LIB_LIST=CppUTest CppUTestExt
ifeq ("$(OSTYPE)","Cygwin")
# Cygwin's linker can't seem to find CppUTest libraries even though they're in the PATH...
CPPUTEST_LIB_DIR=/usr/local/lib
endif

# User unit tests
TEST_DIR=test
TEST_SRC_DIRS=$(TEST_DIR)/src $(TEST_DIR)/mock
TEST_INC_DIR=$(TEST_DIR)/inc
TEST_LIB_DIRS=$(TEST_DIR)/lib
#Static library names without lib prefix and .a suffix
TEST_LIB_LIST=
TEST_TARGET_DIR=$(TEST_DIR)/build
TEST_OBJ_DIR=$(TEST_DIR)/$(OBJ_DIR)


### Compiler tools ###
COMPILER=gcc
LINKER=gcc
ARCHIVER=ar
TEST_COMPILER=g++
TEST_LINKER=g++


# Do the real work
include MakefileWorker.make
