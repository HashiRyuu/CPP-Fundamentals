# C++ Fundamentals

A collection of independent C++ programming examples and reusable implementations, ranging from arithmetic and control flow to algorithms, memory management, and object-oriented design.

## Topics

### Basics

- [Unit conversion](basics/unit-conversion/) — runnable example
- [Time arithmetic](basics/time-arithmetic/) — runnable example
- [Letter grade calculator](basics/letter-grade-calculator/) — runnable example
- [Graduation eligibility](basics/graduation-eligibility/) — runnable example

### Strings And Functions

- [French articles](strings-and-functions/french-articles/)
- [Numeric string parsing](strings-and-functions/numeric-string-parsing/)
- [String patterns](strings-and-functions/string-patterns/)
- [Postal barcode](strings-and-functions/postal-barcode/)
- [Roman numerals](strings-and-functions/roman-numerals/)
- [Recursive strings](strings-and-functions/recursive-strings/)
- [Stream cipher](strings-and-functions/stream-cipher/)
- [Comment stripping](strings-and-functions/comment-stripping/) — runnable example
- [Template string conversion](strings-and-functions/template-string-conversion/)
- [C string operations](strings-and-functions/c-string-operations/)

### Input And Data Processing

- [Overloaded input](input-and-data-processing/overloaded-input/)
- [Weighted data statistics](input-and-data-processing/weighted-data-statistics/)
- [Validated input](input-and-data-processing/validated-input/) — runnable example
- [Token statistics](input-and-data-processing/token-statistics/)
- [Word file reader](input-and-data-processing/word-file-reader/)
- [Spell checker](input-and-data-processing/spell-checker/)

### Geometry

- [Point geometry](geometry/point-geometry/)
- [Triangle perimeter](geometry/triangle-perimeter/)

### Arrays And Memory

- [Vector merge](arrays-and-memory/vector-merge/)
- [Array pointer algorithms](arrays-and-memory/array-pointer-algorithms/)
- [Array transformation](arrays-and-memory/array-transformation/)
- [Dynamic array](arrays-and-memory/dynamic-array/) — runnable example

### Image Processing

- [Image negative](image-processing/image-negative/)
- [Green screen compositing](image-processing/green-screen-compositing/)
- [Image flip mirror](image-processing/image-flip-mirror/)
- [Image class](image-processing/image-class/)

### Object Oriented Programming

- [Time class](object-oriented-programming/time-class/) — runnable example
- [Bug simulation](object-oriented-programming/bug-simulation/) — runnable example
- [Shape inheritance](object-oriented-programming/shape-inheritance/)
- [Worker polymorphism](object-oriented-programming/worker-polymorphism/)

## Build

Use a C++17 compiler and CMake:

```sh
cmake -S . -B build
cmake --build build
```

The console examples have standard `main()` entry points and build as separate executables. For example, `./build/unit_conversion` runs the unit conversion example on a Unix-like system (multi-configuration generators may place executables in `Debug` or `Release`). Other modules build independently as object files and can be used from a separate driver program. They are not intended to be linked into one executable.

## Examples and sample inputs

Additional usage examples are retained in the relevant source files as `run_example()` functions. Numeric sample datasets and word filters are included. A small demonstration word list replaces the original large dictionary of uncertain redistribution terms. The string conversion demonstration builds as `string_conversion_example`. Supply your own compatible image files for the image examples; bundled third-party images and external binary dependencies are not included.

## Implementation notes

The original function and class logic is preserved. Some modules have external dependencies: triangle perimeter and shape inheritance require compatible point implementations, and the image class requires compatible stb_image and stb_image_write implementations for file I/O. The template string conversion example illustrates conditional compilation and is active for older C++ language modes. The stream cipher is a demonstration, not a secure encryption system.

Compilation does not establish algorithmic correctness. These examples have not undergone comprehensive runtime or edge-case testing. Existing attribution in retained interface headers is preserved; verify redistribution permissions before publishing third-party material.