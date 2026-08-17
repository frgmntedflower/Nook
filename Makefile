CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

BUILD_DIR = build
TARGET = $(BUILD_DIR)/nook

SRC = src/nook.c
OBJ = $(BUILD_DIR)/nook.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(BUILD_DIR)/nook.o: $(SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $(SRC) -o $(BUILD_DIR)/nook.o

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

compile_commands.json:
	bear -- make clean all

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
