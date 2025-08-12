# 🌡️ Temperature Converter in C

A simple command-line temperature converter written in C that allows users to convert temperatures between Celsius, Fahrenheit, and Kelvin scales.

## Features

- Converts temperature between:
  - Celsius to Fahrenheit
  - Fahrenheit to Celsius
  - Celsius to Kelvin
  - Kelvin to Celsius
- Validates Kelvin input to ensure it is non-negative.
- Displays results rounded to two decimal places.
- User-friendly interface with clear input prompts and output formatting.

## Usage

1. Clone the repository or download the source code file.

2. Compile the program using a C compiler, for example:
   ```bash
   gcc -o temp_converter temp_converter.c
3. Run the executable:
   ```bash
   ./temp_converter
4. Follow the on-screen prompts to enter two numbers and an operator.
5. View the calculation result or error messages accordingly.

## Example

```
====================================
        Temperature Converter
====================================
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
------------------------------------
Enter your choice (1-4): 1

>>> Enter temperature in Celsius: 25
--- Result: 25.00 *C = 77.00 *F
====================================
```

## Error Handling

1. If an invalid choice (not between 1 and 4) is entered, the program will display:
   ```bash
   Invalid choice..! Please enter a number between 1 and 4
2. If a Kelvin temperature less than 0 is entered, the program will display:
   ```bash
   !!! Invalid Kelvin value. Must be >= 0

## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/C-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
