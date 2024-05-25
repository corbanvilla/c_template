TARGET_EXEC ?= run
SRCS := $(shell find . -name '*.c')
# SRCS := main.c
OBJS := $(SRCS:%=%.o)
CFLAGS ?= -pedantic -Wall -std=c11 -g -D_DEFAULT_SOURCE -fsanitize=address,undefined -ggdb -fno-omit-frame-pointer
LDFLAGS ?= -fsanitize=address,undefined
.DEFAULT_GOAL := all

# Defines pattern to compile .c files into .o files
%.c.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# How to create the executable from the object files
$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# Non-file targets
.PHONY: clean all test build-run

# Build all files
all: $(TARGET_EXEC)

# Delete files
clean:
	$(RM) $(TARGET_EXEC) $(OBJS)

# Build and run the executable
build-run: $(TARGET_EXEC)
	./$(TARGET_EXEC)

# test: $(TARGET_EXEC) 
# 	@exec ./test.bats
