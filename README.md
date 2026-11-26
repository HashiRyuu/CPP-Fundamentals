# C++ Fundamentals

A collection of independent C++ programming examples, reusable functions, algorithms, and class implementations. The repository covers procedural programming, the C++ standard library, data processing, memory management, recursion, and object-oriented design.

## Topics

| Area | Examples |
| --- | --- |
| [Basics](basics/) | Unit conversion, time arithmetic, numerical calculations, eligibility and grade calculations |
| [Conditionals](conditionals/) | Branching, numerical comparisons, calendar calculations, triangle classification and decision logic |
| [Strings and functions](strings-and-functions/) | Numeric parsing, Roman numerals, postal barcodes, templates, string conversion, comment stripping and introductory ciphers |
| [String algorithms](string-algorithms/) | Pattern counting, substring manipulation, repetition, matching and character filtering |
| [Reference parameters](reference-parameters/) | Number-base conversion, GCD, digit ranges, factor counting, unit calculations and multiple outputs |
| [Recursion](recursion/) | Factorial, integer powers, digit counting, recursive string transformations and nested-parenthesis processing |
| [Input and data processing](input-and-data-processing/) | Stream input, validation, weighted statistics, token statistics, file reading and spell checking |
| [Stream processing](stream-processing/) | Word and token statistics, running sums, duplicate counts, text transformations and record processing |
| [Geometry](geometry/) | Points, distance calculations and triangle perimeter |
| [Structs and vectors](structs-and-vectors/) | Structured records, vector processing, mileage comparisons and distance-based selection |
| [Arrays and memory](arrays-and-memory/) | Vector merge, pointers, array transformations and dynamic allocation |
| [Array algorithms](array-algorithms/) | Insertion, removal, filtering and ordered array operations |
| [C-string algorithms](c-string-algorithms/) | Character searches, substring extraction, bounded copying and concatenation |
| [Image processing](image-processing/) | Image negatives, green-screen compositing, flipping, mirroring and image classes |
| [Object-oriented programming](object-oriented-programming/) | Time classes, simulations, inheritance and polymorphism |
| [Class design](class-design/) | Encapsulation, constructors, bank accounts, dates, complex numbers, geometric shapes, vehicles and currency |

## Build and run

The root CMake configuration builds the original standalone console examples and reusable modules using a C++17 compiler:

```sh
cmake -S . -B build
cmake --build build
```

For example, run `./build/unit_conversion` on a Unix-like system. Multi-configuration generators may place executables in a `Debug` or `Release` directory.

The remaining topic directories contain independent functions and classes, including alternative implementations. They are not all registered as CMake targets and are not intended to be linked into one executable. Compile individual implementation files independently, for example:

```sh
g++ -std=c++17 -Wall -Wextra -c recursion/factorial/factorial.cpp -o factorial.o
```

To execute a function-only implementation, supply a compatible driver program containing `main()`. Related headers and source files should be compiled together as appropriate. Alternative versions may define the same symbols, so build them separately.

## Examples and supporting data

Useful demonstrations are retained alongside the implementations, including `run_example()` functions where applicable. Numeric datasets, word filters and a small demonstration dictionary are included. The string conversion demonstration builds as `string_conversion_example`. Supply compatible image files for the image-processing examples.

## Implementation notes

- The collection preserves original programming logic and alternative implementations.
- The Circle class in `class-design/circle/` references a missing `point.h`. Provide a compatible header before compiling that module.
- Triangle perimeter and shape inheritance require compatible point implementations; image file I/O requires compatible stb_image and stb_image_write implementations.
- The template string conversion example demonstrates conditional compilation for older C++ language modes.
- The stream cipher demonstrates a programming concept and is not suitable for secure encryption.
- Independent compilation checks do not establish algorithmic correctness, memory safety or comprehensive runtime behavior. Some implementations assume valid inputs and sufficient capacity.

Existing attribution is retained where applicable. Verify redistribution permissions for third-party examples and assets.
