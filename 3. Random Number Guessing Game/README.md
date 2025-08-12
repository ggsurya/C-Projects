# 🎲 Number Guessing Game in C

A simple interactive command-line game written in C where the player tries to guess a randomly generated number between 1 and 100.

## Features

- Generates a random number between 1 and 100 at the start of each game.
- User inputs guesses until they find the correct number.
- Provides feedback on each guess:
  - Indicates if the guess is too high or too low.
- Tracks and displays the total number of attempts once the correct guess is made.
- Clean and friendly user interface with formatted prompts and messages.

## Usage

1. Clone the repository or download the source code file.

2. Compile the program using a C compiler, for example:
   ```bash
   gcc -o guessing_game guessing_game.c
3. Run the executable:
   ```bash
   ./guessing_game
4. Follow the prompts to enter your guesses until you guess the correct number.

## Example

```
====================================
[Welcome to the Number Guessing Game]
====================================
I have chosen a number between 1 and 100.
Can you guess what it is?

>>> Enter your guess: 50
   Too low! Try again.

>>> Enter your guess: 75
   Too high! Try again.

>>> Enter your guess: 63
------------------------------------
  Congratulations! You guessed it right.
  Total attempts: 3
------------------------------------
```

## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/C-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
