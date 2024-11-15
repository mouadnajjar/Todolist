
---

# Todo List

The **Todo List** is a simple command-line task management application built in **C**. It allows users to create, edit, delete, and track tasks efficiently. This project was designed to showcase fundamental concepts in data management, file handling, and user interaction using C programming.

This project was developed as part of the [42 Network](https://www.intra.42.fr/) curriculum.

---

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

---

## Description

The **Todo List** application allows users to:

- Add tasks with titles and descriptions.
- Edit or update task details.
- Mark tasks as completed or pending.
- Delete tasks from the list.
- View all tasks, both completed and pending.
- Save tasks to a file so they persist between application runs.

The application leverages basic file handling for persistence and allows a user to interact with the todo list via a simple text-based interface.

---

## Features

- **Add tasks**: Users can create new tasks with a title and an optional description.
- **Edit tasks**: Modify task details, including title and description.
- **Mark tasks as completed**: Users can toggle the status of a task (e.g., from pending to completed).
- **Delete tasks**: Remove tasks from the list.
- **List tasks**: Display all tasks, including completed and pending ones.
- **Save tasks**: The application stores tasks in a text file, making them persistent across sessions.

---

## Installation

To get started with the **Todo List** application, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/mouadnajjar/Todolist.git
   cd Todolist
   ```

2. Compile the application using `gcc`:

   ```bash
   gcc -o todolist todolist.c
   ```

3. This will generate an executable file named `todolist`. You can now run the application.

---

## Usage

After compiling, you can run the application using the following command:

```bash
./todolist
```

Upon starting the application, you'll be presented with a simple command-line menu that allows you to choose from the following options:

1. **Add a task**: Create a new task with a title and an optional description.
2. **Edit a task**: Modify the details of an existing task (title, description).
3. **Mark a task as completed**: Toggle the task status between "pending" and "completed."
4. **Delete a task**: Remove a task from the list.
5. **List all tasks**: View all tasks, including their status (completed or pending).
6. **Exit**: Quit the application.

Tasks are saved to a file (`tasks.txt`) to ensure that your task list is persistent between application runs.

---

## Examples

Here are some examples of how to use the **Todo List** application:

### Adding a Task

1. Select **Add a task** from the menu.
2. Enter the title: `Buy groceries`
3. Enter the description: `Milk, eggs, and bread`
4. The task is added to the list.

### Editing a Task

1. Select **Edit a task** from the menu.
2. Choose the task you want to edit, e.g., `Buy groceries`.
3. Modify the description to: `Add butter to the list`.
4. Save the changes.

### Marking a Task as Completed

1. Select **Mark a task as completed**.
2. Choose the task (e.g., `Buy groceries`).
3. The task status will be updated to "completed."

### Deleting a Task

1. Select **Delete a task** from the menu.
2. Choose the task you wish to delete.
3. The task will be removed from the list.

---

## Contributing

Contributions to this project are welcome! If you would like to contribute:

1. Fork the repository.
2. Create a new branch for your changes.
3. Implement your changes and add any necessary tests.
4. Commit your changes and push them to your fork.
5. Open a pull request for review.

Please ensure that your changes follow the project's coding style and pass any tests (if applicable).

---
