#pragma once

namespace desktopcrashcourse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->button1->Location = System::Drawing::Point(79, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->button2->Location = System::Drawing::Point(142, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->button3->Location = System::Drawing::Point(205, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->button4->Location = System::Drawing::Point(268, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->textBox1->Location = System::Drawing::Point(15, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 41);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->textBox2->Location = System::Drawing::Point(268, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 41);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->label1->Location = System::Drawing::Point(185, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 36);
			this->label1->TabIndex = 7;
			this->label1->Text = L"n/a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.8F));
			this->label2->Location = System::Drawing::Point(491, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 54);
			this->label2->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(678, 353);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"-";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			label1->Text = button1->Text;
			int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
			label2->Text = "="+System::Convert::ToString(result);
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			label1->Text = button2->Text;
			int result = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
			label2->Text = "=" + System::Convert::ToString(result);
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			label1->Text = button3->Text;
			int result = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
			label2->Text = "=" + System::Convert::ToString(result);
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			label1->Text = button4->Text;
			int result = System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
			label2->Text = "=" + System::Convert::ToString(result);
		}
};
}
