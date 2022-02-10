#pragma once
#include <msclr\marshal_cppstd.h>
#include <regex>

namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
	 System::Windows::Forms::Label^ label1;
	 System::Windows::Forms::Label^ label3;
	 System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
		   
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello Mr Name";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Hide Balance";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(262, 295);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(269, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Deposit Money";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(262, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(269, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Withdraw Money";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(262, 385);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(269, 37);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(307, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Current Balance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(353, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(608, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(262, 305);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Enter Amount";
			this->textBox1->Visible = false;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(262, 350);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Enter Amount";
			this->textBox2->Visible = false;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::textBox2_MouseClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(441, 305);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Confirm";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(441, 348);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Confirm";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://thumbs.dreamstime.com/z/abstract-white-geometric-technology-digital-hi-te"
				L"ch-concept-futuristic-design-background-151197943.jpg";
			this->pictureBox1->Location = System::Drawing::Point(-9, -15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(849, 625);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(817, 585);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label3->Text == "*****")
		{
			label3->Text = label4->Text;
			
		}
		else { label3->Text = "*****"; }
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	std::regex k("^-?\\d+");
	if (std::regex_match(msclr::interop::marshal_as<std::string>(textBox1->Text), k))
	{
		int c = System::Convert::ToInt32(textBox1->Text);
		int lb = System::Convert::ToInt32(label4->Text);

		int n = c + lb;
		label4->Text = n.ToString();
		label3->Text = n.ToString();
		MessageBox::Show("Deposit is successful");
		textBox1->Visible = false, button6->Visible = false, button2->Visible = true;
	}
	else { MessageBox::Show("enter a correct amount !!"); }

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = true, button6->Visible = true, button2->Visible = false;

}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox2->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	button7->Visible = true; textBox2->Visible = true; button3->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	std::regex k("^-?\\d+");
	if (std::regex_match(msclr::interop::marshal_as<std::string>(textBox2->Text), k))
	{
		int c = System::Convert::ToInt32(textBox2->Text);
		int lb = System::Convert::ToInt32(label4->Text);

		int n = lb - c;
		if (n > 0) {
			label4->Text = n.ToString();
			label3->Text = n.ToString();
			MessageBox::Show("Withdraw is successful");
			textBox2->Visible = false, button7->Visible = false, button3->Visible = true;
		}
		else { MessageBox::Show("Amount is too Big !!!"); }
	}
	else { MessageBox::Show("enter a correct amount !!"); }
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
