# Tool defs
CC ?= gcc
CXX ?= g++

# Settings
SRC_DIR = ./src
TEST_DIR = ./tests
BUILD_DIR = .
NAME = app.elf

# Search path for header files
CFLAGS += -I$(SRC_DIR)/average
CFLAGS += -I$(SRC_DIR)/temperature

CSOURCES = $(SRC_DIR)/main.c
CSOURCES += $(wildcard $(SRC_DIR)/average/*.c)
CSOURCES += $(wildcard $(SRC_DIR)/temperature/*.c)

CFLAGS += -Wall

LDFLAGS += 

COBJECTS = $(patsubst %.c, %.o, $(CSOURCES))

.PHONY: all
all: $(NAME)

$(COBJECTS) : %.o : %.c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: $(NAME)
$(NAME): $(COBJECTS)
	$(CC) $(COBJECTS) -o $(BUILD_DIR)/$(NAME) $(LDFLAGS)

.PHONY: clean
	rm -f $(COBJECTS)

.PHONY: test
test:
	make -C $(TEST_DIR)

.PHONY: test_clean

test_clean:
	make -C $(TEST_DIR) clean