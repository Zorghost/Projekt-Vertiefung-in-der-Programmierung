#pragma once
#include <cstdio>
#include "MainForm.h"
#include "Datenbank.h"
#include "user.h"
#include <msclr\marshal_cppstd.h>

namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:


	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ userName;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::Button^ buttonLogin;


	private:
		MainForm obj;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(308, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(308, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// userName
			// 
			this->userName->Location = System::Drawing::Point(312, 147);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(163, 20);
			this->userName->TabIndex = 3;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(312, 217);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(163, 20);
			this->password->TabIndex = 4;
			// 
			// buttonLogin
			// 
			this->buttonLogin->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonLogin->FlatAppearance->BorderSize = 2;
			this->buttonLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->Location = System::Drawing::Point(351, 295);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(87, 32);
			this->buttonLogin->TabIndex = 6;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://wallpaper.dog/large/5486499.jpg";
			this->pictureBox1->Location = System::Drawing::Point(-24, -22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(883, 651);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(822, 550);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->password);
			this->Controls->Add(this->userName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		
		bool c = false ;
		for (user x : data1)
		{
			if (user::getUsername(x) ==  msclr::interop::marshal_as<std::string>(userName->Text) && user::getPassword(x) == msclr::interop::marshal_as<std::string>(password->Text)) {
				c = true;
				MessageBox::Show("Login Successfull");
				this->Hide();
				obj.Show();
				obj.label3->Text = user::getBalance(x).ToString();
				obj.label4->Text = user::getBalance(x).ToString();
				obj.label1->Text = "Welcome to your accout : " + userName->Text;
				break;
			}
		}
	     if(c == false)
		 { MessageBox::Show("Login Failed"); }
		
	}
};
}
