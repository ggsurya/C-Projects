# 💰 Expense Tracker in C

A simple command-line expense tracking application written in C that allows users to add, view, and delete expense records stored in a text file.

## Features

- Add expense entries with descriptions and amounts.
- View a formatted list of all expenses along with the total amount spent.
- Delete all stored expenses at once.
- Stores expense data persistently in a text file (expenses.txt).
- User-friendly menu-driven interface with input validation.

## Usage

1. Clone the repository or download the source code file.
2. Compile the program using a C compiler, for example:
   ```bash
   gcc -o expense_tracker expense_tracker.c
3. Run the executable:
   ```bash
   ./expense_tracker
4. Use the menu options to:
   - Add new expenses.
   - View all recorded expenses and total spending.
   - Delete all expenses.
   - Exit the program.

## Example

```
========= Expense Tracker =========
1. Add Expense
2. View Expenses
3. Delete All Expenses
4. Exit
===================================
Enter your choice: 1

Enter expense description: Lunch at cafe
Enter amount: 12.50
Expense added successfully.

========= Expense Tracker =========
1. Add Expense
2. View Expenses
3. Delete All Expenses
4. Exit
===================================
Enter your choice: 2

----------- Expense List -----------
Description                       Amount
------------------------------------
Lunch at cafe                    12.50
------------------------------------
Total (1 items):                 12.50

========= Expense Tracker =========
1. Add Expense
2. View Expenses
3. Delete All Expenses
4. Exit
===================================
Enter your choice: 4
Exiting program...
```

## Error Handling

- Validates numeric input for amounts and menu choices.
- Handles file access errors gracefully.
- Provides clear messages for invalid inputs.
   
## License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/ggsurya/C-Projects/blob/main/LICENSE) file for details.

## 📩 Contact

**G.G. Surya**  
📧 Email: ggsuryaff@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/g-g-surya-5aa9312b4)
🔗 [GitHub](https://github.com/ggsurya)
