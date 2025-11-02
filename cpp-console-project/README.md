# C++ Console Project

This project is a simple C++ console application that reads two integers from the user and outputs their sum.

## Project Structure

```
cpp-console-project
├── src
│   └── main.cpp          # Entry point of the application
├── include
│   └── utils.h          # Header file for utility functions
├── tests
│   └── test_main.cpp     # Test cases for the application
├── CMakeLists.txt        # CMake configuration file
├── Makefile               # Makefile for building the project
├── .gitignore             # Files and directories to ignore in version control
└── README.md              # Project documentation
```

## How to Build and Run

### Using CMake

1. Create a build directory:
   ```
   mkdir build
   cd build
   ```

2. Run CMake to configure the project:
   ```
   cmake ..
   ```

3. Build the project:
   ```
   make
   ```

4. Run the application:
   ```
   ./cpp-console-project
   ```

### Using Makefile

Simply run:
```
make
```
Then execute the generated binary:
```
./cpp-console-project
```

## Usage

After running the application, you will be prompted to enter two integers. The program will then display the sum of the two integers in the format:
```
a + b = sum
```

## Testing

To run the tests, navigate to the `tests` directory and execute the test file:
```
g++ test_main.cpp -o test_main
./test_main
```

## Contributing

Feel free to contribute to this project by submitting issues or pull requests.