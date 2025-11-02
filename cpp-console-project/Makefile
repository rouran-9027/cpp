CC = g++
CFLAGS = -Iinclude -Wall -g
# Sources: main stays in src/, other implementations live under src/operators
SRC = src/main.cpp src/operators/sum.cpp src/operators/add.cpp
# Place object files in build/object-files mirroring the src tree (strip leading src/)
OBJ = $(patsubst src/%.cpp, build/object-files/%.o, $(SRC))
TARGET = build/main
TEST_SRC = tests/test_main.cpp
TEST_TARGET = build/test_main

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) -o $@ $(OBJ)

test: $(TEST_TARGET)
	@echo "Running tests..."
	./$(TEST_TARGET)

# Build object files in build/object-files/..., creating directories as needed
build/object-files/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_TARGET): $(TEST_SRC) src/operators/sum.cpp src/operators/add.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@


clean:
	rm -rf build/object-files
	rm -f $(TARGET) $(TEST_TARGET)

.PHONY: all clean test
