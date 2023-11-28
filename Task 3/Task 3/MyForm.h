#pragma once

namespace Task3 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(113, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Deposit Amount";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(113, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Deposit Period";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(113, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Deposit Maturity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(163, 311);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Interest Rate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(163, 386);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Interest";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(163, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(162, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Total at Maturity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(449, 311);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(449, 386);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(449, 454);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->button1->Location = System::Drawing::Point(295, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 47);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox1->Location = System::Drawing::Point(416, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 28);
			this->textBox1->TabIndex = 10;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(416, 113);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(168, 30);
			this->comboBox1->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Monthly", L"Maturity" });
			this->comboBox2->Location = System::Drawing::Point(416, 173);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(168, 30);
			this->comboBox2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 511);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Fixed Deposit Interest Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: double Maturity(int period, double deposit){
	double intrestRates[5] = { 5.5, 6.25, 7, 7.5, 8 };
	int i = 0 ;
	double intrestRate = 0;
	while (true)
	{
		if (i == period) {
			intrestRate = intrestRates[i];
			break;
		}
		++i;
	}
	double powerValue = 1;
	for (int i = 0; i <= period; ++i)
	{
		powerValue *= ((intrestRate / 100)+1);
	}
	double compoundInterest = deposit * (powerValue - 1);
	return compoundInterest;
}
private: double Monthly(int period, double deposit) {
	double intrestRates[5] = {5.4, 5.91, 6.37,6.58, 6.75};
	double compoundInterest = 0;
	for (int i = 1; i <= period; ++i)
	{
		if (i == period) {
			compoundInterest = (intrestRates[i] / 100) * deposit;
			break;
		}
	}
	return compoundInterest/12;
}
private: void Function(int period, double deposit, int maturity) {
	double intrestRatesMaturity[5] = { 5.5, 6.25, 7, 7.5, 8 };
	double intrestRatesMonthly[5] = { 5.4, 5.91, 6.37,6.58, 6.75 };
	switch (maturity)
	{
	case 0:
		this->label5->Text = "Interest Earned(Monthly)";
		this->label7->Text = Convert::ToString(intrestRatesMonthly[period] + " %");
		this->label8->Text = Convert::ToString(Monthly(period, deposit) + " LKR");
		this->label9->Text = Convert::ToString(deposit + " LKR");
		break;
	case 1:
		this->label5->Text = "Interest Earned";
		this->label7->Text = Convert::ToString(intrestRatesMaturity[period] + " %");
		this->label8->Text = Convert::ToString(Maturity(period, deposit) + " LKR");
		this->label9->Text = Convert::ToString(deposit + Maturity(period, deposit) + " LKR");
		break;
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Deposit = this->textBox1->Text;
	double deposit = Convert::ToDouble(Deposit);
	int period = this->comboBox1->SelectedIndex;
	int maturity = this->comboBox2->SelectedIndex;
	Function(period, deposit, maturity);
}
};
}
