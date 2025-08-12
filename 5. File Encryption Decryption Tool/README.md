# 🔐 File Encryption / Decryption Tool (Caesar Cipher) in C

A command-line utility written in C that encrypts or decrypts text files using the classic Caesar Cipher technique.

## Features

- Encrypts or decrypts text files by shifting alphabetic characters.
- Supports both uppercase and lowercase letters while preserving case.
- Leaves non-alphabetic characters unchanged.
- Allows user to specify shift key (integer) for flexible encoding/decoding.
- Handles file input/output with error checking.
- Simple and clear user interface.

## Usage

1. Clone the repository or download the source code file.
2. Compile the program using a C compiler, for example:
   ```bash
   gcc -o caesar_cipher caesar_cipher.c
3. Run the executable:
   ```bash
   ./caesar_cipher
4. Follow the on-screen prompts:
   - Choose between encryption (1) or decryption (2).
   - Enter the input filename (file to encrypt/decrypt).
   - Enter the output filename (file to save result).
   - Enter the shift key (integer).

## Example

```
============================================
   File Encryption / Decryption Tool
           (Caesar Cipher)
============================================

[1] Encrypt
[2] Decrypt
Enter your choice: 1
Enter input file name  : plain.txt
Enter output file name : encrypted.txt
Enter shift key (int)  : 3

Encryption completed successfully!
```

## Error Handling

1. If an invalid choice is entered, the program exits with a message.
2. Displays errors if unable to open input or create output files.
   
## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/C-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
