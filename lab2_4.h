#pragma once
#include "lab2_4/lab2_4_data.h"

namespace Lab24 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для lab2_4
	/// </summary>
	public ref class lab2_4 : public System::Windows::Forms::Form
	{
	public:
		lab2_4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~lab2_4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ graphTable;


	private: System::Windows::Forms::Button^ initBtn;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ start;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ end;
	private: System::Windows::Forms::Button^ addGraphFromTable;
	private: System::Windows::Forms::Button^ addGraphFromFile;
	private: System::Windows::Forms::Button^ findMstBtn;
	private: System::Windows::Forms::RichTextBox^ consoleBox;
	private: System::Windows::Forms::MaskedTextBox^ genTb;

	private: System::Windows::Forms::Button^ generateBtn;
	private: System::Windows::Forms::Button^ sort;
	private: System::Windows::Forms::ComboBox^ sortCombo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lab2_4::typeid));
			this->graphTable = (gcnew System::Windows::Forms::DataGridView());
			this->weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->start = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->end = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->initBtn = (gcnew System::Windows::Forms::Button());
			this->addGraphFromTable = (gcnew System::Windows::Forms::Button());
			this->addGraphFromFile = (gcnew System::Windows::Forms::Button());
			this->findMstBtn = (gcnew System::Windows::Forms::Button());
			this->consoleBox = (gcnew System::Windows::Forms::RichTextBox());
			this->genTb = (gcnew System::Windows::Forms::MaskedTextBox());
			this->generateBtn = (gcnew System::Windows::Forms::Button());
			this->sort = (gcnew System::Windows::Forms::Button());
			this->sortCombo = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphTable))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// graphTable
			// 
			this->graphTable->AllowUserToDeleteRows = false;
			this->graphTable->BackgroundColor = System::Drawing::Color::White;
			this->graphTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->graphTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->graphTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->weight, this->start,
					this->end
			});
			this->graphTable->Location = System::Drawing::Point(12, 148);
			this->graphTable->Name = L"graphTable";
			this->graphTable->Size = System::Drawing::Size(193, 349);
			this->graphTable->TabIndex = 0;
			// 
			// weight
			// 
			this->weight->Frozen = true;
			this->weight->HeaderText = L"Вес";
			this->weight->Name = L"weight";
			this->weight->Width = 50;
			// 
			// start
			// 
			this->start->Frozen = true;
			this->start->HeaderText = L"Начало";
			this->start->Name = L"start";
			this->start->Width = 50;
			// 
			// end
			// 
			this->end->Frozen = true;
			this->end->HeaderText = L"Конец";
			this->end->Name = L"end";
			this->end->Width = 50;
			// 
			// initBtn
			// 
			this->initBtn->AutoSize = true;
			this->initBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->initBtn->FlatAppearance->BorderSize = 0;
			this->initBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->initBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->initBtn->ForeColor = System::Drawing::Color::White;
			this->initBtn->Location = System::Drawing::Point(178, 107);
			this->initBtn->Name = L"initBtn";
			this->initBtn->Size = System::Drawing::Size(119, 35);
			this->initBtn->TabIndex = 33;
			this->initBtn->Text = L"Очистить";
			this->initBtn->UseVisualStyleBackColor = false;
			this->initBtn->Click += gcnew System::EventHandler(this, &lab2_4::initBtn_Click);
			// 
			// addGraphFromTable
			// 
			this->addGraphFromTable->AutoSize = true;
			this->addGraphFromTable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->addGraphFromTable->FlatAppearance->BorderSize = 0;
			this->addGraphFromTable->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addGraphFromTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addGraphFromTable->ForeColor = System::Drawing::Color::White;
			this->addGraphFromTable->Location = System::Drawing::Point(12, 107);
			this->addGraphFromTable->Name = L"addGraphFromTable";
			this->addGraphFromTable->Size = System::Drawing::Size(160, 35);
			this->addGraphFromTable->TabIndex = 36;
			this->addGraphFromTable->Text = L"Сохранить изменения";
			this->addGraphFromTable->UseVisualStyleBackColor = false;
			this->addGraphFromTable->Click += gcnew System::EventHandler(this, &lab2_4::addGraphFromTable_Click);
			// 
			// addGraphFromFile
			// 
			this->addGraphFromFile->AutoSize = true;
			this->addGraphFromFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->addGraphFromFile->FlatAppearance->BorderSize = 0;
			this->addGraphFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addGraphFromFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->addGraphFromFile->ForeColor = System::Drawing::Color::White;
			this->addGraphFromFile->Location = System::Drawing::Point(48, 12);
			this->addGraphFromFile->Name = L"addGraphFromFile";
			this->addGraphFromFile->Size = System::Drawing::Size(119, 35);
			this->addGraphFromFile->TabIndex = 37;
			this->addGraphFromFile->Text = L"Загрузить из файла";
			this->addGraphFromFile->UseVisualStyleBackColor = false;
			this->addGraphFromFile->Click += gcnew System::EventHandler(this, &lab2_4::addGraphFromFile_Click);
			// 
			// findMstBtn
			// 
			this->findMstBtn->AutoSize = true;
			this->findMstBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->findMstBtn->FlatAppearance->BorderSize = 0;
			this->findMstBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->findMstBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->findMstBtn->ForeColor = System::Drawing::Color::White;
			this->findMstBtn->Location = System::Drawing::Point(653, 65);
			this->findMstBtn->Name = L"findMstBtn";
			this->findMstBtn->Size = System::Drawing::Size(119, 35);
			this->findMstBtn->TabIndex = 38;
			this->findMstBtn->Text = L"Поиск MST";
			this->findMstBtn->UseVisualStyleBackColor = false;
			this->findMstBtn->Click += gcnew System::EventHandler(this, &lab2_4::findMstBtn_Click);
			// 
			// consoleBox
			// 
			this->consoleBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->consoleBox->Location = System::Drawing::Point(449, 148);
			this->consoleBox->Name = L"consoleBox";
			this->consoleBox->ReadOnly = true;
			this->consoleBox->Size = System::Drawing::Size(323, 349);
			this->consoleBox->TabIndex = 39;
			this->consoleBox->Text = L"";
			// 
			// genTb
			// 
			this->genTb->Location = System::Drawing::Point(613, 115);
			this->genTb->Mask = L"00000";
			this->genTb->Name = L"genTb";
			this->genTb->Size = System::Drawing::Size(34, 20);
			this->genTb->TabIndex = 41;
			this->genTb->Text = L"10001";
			this->genTb->ValidatingType = System::Int32::typeid;
			// 
			// generateBtn
			// 
			this->generateBtn->AutoSize = true;
			this->generateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->generateBtn->FlatAppearance->BorderSize = 0;
			this->generateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->generateBtn->ForeColor = System::Drawing::Color::White;
			this->generateBtn->Location = System::Drawing::Point(653, 107);
			this->generateBtn->Name = L"generateBtn";
			this->generateBtn->Size = System::Drawing::Size(119, 35);
			this->generateBtn->TabIndex = 40;
			this->generateBtn->Text = L"Создать";
			this->generateBtn->UseVisualStyleBackColor = false;
			this->generateBtn->Click += gcnew System::EventHandler(this, &lab2_4::generateBtn_Click);
			// 
			// sort
			// 
			this->sort->AutoSize = true;
			this->sort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->sort->FlatAppearance->BorderSize = 0;
			this->sort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sort->ForeColor = System::Drawing::Color::White;
			this->sort->Location = System::Drawing::Point(449, 100);
			this->sort->Name = L"sort";
			this->sort->Size = System::Drawing::Size(119, 35);
			this->sort->TabIndex = 42;
			this->sort->Text = L"сортировать";
			this->sort->UseVisualStyleBackColor = false;
			this->sort->Click += gcnew System::EventHandler(this, &lab2_4::sort_Click);
			// 
			// sortCombo
			// 
			this->sortCombo->FormattingEnabled = true;
			this->sortCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"сортировка вставками", L"встроенная сортировка" });
			this->sortCombo->Location = System::Drawing::Point(449, 73);
			this->sortCombo->Name = L"sortCombo";
			this->sortCombo->Size = System::Drawing::Size(150, 21);
			this->sortCombo->TabIndex = 43;
			this->sortCombo->Text = L"сортировка вставками";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->browseBtn);
			this->panel1->Controls->Add(this->addGraphFromFile);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 58);
			this->panel1->TabIndex = 44;
			// 
			// browseBtn
			// 
			this->browseBtn->FlatAppearance->BorderSize = 0;
			this->browseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->Location = System::Drawing::Point(9, 12);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(37, 35);
			this->browseBtn->TabIndex = 110;
			this->browseBtn->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(12, 70);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(285, 33);
			this->richTextBox1->TabIndex = 46;
			this->richTextBox1->Text = L"После внесения изменений в таблицу, \nнажмите на кнопку \"Сохранить изменения\"";
			// 
			// lab2_4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 541);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->sortCombo);
			this->Controls->Add(this->sort);
			this->Controls->Add(this->genTb);
			this->Controls->Add(this->generateBtn);
			this->Controls->Add(this->consoleBox);
			this->Controls->Add(this->findMstBtn);
			this->Controls->Add(this->addGraphFromTable);
			this->Controls->Add(this->initBtn);
			this->Controls->Add(this->graphTable);
			this->Name = L"lab2_4";
			this->Text = L"lab2_4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphTable))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//void showHeader();
		void showEmptyTable(int m);
		int getDataFromFile();
		void pushDataToG(std::vector <std::vector <int> >& arr);
		void showMsg();
		void showEdges();
		void findMst(std::vector <std::vector <int>>& g, std::vector<std::vector<int>>& m, int nodes, bool& isConnected);
		void insertSort(std::vector <std::vector <int>>& g);

	private: System::Void initBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addGraphFromFile_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addGraphFromTable_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void findMstBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void generateBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void sort_Click(System::Object^ sender, System::EventArgs^ e);
};
}
