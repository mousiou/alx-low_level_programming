# alx-low_level_programming

Collection of C programming projects from the ALX Software Engineering low-level programming track. Each directory is a small, focused set of tasks that explore a core C concept, usually with matching test mains provided by ALX.

## Prerequisites
- Ubuntu shell or similar POSIX environment
- `gcc` with flags: `-Wall -Wextra -Werror -pedantic -std=gnu89`
- Optional: Betty style checker for linting (`betty <file.c>`)

## Repository layout
- `0x00-hello_world` — first C programs, compiler toolchain basics
- `0x01-variables_if_else_while` — variables, conditionals, basic loops
- `0x02-functions_nested_loops` — functions and nested iteration patterns
- `0x03-debugging` — tracing and fixing simple C programs
- `0x04-more_functions_nested_loops` — deeper practice with functions/loops
- `0x05-pointers_arrays_strings` — pointer arithmetic, arrays, strings I
- `0x06-pointers_arrays_strings` — pointers, arrays, strings II
- `0x07-pointers_arrays_strings` — pointers, arrays, strings III
- `0x08-recursion` — recursive functions and call flow
- `0x09-static_libraries` — creating and using static libraries (`ar`, `ranlib`)
- `0x0A-argc_argv` — command-line argument handling
- `0x0B-malloc_free` — dynamic memory allocation fundamentals
- `0x0C-more_malloc_free` — more allocation patterns and edge cases
- `0x0D-preprocessor` — macros, include guards, compile-time definitions
- `0x0E-structures_typedef` — structs and `typedef` usage
- `0x0F-function_pointers` — callbacks and higher-order patterns in C
- `0x10-variadic_functions` — working with variadic arguments (`stdarg`)
- `0x12-singly_linked_lists` — building and traversing singly linked lists
- `0x13-more_singly_linked_lists` — advanced singly linked list operations
- `0x14-bit_manipulation` — bitwise operations and binary utilities
- `0x15-file_io` — system-level file I/O (`open`, `read`, `write`, `close`)
- `0x17-doubly_linked_lists` — building/managing doubly linked lists
- `0x18-dynamic_libraries` — creating and loading shared libraries
- `0x1A-hash_tables` — hash table data structures and collision handling

## How to work with a project
1. `cd` into the project directory you want to run.
2. Compile the required source files, e.g.:
   ```bash
   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <files>.c -o program
   ```
3. Execute the binary: `./program`
4. Run Betty (if installed) before submitting: `betty *.c *.h`

## Notes
- Each subdirectory contains its own README with task-specific details and examples.
- Some directories may include helper `main.c` files for local testing; they are not part of the submitted solutions unless specified by the task.
