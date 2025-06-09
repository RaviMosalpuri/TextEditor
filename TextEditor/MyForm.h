#pragma once

namespace TextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
			:currentFileName("New"), currentFilePath(""), isFileChanged(false)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: String^ currentFileName;
	private: String^ currentFilePath;
	private: bool isFileChanged;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(925, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->openToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 28);
			this->textBox1->MaxLength = 9999999;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(925, 434);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(925, 462);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Text Editor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_Closing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Function to show save file dialog
	private: System::Windows::Forms::DialogResult saveFileDialogImpl() {
		// Set the initial directory
		saveFileDialog1->InitialDirectory = "C:";
		// Set the title
		saveFileDialog1->Title = "Save File";
		// Set the file name
		saveFileDialog1->FileName = "";
		// Set the filter
		saveFileDialog1->Filter = "Text Files|*.txt";
		// Check if the dialog result is not cancel
		System::Windows::Forms::DialogResult dialogResult = saveFileDialog1->ShowDialog();
		if (dialogResult != System::Windows::Forms::DialogResult::Cancel) {
			// Open file for writing
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			// Write to file
			sw->Write(textBox1->Text);
			// Close the file
			sw->Close();
		}

		return dialogResult;
	}

	// New File button in File menu
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if the current text box is not empty
		if (textBox1->TextLength != 0) {
			// Show save file dialog
			saveFileDialogImpl();
		}
	}

	// Save File button in File menu
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check is current file path is not empty
		if (currentFilePath) {
			// Open the file for edit
			StreamWriter^ sw = gcnew StreamWriter(currentFilePath);
			// Save the file
			sw->Write(textBox1->Text);
			// Close the file
			sw->Close();
		}
		else {
			// Show save file dialog
			saveFileDialogImpl();
		}
	}

	// Open File button in File menu
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "C:";
		openFileDialog1->Title = "Open File";
		openFileDialog1->Filter = "Text Files|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			textBox1->Text = sr->ReadToEnd();
			sr->Close();
			currentFileName = openFileDialog1->SafeFileName;
			this->Text = currentFileName;
			currentFilePath = openFileDialog1->FileName;
			isFileChanged = false;
		}
	}

	// Exit button in File menu
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if file is changed
		this->Close();
	}

	// Handler for Text changed in text box
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Check if file changed variable set to false
		if (!isFileChanged) {
			// Set file changed to true
			isFileChanged = true;
		}
	}

	// Handler for form closing
	private: System::Void MyForm_Closing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// Check if file has changed
		if (isFileChanged) {
			// Show Message box to save file
			System::Windows::Forms::DialogResult dialogResult =
				MessageBox::Show("Do you want to save this file?",
					"Save",
					MessageBoxButtons::YesNoCancel,
					MessageBoxIcon::Question);

			// Check if dialog result is 'Yes'
			if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
				// Show save file dialog
				auto result = saveFileDialogImpl();
				// Check if cancel button pressed
				if (result == System::Windows::Forms::DialogResult::Cancel) {
					// Set form closing event to cancel
					// To stop from closing the application
					e->Cancel = true;
				}
				// Else
				else {
					// Close the application
					this->Close();
				}
			}
			// Check if dialog result is 'No'
			else if (dialogResult == System::Windows::Forms::DialogResult::No) {
			}
			// Else
			else {
				// Set form closing event to cancel
				// To stop from closing the application
				e->Cancel = true;
			}
		}
	}

	// Handler for form loading
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Change the window text to current file name
		this->Text = currentFileName;
	}
};
}
