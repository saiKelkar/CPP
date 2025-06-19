To compile and execute a program in C++:

(To compile)
`g++ filename.cpp -o filename`

(To execute)
`./filename`

Explicit typecasting: 
- `static_cast`
  general type conversion
  `static_cast<float> <-- convert to float value`
- `dynamic_cast`
  safe  conversion of pointers and references
- `const_cast`
  add or remove `const` or `volatile` qualifiers from the variable
- `reinterpret_cast`
  used for low-level reinterpretation of bit patterns