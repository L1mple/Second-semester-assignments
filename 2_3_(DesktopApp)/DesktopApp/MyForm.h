﻿#include <complex>
#include <typeinfo>



#pragma once

namespace DesktopApp {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label13;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(209, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(62, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(209, 150);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(62, 200);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(209, 200);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(557, 99);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(704, 99);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(367, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 91);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(747, 449);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 42);
			this->button2->TabIndex = 9;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 449);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 42);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Введите коэффициенты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"A =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"B =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"C =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(168, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"+ i";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(168, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 25);
			this->label6->TabIndex = 16;
			this->label6->Text = L"+ i";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(168, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"+ i";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(577, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Корни уравнения";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(495, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"X1 =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(495, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"X2 =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(663, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 25);
			this->label11->TabIndex = 21;
			this->label11->Text = L"+ i";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(663, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"+ i";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(557, 151);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(704, 151);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(360, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 42);
			this->label13->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 503);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Solve the equation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Text = L"";
		double A1, A2, B1, B2, C1, C2;
		if (textBox1->Text != "") {
			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox1->Text);
			if (Int32::TryParse(str, number)){
				A1 = System::Convert::ToDouble(textBox1->Text);
			}					
		}		
		else {
			A1 = 0;
		}
		if (textBox2->Text != "") {
			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox2->Text);
			if (Int32::TryParse(str, number)) {
				A2 = System::Convert::ToDouble(textBox2->Text);
			}
			
		}		
		else {
			A2 = 0;
		}
		if (textBox3->Text != "") {

			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox3->Text);
			if (Int32::TryParse(str, number)) {
				B1 = System::Convert::ToDouble(textBox3->Text);
			}
		}		
		else {
			B1 = 0;
		}
		if (textBox4->Text != "") {

			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox4->Text);
			if (Int32::TryParse(str, number)) {
				B2 = System::Convert::ToDouble(textBox4->Text);
			}
		}		
		else {
			B2 = 0;
		}
		if (textBox5->Text != "") {

			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox5->Text);
			if (Int32::TryParse(str, number)) {
				C1 = System::Convert::ToDouble(textBox5->Text);
			}
		}		
		else {
			C1 = 0;
		}
		//A1 = System::Convert::ToDouble(textBox1->Text);
		//A2 = System::Convert::ToDouble(textBox2->Text);
		//B1 = System::Convert::ToDouble(textBox3->Text);
		//B2 = System::Convert::ToDouble(textBox4->Text);
		//C1 = System::Convert::ToDouble(textBox5->Text);
		if (textBox6->Text != "") {
			
			Int32 number = 0;
			System::String^ str = System::Convert::ToString(textBox6->Text);
			if (Int32::TryParse(str, number)) {
				C2 = System::Convert::ToDouble(textBox6->Text);
			}
		}
		else { 
			C2 = 0;
		}

		textBox7->Text = L"";
		textBox8->Text = L"";
		textBox9->Text = L"";
		textBox10->Text = L"";

		std::complex< double > A(A1, A2);
		std::complex< double > B(B1, B2);
		std::complex< double > C(C1, C2);
		std::complex<double> roots[2] = { (0, 0),(0, 0) };
		
		std::complex< double > d(2, 0);
		std::complex< double > f(4, 0);
		std::complex< double > D(0, 0);
		if ((A.real() != 0) || (A.imag() != 0)) {
			D = B * B - f * A * C;

			if ((D.real() == 0) & (D.imag() == 0)) {
				roots[0] = (-B) / (d * A);
				roots[1] = (-B) / (d * A);
				textBox7->Text = System::Convert::ToString(roots[0].real());
				textBox8->Text = System::Convert::ToString(roots[0].imag());
				textBox9->Text = System::Convert::ToString(roots[1].real());
				textBox10->Text = System::Convert::ToString(roots[1].imag());
			}
			else {
				roots[0] = (-B + sqrt(D)) / (d * A);
				roots[1] = (-B - sqrt(D)) / (d * A);
				textBox7->Text = System::Convert::ToString(roots[0].real());
				textBox8->Text = System::Convert::ToString(roots[0].imag());
				textBox9->Text = System::Convert::ToString(roots[1].real());
				textBox10->Text = System::Convert::ToString(roots[1].imag());
			}

		}
		else { 
			label13->Text = L"The equation is not square :(";
		}
		//textBox7->Text = System::Convert::ToString(roots[0].real());
		//textBox8->Text = System::Convert::ToString(roots[1].real());
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	textBox6->Text = L"";
	textBox7->Text = L"";
	textBox8->Text = L"";
	textBox9->Text = L"";
	textBox10->Text = L"";
	label13->Text = L"";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
