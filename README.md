# Command-Driven-chat-box
This is a Command-Driven Chatbox implemented in C++. The chatbox allows users to input predefined commands that trigger specific backend operations. It also includes features like file handling to log commands and password-protected access for added security.

Features
Command Execution:

Accepts commands through the chat interface.
Matches the input against predefined command strings.
Executes corresponding operations when a match is found.
File Handling:

Logs all executed commands into a file for future reference.
Ensures data integrity and ease of audit.
Password Protection:

Access to the chatbox is protected by a password (123).
Prevents unauthorized use.
Ease of Use:

Simple command-driven interaction for users.
User-friendly interface with real-time feedback.
How to Use
Login:

On startup, the chatbox prompts for a password.
Enter 123 to gain access.
Input Commands:

Type a command into the chatbox.
If the command matches predefined operations, it will execute and log the activity.
File Logging:

All commands executed are saved in a log file.
Logs are accessible for debugging or review.
Predefined Commands

| Command        | Action                                                                 |
|----------------|------------------------------------------------------------------------|
| `open_file`    | Opens a specified file.                                               |
| `delete_file`  | Deletes a specified file.                                             |
| `list_dir`     | Lists all files in the current directory.                              |
| `shutdown`     | Logs the user out and safely exits the program.                        |



# Contribution
Contributions are welcome! Feel free to fork this repository and submit a pull request for bug fixes or feature enhancements.

# License
This project is licensed under the MIT License. See the LICENSE file for details.









