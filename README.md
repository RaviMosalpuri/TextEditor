# TextEditor

A **lightweight** text editor built using **WinForms in C++**.

## 📝 Features

- Create, open, and save `.txt` files
- Basic text editing functionalities
- Auto-detection of file changes before closing
- Simple and intuitive UI

## 🚀 Installation & Setup

1. Clone the repository:
   ```sh
   git clone https://github.com/RaviMosalpuri/TextEditor.git
   ```
2. Open the project in **Visual Studio**.
3. Build and run the application.

## 🎯 Usage

- **New File**: Start with a blank document.
- **Open File**: Load an existing `.txt` file.
- **Save File**: Save changes.
- **Exit**: Closes the editor safely with a save prompt if needed.

## 📂 File Structure

```
TextEditor/
├── TextEditor/
│   ├── MyForm.h  # Main Form Header
│   ├── MyForm.cpp  # Form Implementation
│   └── README.md  # Documentation
└── LICENSE
```

## 🛠️ How It Works

- Uses `System::Windows::Forms` for UI components.
- `TextBox` for handling text input.
- `StreamReader` and `StreamWriter` for file operations.
- Includes safeguards for unsaved changes before exit.

## 🏗️ Future Improvements

- Syntax highlighting support
- Advanced search & replace functionality
- Multi-tab support

## 🤝 Contributions

Feel free to fork the repository and submit pull requests!

## 📜 License

This project is licensed under the **MIT License**.
