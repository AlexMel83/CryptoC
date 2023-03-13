#pragma once
#include <iostream>

namespace CryptoCWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CryptoC
	/// </summary>
	public ref class CryptoC : public System::Windows::Forms::Form
	{
	public:
		CryptoC(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			count();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CryptoC()
		{
			if (components)
			{
				delete components;
			}
		}
//==============Variable==========================
	private: System::String^ alfa;
	private: int alfa_size;
//=====================================================
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnchk;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ alphabet;
	private: System::Windows::Forms::Button^ btnclose;
	private: System::Windows::Forms::Label^ lcd;
	private: System::Windows::Forms::TabControl^ TabControl;
	private: System::Windows::Forms::TabPage^ TabAf;
	private: System::Windows::Forms::TabPage^ TabAfRec;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ aff_out_btn_clr;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ aff_out_alfa_key;
	private: System::Windows::Forms::NumericUpDown^ aff_out_beta_key;
	private: System::Windows::Forms::NumericUpDown^ aff_inp_beta_key;
	private: System::Windows::Forms::NumericUpDown^ aff_inp_alfa_key;
	private: System::Windows::Forms::Button^ aff_inp_btn_clr;
	private: System::Windows::Forms::TextBox^ aff_output;
	private: System::Windows::Forms::TextBox^ aff_input;
	private: System::Windows::Forms::Button^ aff_btn_enc;
	private: System::Windows::Forms::Button^ aff_btn_dec;
	private: System::Windows::Forms::Label^ statusbar;
	private: System::Windows::Forms::Button^ affrec_btn_enc;
	private: System::Windows::Forms::Button^ affrec_btn_dec;
	private: System::Windows::Forms::TextBox^ affrec_output;
	private: System::Windows::Forms::TextBox^ affrec_input;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::NumericUpDown^ affrec_out_beta_key1;
	private: System::Windows::Forms::NumericUpDown^ affrec_out_beta_key2;
	private: System::Windows::Forms::NumericUpDown^ affrec_out_alfa_key2;
	private: System::Windows::Forms::NumericUpDown^ affrec_out_alfa_key1;
	private: System::Windows::Forms::Button^ affrec_out_btn_clr;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::NumericUpDown^ affrec_inp_beta_key2;
	private: System::Windows::Forms::NumericUpDown^ affrec_inp_alfa_key2;
	private: System::Windows::Forms::NumericUpDown^ affrec_inp_beta_key1;
	private: System::Windows::Forms::NumericUpDown^ affrec_inp_alfa_key1;
	private: System::Windows::Forms::Button^ affrec_inp_btn_clr;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CryptoC::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnclose = (gcnew System::Windows::Forms::Button());
			this->lcd = (gcnew System::Windows::Forms::Label());
			this->alphabet = (gcnew System::Windows::Forms::TextBox());
			this->btnchk = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->TabAf = (gcnew System::Windows::Forms::TabPage());
			this->aff_btn_enc = (gcnew System::Windows::Forms::Button());
			this->aff_btn_dec = (gcnew System::Windows::Forms::Button());
			this->aff_output = (gcnew System::Windows::Forms::TextBox());
			this->aff_input = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->aff_out_beta_key = (gcnew System::Windows::Forms::NumericUpDown());
			this->aff_out_alfa_key = (gcnew System::Windows::Forms::NumericUpDown());
			this->aff_out_btn_clr = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->aff_inp_beta_key = (gcnew System::Windows::Forms::NumericUpDown());
			this->aff_inp_alfa_key = (gcnew System::Windows::Forms::NumericUpDown());
			this->aff_inp_btn_clr = (gcnew System::Windows::Forms::Button());
			this->TabAfRec = (gcnew System::Windows::Forms::TabPage());
			this->affrec_btn_enc = (gcnew System::Windows::Forms::Button());
			this->affrec_btn_dec = (gcnew System::Windows::Forms::Button());
			this->affrec_output = (gcnew System::Windows::Forms::TextBox());
			this->affrec_input = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->affrec_out_beta_key1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_out_beta_key2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_out_alfa_key2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_out_alfa_key1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_out_btn_clr = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->affrec_inp_beta_key2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_inp_alfa_key2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_inp_beta_key1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_inp_alfa_key1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->affrec_inp_btn_clr = (gcnew System::Windows::Forms::Button());
			this->statusbar = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->TabControl->SuspendLayout();
			this->TabAf->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_out_beta_key))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_out_alfa_key))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_inp_beta_key))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_inp_alfa_key))->BeginInit();
			this->TabAfRec->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_beta_key1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_beta_key2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_alfa_key2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_alfa_key1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_beta_key2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_alfa_key2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_beta_key1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_alfa_key1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnclose);
			this->groupBox1->Controls->Add(this->lcd);
			this->groupBox1->Controls->Add(this->alphabet);
			this->groupBox1->Controls->Add(this->btnchk);
			this->groupBox1->Location = System::Drawing::Point(13, 552);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(956, 78);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"alphabet";
			// 
			// btnclose
			// 
			this->btnclose->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnclose->Location = System::Drawing::Point(869, 19);
			this->btnclose->Name = L"btnclose";
			this->btnclose->Size = System::Drawing::Size(73, 50);
			this->btnclose->TabIndex = 17;
			this->btnclose->Text = L"close";
			this->btnclose->UseVisualStyleBackColor = true;
			this->btnclose->Click += gcnew System::EventHandler(this, &CryptoC::btnclose_Click);
			// 
			// lcd
			// 
			this->lcd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lcd->ForeColor = System::Drawing::Color::OrangeRed;
			this->lcd->Location = System::Drawing::Point(763, 19);
			this->lcd->Name = L"lcd";
			this->lcd->Size = System::Drawing::Size(100, 41);
			this->lcd->TabIndex = 0;
			this->lcd->Text = L"000";
			this->lcd->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// alphabet
			// 
			this->alphabet->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->alphabet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->alphabet->Location = System::Drawing::Point(119, 25);
			this->alphabet->Name = L"alphabet";
			this->alphabet->Size = System::Drawing::Size(648, 28);
			this->alphabet->TabIndex = 16;
			this->alphabet->Text = L" абвгідеЇжзи≥њйклмнопрстуфхцчшщью€јЅ¬√•ƒ≈™∆«»≤ѓ… ЋћЌќѕ–—“”‘’÷„Ўў№ёяabcdefghijklmn"
				L"opqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"є;%:\?*()_+-=\\/<>`~\'";
			this->alphabet->TextChanged += gcnew System::EventHandler(this, &CryptoC::countevent);
			// 
			// btnchk
			// 
			this->btnchk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnchk->Location = System::Drawing::Point(6, 19);
			this->btnchk->Name = L"btnchk";
			this->btnchk->Size = System::Drawing::Size(96, 50);
			this->btnchk->TabIndex = 15;
			this->btnchk->Text = L"chek keys";
			this->btnchk->UseVisualStyleBackColor = true;
			this->btnchk->Click += gcnew System::EventHandler(this, &CryptoC::btnchk_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->Location = System::Drawing::Point(835, 630);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->linkLabel1->Size = System::Drawing::Size(137, 20);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"AlexMel83 © 2023";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CryptoC::linkLabel1_LinkClicked);
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->TabAf);
			this->TabControl->Controls->Add(this->TabAfRec);
			this->TabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TabControl->Location = System::Drawing::Point(13, 13);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(956, 533);
			this->TabControl->TabIndex = 3;
			// 
			// TabAf
			// 
			this->TabAf->BackColor = System::Drawing::Color::LightBlue;
			this->TabAf->Controls->Add(this->aff_btn_enc);
			this->TabAf->Controls->Add(this->aff_btn_dec);
			this->TabAf->Controls->Add(this->aff_output);
			this->TabAf->Controls->Add(this->aff_input);
			this->TabAf->Controls->Add(this->groupBox3);
			this->TabAf->Controls->Add(this->groupBox2);
			this->TabAf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TabAf->Location = System::Drawing::Point(4, 31);
			this->TabAf->Name = L"TabAf";
			this->TabAf->Padding = System::Windows::Forms::Padding(3);
			this->TabAf->Size = System::Drawing::Size(948, 498);
			this->TabAf->TabIndex = 0;
			this->TabAf->Text = L"Affine сypher";
			// 
			// aff_btn_enc
			// 
			this->aff_btn_enc->CausesValidation = false;
			this->aff_btn_enc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->aff_btn_enc->Location = System::Drawing::Point(186, 438);
			this->aff_btn_enc->Name = L"aff_btn_enc";
			this->aff_btn_enc->Size = System::Drawing::Size(95, 40);
			this->aff_btn_enc->TabIndex = 4;
			this->aff_btn_enc->Text = L"encrypt";
			this->aff_btn_enc->UseVisualStyleBackColor = true;
			this->aff_btn_enc->Click += gcnew System::EventHandler(this, &CryptoC::aff_btn_enc_Click);
			// 
			// aff_btn_dec
			// 
			this->aff_btn_dec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->aff_btn_dec->Location = System::Drawing::Point(659, 438);
			this->aff_btn_dec->Name = L"aff_btn_dec";
			this->aff_btn_dec->Size = System::Drawing::Size(95, 40);
			this->aff_btn_dec->TabIndex = 9;
			this->aff_btn_dec->Text = L"decrypt";
			this->aff_btn_dec->UseVisualStyleBackColor = true;
			this->aff_btn_dec->Click += gcnew System::EventHandler(this, &CryptoC::aff_btn_dec_Click);
			// 
			// aff_output
			// 
			this->aff_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_output->Location = System::Drawing::Point(478, 85);
			this->aff_output->Multiline = true;
			this->aff_output->Name = L"aff_output";
			this->aff_output->Size = System::Drawing::Size(460, 347);
			this->aff_output->TabIndex = 6;
			this->aff_output->Text = L"enter message for decrypting";
			// 
			// aff_input
			// 
			this->aff_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_input->Location = System::Drawing::Point(7, 85);
			this->aff_input->Multiline = true;
			this->aff_input->Name = L"aff_input";
			this->aff_input->Size = System::Drawing::Size(460, 347);
			this->aff_input->TabIndex = 1;
			this->aff_input->Text = L"enter message for encrypting";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->aff_out_beta_key);
			this->groupBox3->Controls->Add(this->aff_out_alfa_key);
			this->groupBox3->Controls->Add(this->aff_out_btn_clr);
			this->groupBox3->Location = System::Drawing::Point(478, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(460, 75);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"alfa key";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(201, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"beta key";
			// 
			// aff_out_beta_key
			// 
			this->aff_out_beta_key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_out_beta_key->Location = System::Drawing::Point(202, 25);
			this->aff_out_beta_key->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->aff_out_beta_key->Name = L"aff_out_beta_key";
			this->aff_out_beta_key->Size = System::Drawing::Size(80, 34);
			this->aff_out_beta_key->TabIndex = 8;
			// 
			// aff_out_alfa_key
			// 
			this->aff_out_alfa_key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_out_alfa_key->Location = System::Drawing::Point(11, 25);
			this->aff_out_alfa_key->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->aff_out_alfa_key->Name = L"aff_out_alfa_key";
			this->aff_out_alfa_key->Size = System::Drawing::Size(80, 34);
			this->aff_out_alfa_key->TabIndex = 7;
			this->aff_out_alfa_key->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// aff_out_btn_clr
			// 
			this->aff_out_btn_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->aff_out_btn_clr->Location = System::Drawing::Point(374, 25);
			this->aff_out_btn_clr->Name = L"aff_out_btn_clr";
			this->aff_out_btn_clr->Size = System::Drawing::Size(75, 40);
			this->aff_out_btn_clr->TabIndex = 5;
			this->aff_out_btn_clr->Text = L"clear";
			this->aff_out_btn_clr->UseVisualStyleBackColor = true;
			this->aff_out_btn_clr->Click += gcnew System::EventHandler(this, &CryptoC::aff_out_btn_clr_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->aff_inp_beta_key);
			this->groupBox2->Controls->Add(this->aff_inp_alfa_key);
			this->groupBox2->Controls->Add(this->aff_inp_btn_clr);
			this->groupBox2->Location = System::Drawing::Point(7, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 75);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"alfa key";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(201, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"beta key";
			// 
			// aff_inp_beta_key
			// 
			this->aff_inp_beta_key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_inp_beta_key->Location = System::Drawing::Point(202, 25);
			this->aff_inp_beta_key->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->aff_inp_beta_key->Name = L"aff_inp_beta_key";
			this->aff_inp_beta_key->Size = System::Drawing::Size(80, 34);
			this->aff_inp_beta_key->TabIndex = 3;
			// 
			// aff_inp_alfa_key
			// 
			this->aff_inp_alfa_key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aff_inp_alfa_key->Location = System::Drawing::Point(11, 25);
			this->aff_inp_alfa_key->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->aff_inp_alfa_key->Name = L"aff_inp_alfa_key";
			this->aff_inp_alfa_key->Size = System::Drawing::Size(80, 34);
			this->aff_inp_alfa_key->TabIndex = 2;
			this->aff_inp_alfa_key->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// aff_inp_btn_clr
			// 
			this->aff_inp_btn_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->aff_inp_btn_clr->Location = System::Drawing::Point(374, 25);
			this->aff_inp_btn_clr->Name = L"aff_inp_btn_clr";
			this->aff_inp_btn_clr->Size = System::Drawing::Size(75, 40);
			this->aff_inp_btn_clr->TabIndex = 0;
			this->aff_inp_btn_clr->Text = L"clear";
			this->aff_inp_btn_clr->UseVisualStyleBackColor = true;
			this->aff_inp_btn_clr->Click += gcnew System::EventHandler(this, &CryptoC::aff_inp_btn_clr_Click);
			// 
			// TabAfRec
			// 
			this->TabAfRec->BackColor = System::Drawing::Color::LightBlue;
			this->TabAfRec->Controls->Add(this->affrec_btn_enc);
			this->TabAfRec->Controls->Add(this->affrec_btn_dec);
			this->TabAfRec->Controls->Add(this->affrec_output);
			this->TabAfRec->Controls->Add(this->affrec_input);
			this->TabAfRec->Controls->Add(this->groupBox4);
			this->TabAfRec->Controls->Add(this->groupBox5);
			this->TabAfRec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.6F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TabAfRec->Location = System::Drawing::Point(4, 31);
			this->TabAfRec->Name = L"TabAfRec";
			this->TabAfRec->Padding = System::Windows::Forms::Padding(3);
			this->TabAfRec->Size = System::Drawing::Size(948, 498);
			this->TabAfRec->TabIndex = 1;
			this->TabAfRec->Text = L"Affine recurent cypher";
			// 
			// affrec_btn_enc
			// 
			this->affrec_btn_enc->CausesValidation = false;
			this->affrec_btn_enc->Enabled = false;
			this->affrec_btn_enc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->affrec_btn_enc->Location = System::Drawing::Point(186, 438);
			this->affrec_btn_enc->Name = L"affrec_btn_enc";
			this->affrec_btn_enc->Size = System::Drawing::Size(95, 40);
			this->affrec_btn_enc->TabIndex = 7;
			this->affrec_btn_enc->Text = L"encrypt";
			this->affrec_btn_enc->UseVisualStyleBackColor = true;
			this->affrec_btn_enc->Click += gcnew System::EventHandler(this, &CryptoC::affrec_btn_enc_Click);
			// 
			// affrec_btn_dec
			// 
			this->affrec_btn_dec->Enabled = false;
			this->affrec_btn_dec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->affrec_btn_dec->Location = System::Drawing::Point(659, 438);
			this->affrec_btn_dec->Name = L"affrec_btn_dec";
			this->affrec_btn_dec->Size = System::Drawing::Size(95, 40);
			this->affrec_btn_dec->TabIndex = 14;
			this->affrec_btn_dec->Text = L"decrypt";
			this->affrec_btn_dec->UseVisualStyleBackColor = true;
			this->affrec_btn_dec->Click += gcnew System::EventHandler(this, &CryptoC::affrec_btn_dec_Click);
			// 
			// affrec_output
			// 
			this->affrec_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->affrec_output->Location = System::Drawing::Point(478, 85);
			this->affrec_output->Multiline = true;
			this->affrec_output->Name = L"affrec_output";
			this->affrec_output->Size = System::Drawing::Size(460, 347);
			this->affrec_output->TabIndex = 9;
			this->affrec_output->Text = L"enter message for decrypting";
			// 
			// affrec_input
			// 
			this->affrec_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->affrec_input->Location = System::Drawing::Point(7, 85);
			this->affrec_input->Multiline = true;
			this->affrec_input->Name = L"affrec_input";
			this->affrec_input->Size = System::Drawing::Size(460, 347);
			this->affrec_input->TabIndex = 2;
			this->affrec_input->Text = L"enter message for encrypting";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->affrec_out_beta_key1);
			this->groupBox4->Controls->Add(this->affrec_out_beta_key2);
			this->groupBox4->Controls->Add(this->affrec_out_alfa_key2);
			this->groupBox4->Controls->Add(this->affrec_out_alfa_key1);
			this->groupBox4->Controls->Add(this->affrec_out_btn_clr);
			this->groupBox4->Location = System::Drawing::Point(478, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(460, 79);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"alfa keys";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(201, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"beta keys";
			// 
			// affrec_out_beta_key1
			// 
			this->affrec_out_beta_key1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_out_beta_key1->Location = System::Drawing::Point(202, 25);
			this->affrec_out_beta_key1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_out_beta_key1->Name = L"affrec_out_beta_key1";
			this->affrec_out_beta_key1->Size = System::Drawing::Size(80, 34);
			this->affrec_out_beta_key1->TabIndex = 12;
			// 
			// affrec_out_beta_key2
			// 
			this->affrec_out_beta_key2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_out_beta_key2->Location = System::Drawing::Point(288, 25);
			this->affrec_out_beta_key2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_out_beta_key2->Name = L"affrec_out_beta_key2";
			this->affrec_out_beta_key2->Size = System::Drawing::Size(80, 34);
			this->affrec_out_beta_key2->TabIndex = 13;
			// 
			// affrec_out_alfa_key2
			// 
			this->affrec_out_alfa_key2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_out_alfa_key2->Location = System::Drawing::Point(97, 25);
			this->affrec_out_alfa_key2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_out_alfa_key2->Name = L"affrec_out_alfa_key2";
			this->affrec_out_alfa_key2->Size = System::Drawing::Size(80, 34);
			this->affrec_out_alfa_key2->TabIndex = 11;
			this->affrec_out_alfa_key2->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// affrec_out_alfa_key1
			// 
			this->affrec_out_alfa_key1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_out_alfa_key1->Location = System::Drawing::Point(11, 25);
			this->affrec_out_alfa_key1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_out_alfa_key1->Name = L"affrec_out_alfa_key1";
			this->affrec_out_alfa_key1->Size = System::Drawing::Size(80, 34);
			this->affrec_out_alfa_key1->TabIndex = 10;
			this->affrec_out_alfa_key1->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// affrec_out_btn_clr
			// 
			this->affrec_out_btn_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->affrec_out_btn_clr->Location = System::Drawing::Point(374, 25);
			this->affrec_out_btn_clr->Name = L"affrec_out_btn_clr";
			this->affrec_out_btn_clr->Size = System::Drawing::Size(75, 40);
			this->affrec_out_btn_clr->TabIndex = 8;
			this->affrec_out_btn_clr->Text = L"clear";
			this->affrec_out_btn_clr->UseVisualStyleBackColor = true;
			this->affrec_out_btn_clr->Click += gcnew System::EventHandler(this, &CryptoC::affrec_out_btn_clr_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->affrec_inp_beta_key2);
			this->groupBox5->Controls->Add(this->affrec_inp_alfa_key2);
			this->groupBox5->Controls->Add(this->affrec_inp_beta_key1);
			this->groupBox5->Controls->Add(this->affrec_inp_alfa_key1);
			this->groupBox5->Controls->Add(this->affrec_inp_btn_clr);
			this->groupBox5->Location = System::Drawing::Point(7, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(460, 75);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"alfa keys";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(201, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"beta keys";
			// 
			// affrec_inp_beta_key2
			// 
			this->affrec_inp_beta_key2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_inp_beta_key2->Location = System::Drawing::Point(288, 25);
			this->affrec_inp_beta_key2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_inp_beta_key2->Name = L"affrec_inp_beta_key2";
			this->affrec_inp_beta_key2->Size = System::Drawing::Size(80, 34);
			this->affrec_inp_beta_key2->TabIndex = 6;
			// 
			// affrec_inp_alfa_key2
			// 
			this->affrec_inp_alfa_key2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_inp_alfa_key2->Location = System::Drawing::Point(97, 25);
			this->affrec_inp_alfa_key2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_inp_alfa_key2->Name = L"affrec_inp_alfa_key2";
			this->affrec_inp_alfa_key2->Size = System::Drawing::Size(80, 34);
			this->affrec_inp_alfa_key2->TabIndex = 4;
			this->affrec_inp_alfa_key2->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// affrec_inp_beta_key1
			// 
			this->affrec_inp_beta_key1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_inp_beta_key1->Location = System::Drawing::Point(202, 25);
			this->affrec_inp_beta_key1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_inp_beta_key1->Name = L"affrec_inp_beta_key1";
			this->affrec_inp_beta_key1->Size = System::Drawing::Size(80, 34);
			this->affrec_inp_beta_key1->TabIndex = 5;
			// 
			// affrec_inp_alfa_key1
			// 
			this->affrec_inp_alfa_key1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->affrec_inp_alfa_key1->Location = System::Drawing::Point(11, 25);
			this->affrec_inp_alfa_key1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->affrec_inp_alfa_key1->Name = L"affrec_inp_alfa_key1";
			this->affrec_inp_alfa_key1->Size = System::Drawing::Size(80, 34);
			this->affrec_inp_alfa_key1->TabIndex = 3;
			this->affrec_inp_alfa_key1->ValueChanged += gcnew System::EventHandler(this, &CryptoC::checkevent);
			// 
			// affrec_inp_btn_clr
			// 
			this->affrec_inp_btn_clr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->affrec_inp_btn_clr->Location = System::Drawing::Point(374, 25);
			this->affrec_inp_btn_clr->Name = L"affrec_inp_btn_clr";
			this->affrec_inp_btn_clr->Size = System::Drawing::Size(75, 40);
			this->affrec_inp_btn_clr->TabIndex = 1;
			this->affrec_inp_btn_clr->Text = L"clear";
			this->affrec_inp_btn_clr->UseVisualStyleBackColor = true;
			this->affrec_inp_btn_clr->Click += gcnew System::EventHandler(this, &CryptoC::affrec_inp_btn_clr_Click);
			// 
			// statusbar
			// 
			this->statusbar->Location = System::Drawing::Point(13, 629);
			this->statusbar->Name = L"statusbar";
			this->statusbar->Size = System::Drawing::Size(816, 23);
			this->statusbar->TabIndex = 4;
			// 
			// CryptoC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(982, 653);
			this->Controls->Add(this->statusbar);
			this->Controls->Add(this->TabControl);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CryptoC";
			this->Padding = System::Windows::Forms::Padding(10);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CryptoC";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->TabControl->ResumeLayout(false);
			this->TabAf->ResumeLayout(false);
			this->TabAf->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_out_beta_key))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_out_alfa_key))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_inp_beta_key))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aff_inp_alfa_key))->EndInit();
			this->TabAfRec->ResumeLayout(false);
			this->TabAfRec->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_beta_key1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_beta_key2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_alfa_key2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_out_alfa_key1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_beta_key2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_alfa_key2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_beta_key1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affrec_inp_alfa_key1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//==========addition function==============================================
private: System::Void count() {
	alfa = alphabet->Text;
	alfa_size = alfa->Length;
	lcd->Text = Convert::ToString(alfa_size);
	check();
	aff_inp_alfa_key->Maximum = alfa_size - 1;
	aff_inp_beta_key->Maximum = alfa_size - 1;
	aff_out_alfa_key->Maximum = alfa_size - 1;
	aff_out_beta_key->Maximum = alfa_size - 1;
	affrec_inp_alfa_key1->Maximum = alfa_size - 1;
	affrec_inp_alfa_key2->Maximum = alfa_size - 1;
	affrec_inp_beta_key1->Maximum = alfa_size - 1;
	affrec_inp_beta_key2->Maximum = alfa_size - 1;
	affrec_out_alfa_key1->Maximum = alfa_size - 1;
	affrec_out_alfa_key2->Maximum = alfa_size - 1;
	affrec_out_beta_key1->Maximum = alfa_size - 1;
	affrec_out_beta_key2->Maximum = alfa_size - 1;
}
private: int search(String^ a) {
	int j = 0;
	while (alfa[j] != a[0]) {
		if (j + 1 < alfa_size)
			j++;
		else 
			return -1;
	}
	return j;
}
private: int Evklid(int a, int b, int c) {
	int otvet[4]{ 0 };
	int bb = b, x_2 = 1, x_1 = 0, y_2 = 0, y_1 = 1, x = 0, y = 0, q = 0, r = 0;
	while (b > 0) {
		q = a / b;
		r = a % b;
		x = x_2 - q * x_1;
		y = y_2 - q * y_1;
		a = b;
		b = r;
		x_2 = x_1;
		x_1 = x;
		y_2 = y_1;
		y_1 = y;
	}
	otvet[0] = (x % bb);    // remainder of division
	otvet[1] = x_2;         // inverse number
	otvet[2] = y_2;         //
	otvet[3] = a;           // GCD
	if (c == 0)
		return otvet[0];
	else {
		if (c == 1)
			return otvet[1];
		else {
			if (c == 2)
				return otvet[2];
			else
				return otvet[3];
		}
	}
}
private: System::Void check() {
	if (TabControl->SelectedTab == TabAf) {
		if (Evklid(int(aff_inp_alfa_key->Value), alfa_size, 3) != 1)
			aff_btn_enc->Enabled = false;
		else
			aff_btn_enc->Enabled = true;
		if (Evklid(int(aff_out_alfa_key->Value), alfa_size, 3) != 1)
			aff_btn_dec->Enabled = false;
		else
			aff_btn_dec->Enabled = true;
	}
	if (TabControl->SelectedTab == TabAfRec) {
		int errorenc = 0, errordec = 0;
		if (Evklid(int(affrec_inp_alfa_key1->Value), alfa_size, 3) != 1)
			errorenc++;
		if (Evklid(int(affrec_inp_alfa_key2->Value), alfa_size, 3) != 1)
			errorenc++;
		if (Evklid(int(affrec_out_alfa_key1->Value), alfa_size, 3) != 1)
			errordec++;
		if (Evklid(int(affrec_out_alfa_key2->Value), alfa_size, 3) != 1)
			errordec++;
		if (errorenc != 0)
			affrec_btn_enc->Enabled = false;
		else 
			affrec_btn_enc->Enabled = true;
		if (errordec != 0)
			affrec_btn_dec->Enabled = false;
		else 
			affrec_btn_dec->Enabled = true;
	}
}	
//================user==control=============================================
private: System::Void countevent(System::Object^ sender, System::EventArgs^ e) {
	count();
}
private: System::Void checkevent(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: System::Void btnclose_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://cfhope.in.ua/htm/index.html");
}
private: System::Void btnchk_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TabControl->SelectedTab == TabAf) {
		if (Evklid(int(aff_inp_alfa_key->Value), alfa_size, 3) != 1) {
			if (Evklid(int(aff_out_alfa_key->Value), alfa_size, 3) != 1)
				statusbar->Text = "Fierst values of keys for encryptionand decryption is not coprime with size alphabet.Enter another value.";
			else statusbar->Text = "Fierst value of key for encryption is not coprime with size alphabet. Enter another value.";
		}
		else {
			if (Evklid(int(aff_out_alfa_key->Value), alfa_size, 3) != 1)
				statusbar->Text = "Fierst value of key for decryption is not coprime with size alphabet. Enter another value.";
			else statusbar->Text = "All conditions are mett. The entered keys can be used.";
		}
	}
	if (TabControl->SelectedTab == TabAfRec) {
		int error = 0;
		if ((Evklid(int(affrec_inp_alfa_key1->Value), alfa_size, 3) != 1) || (Evklid(int(affrec_inp_alfa_key2->Value), alfa_size, 3) != 1)) {
			statusbar->Text = "Fierst value key for encryption is not coprime with size of alphabet.Input another value.";
			error++;
		}
		if ((Evklid(int(affrec_out_alfa_key1->Value), alfa_size, 3) != 1) || (Evklid(int(affrec_out_alfa_key2->Value), alfa_size, 3) != 1)) {
			statusbar->Text = "Fierst value key for decryption is not coprime with size of alphabet. Input another value.";
			error++;
		}
		if (error == 0)
			statusbar->Text = "All conditions correct. You can use entering keys.";
	}
}
//==============Affine=Cypher=Tab=function=and=controls==========================================
private: System::Void aff_inp_btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
		aff_input->Text = "";
}
private: System::Void aff_out_btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
	aff_output->Text = "";
}
private: System::Void aff_btn_enc_Click(System::Object^ sender, System::EventArgs^ e) {
	int alfa_key = int(aff_inp_alfa_key->Value);
	int beta_key = int(aff_inp_beta_key->Value);
	int j;
	String^ input = aff_input->Text;
	String^ output;
	for (int i = 0; i < input->Length; ++i) {
		String^ a = Convert::ToString(input[i]);
		j = search(a);
		if (j == -1)
			output += input[i];
		else {
			output += (alphabet->Text)[(int(aff_inp_alfa_key->Value) * j + int(aff_inp_beta_key->Value)) % alfa_size];
			aff_output->Text = output;
		}
	}
}
private: System::Void aff_btn_dec_Click(System::Object^ sender, System::EventArgs^ e) {
	aff_input->Text = "";
	int alfa_1 = Evklid(int(aff_out_alfa_key->Value), alfa_size, 1);
	int j, beta_key = int(aff_out_beta_key->Value);
	String^ input = aff_output->Text;
	String^ output;
	for (int i = 0; i < aff_output->Text->Length; ++i) {
		String^ a = Convert::ToString(input[i]);
		j = search(a);
		if (j == -1)
			output += input[i];
		else {
			int p = (alfa_1 * (j - beta_key)) % alfa_size;
			if (p < 0)
				p += alfa_size;
			output += alphabet->Text[p];
		}
	}
	aff_input->Text = output;
}
//===========Affine=Recurent=Cypher=Tab=Functions=And=Controls=====================================

private: System::Void affrec_inp_btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
	affrec_input->Text = "";
}
private: System::Void affrec_out_btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
	affrec_output->Text = "";
}
private: System::Void affrec_btn_enc_Click(System::Object^ sender, System::EventArgs^ e) {
	affrec_output->Text = "";
	int j=0, alfakey[3], betakey[3];	
	String^ input = affrec_input->Text;
	String^ output;
	for (int i = 0; i < input->Length; i++) {
		alfakey[0] = int(affrec_inp_alfa_key1->Value);
		alfakey[1] = int(affrec_inp_alfa_key2->Value);
		betakey[0] = int(affrec_inp_beta_key1->Value);
		betakey[1] = int(affrec_inp_beta_key2->Value);
		if (i > 1) {
			alfakey[2] = (alfakey[0] * alfakey[1]) % alfa_size;
			betakey[2] = (betakey[0] + betakey[1]) % alfa_size;
		}
		else {
			if (i == 0) {
				alfakey[2] = alfakey[0];
				betakey[2] = betakey[0];
			}
			else {
				alfakey[2] = alfakey[1];
				betakey[2] = betakey[1];
			}
		}
		alfakey[0] = alfakey[1];
		alfakey[1] = alfakey[2];
		betakey[0] = betakey[1];
		betakey[1] = betakey[2];
		String^ a = Convert::ToString(input[i]);
		j = search(a);
		if (j == -1)
			output += input[i];
		else
			output += alfa[(alfakey[2] * j + betakey[2]) % alfa_size];
	}
	affrec_output->Text = output;	
}
private: System::Void affrec_btn_dec_Click(System::Object^ sender, System::EventArgs^ e) {
	affrec_input->Text = "";
	int j=0, alfakey[3], betakey[3];	
	String^ input = affrec_output->Text;
	String^ output;
	for (int i = 0; i < input->Length; ++i) {
		alfakey[0] = int(affrec_out_alfa_key1->Value);
		alfakey[1] = int(affrec_out_alfa_key2->Value);
		betakey[0] = int(affrec_out_beta_key1->Value);
		betakey[1] = int(affrec_out_beta_key2->Value);
		if (i > 1) {
			alfakey[2] = (alfakey[0] * alfakey[1]) % alfa_size;
			betakey[2] = (betakey[0] + betakey[1]) % alfa_size;
		}
		else {
			if (i == 0) {
				alfakey[2] = alfakey[0];
				betakey[2] = betakey[0];
			}
			else {
				alfakey[2] = alfakey[1];
				betakey[2] = betakey[1];
			}
		}
		alfakey[0] = alfakey[1];
		alfakey[1] = alfakey[2];
		betakey[0] = betakey[1];
		betakey[2] = betakey[2];
		String^ a = Convert::ToString(input[i]);
		j = search(a);
		if (j == -1)
			output += input[i];
		else {
			int p = (Evklid(alfakey[2], alfa_size, 1) * (j - betakey[2])) % alfa_size;
			if (p < 0)
				p += alfa_size;
			output += alfa[p];
		}
	}
	affrec_input->Text = output;
}
};
}
