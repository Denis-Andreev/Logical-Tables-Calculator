#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

// Глобальная переменная, в которую будет записываться выражение
std::string _EXPRESSION;
namespace LogicalTables {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ expressionEdit;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_Not;
	private: System::Windows::Forms::Button^ button_And;
	private: System::Windows::Forms::Button^ button_Or;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_A;
	private: System::Windows::Forms::Button^ button_B;
	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::Button^ button_leftBrace;
	private: System::Windows::Forms::Button^ button_rightBrace;
	private: System::Windows::Forms::DataGridView^ resultTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ A;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Result;
	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::Button^ button_clear;






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
			this->expressionEdit = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_Not = (gcnew System::Windows::Forms::Button());
			this->button_And = (gcnew System::Windows::Forms::Button());
			this->button_Or = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_A = (gcnew System::Windows::Forms::Button());
			this->button_B = (gcnew System::Windows::Forms::Button());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->button_leftBrace = (gcnew System::Windows::Forms::Button());
			this->button_rightBrace = (gcnew System::Windows::Forms::Button());
			this->resultTable = (gcnew System::Windows::Forms::DataGridView());
			this->A = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Result = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultTable))->BeginInit();
			this->SuspendLayout();
			// 
			// expressionEdit
			// 
			this->expressionEdit->Location = System::Drawing::Point(137, 32);
			this->expressionEdit->Name = L"expressionEdit";
			this->expressionEdit->ReadOnly = true;
			this->expressionEdit->Size = System::Drawing::Size(170, 20);
			this->expressionEdit->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выражение:";
			// 
			// button_Not
			// 
			this->button_Not->Location = System::Drawing::Point(136, 68);
			this->button_Not->Name = L"button_Not";
			this->button_Not->Size = System::Drawing::Size(53, 23);
			this->button_Not->TabIndex = 2;
			this->button_Not->Text = L"NOT";
			this->button_Not->UseVisualStyleBackColor = true;
			this->button_Not->Click += gcnew System::EventHandler(this, &MyForm::Button_Not_Click);
			// 
			// button_And
			// 
			this->button_And->Location = System::Drawing::Point(195, 68);
			this->button_And->Name = L"button_And";
			this->button_And->Size = System::Drawing::Size(46, 23);
			this->button_And->TabIndex = 3;
			this->button_And->Text = L"AND";
			this->button_And->UseVisualStyleBackColor = true;
			this->button_And->Click += gcnew System::EventHandler(this, &MyForm::Button_And_Click);
			// 
			// button_Or
			// 
			this->button_Or->Location = System::Drawing::Point(247, 68);
			this->button_Or->Name = L"button_Or";
			this->button_Or->Size = System::Drawing::Size(60, 23);
			this->button_Or->TabIndex = 4;
			this->button_Or->Text = L"OR";
			this->button_Or->UseVisualStyleBackColor = true;
			this->button_Or->Click += gcnew System::EventHandler(this, &MyForm::Button_Or_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Операции:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Переменные:";
			// 
			// button_A
			// 
			this->button_A->Location = System::Drawing::Point(137, 108);
			this->button_A->Name = L"button_A";
			this->button_A->Size = System::Drawing::Size(52, 23);
			this->button_A->TabIndex = 7;
			this->button_A->Text = L"A";
			this->button_A->UseVisualStyleBackColor = true;
			this->button_A->Click += gcnew System::EventHandler(this, &MyForm::Button_A_Click);
			// 
			// button_B
			// 
			this->button_B->Location = System::Drawing::Point(195, 108);
			this->button_B->Name = L"button_B";
			this->button_B->Size = System::Drawing::Size(46, 23);
			this->button_B->TabIndex = 8;
			this->button_B->Text = L"B";
			this->button_B->UseVisualStyleBackColor = true;
			this->button_B->Click += gcnew System::EventHandler(this, &MyForm::Button_B_Click);
			// 
			// button_C
			// 
			this->button_C->Location = System::Drawing::Point(248, 108);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(59, 23);
			this->button_C->TabIndex = 9;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = true;
			this->button_C->Click += gcnew System::EventHandler(this, &MyForm::Button_C_Click);
			// 
			// button_leftBrace
			// 
			this->button_leftBrace->Location = System::Drawing::Point(137, 148);
			this->button_leftBrace->Name = L"button_leftBrace";
			this->button_leftBrace->Size = System::Drawing::Size(52, 23);
			this->button_leftBrace->TabIndex = 10;
			this->button_leftBrace->Text = L"(";
			this->button_leftBrace->UseVisualStyleBackColor = true;
			this->button_leftBrace->Click += gcnew System::EventHandler(this, &MyForm::Button_leftBrace_Click);
			// 
			// button_rightBrace
			// 
			this->button_rightBrace->Location = System::Drawing::Point(195, 148);
			this->button_rightBrace->Name = L"button_rightBrace";
			this->button_rightBrace->Size = System::Drawing::Size(46, 23);
			this->button_rightBrace->TabIndex = 11;
			this->button_rightBrace->Text = L")";
			this->button_rightBrace->UseVisualStyleBackColor = true;
			this->button_rightBrace->Click += gcnew System::EventHandler(this, &MyForm::Button_rightBrace_Click);
			// 
			// resultTable
			// 
			this->resultTable->AllowUserToAddRows = false;
			this->resultTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->resultTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->resultTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->A, this->B,
					this->C, this->Result
			});
			this->resultTable->Location = System::Drawing::Point(332, 32);
			this->resultTable->Name = L"resultTable";
			this->resultTable->ReadOnly = true;
			this->resultTable->RowHeadersVisible = false;
			this->resultTable->Size = System::Drawing::Size(204, 199);
			this->resultTable->TabIndex = 12;
			// 
			// A
			// 
			this->A->HeaderText = L"A";
			this->A->Name = L"A";
			this->A->ReadOnly = true;
			this->A->Width = 39;
			// 
			// B
			// 
			this->B->HeaderText = L"B";
			this->B->Name = L"B";
			this->B->ReadOnly = true;
			this->B->Width = 39;
			// 
			// C
			// 
			this->C->HeaderText = L"C";
			this->C->Name = L"C";
			this->C->ReadOnly = true;
			this->C->Width = 39;
			// 
			// Result
			// 
			this->Result->HeaderText = L"Результат";
			this->Result->Name = L"Result";
			this->Result->ReadOnly = true;
			this->Result->Width = 84;
			// 
			// button_start
			// 
			this->button_start->Location = System::Drawing::Point(232, 198);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(75, 23);
			this->button_start->TabIndex = 13;
			this->button_start->Text = L"Посчитать";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::Button_start_Click);
			// 
			// button_clear
			// 
			this->button_clear->Location = System::Drawing::Point(136, 198);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(75, 23);
			this->button_clear->TabIndex = 14;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::Button_clear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 258);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->resultTable);
			this->Controls->Add(this->button_rightBrace);
			this->Controls->Add(this->button_leftBrace);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->button_B);
			this->Controls->Add(this->button_A);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_Or);
			this->Controls->Add(this->button_And);
			this->Controls->Add(this->button_Not);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->expressionEdit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// EXPRESSION CALCULATOR

		bool delim(char c) {
			return c == ' ';
		}

		bool is_op(char c) {
			return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
		}

		int priority(char op) {
			if (op < 0)
				return 4; // op == -'+' || op == -'-'
			return
				op == '+' || op == '-' ? 1 :
				op == '*' || op == '/' || op == '%' ? 2 :
				-1;
		}

		void process_op(vector<int>& st, char op) {
			if (op < 0) {
				int l = st.back();  st.pop_back();
				switch (-op) {
				case '+':  st.push_back(l);  break;
				case '-':  st.push_back(!l);  break;
				}
			}
			else {
				int r = st.back();  st.pop_back();
				int l = st.back();  st.pop_back();
				switch (op) {
				case '+':  st.push_back(l + r);  break;
				case '-':  st.push_back(l - r);  break;
				case '*':  st.push_back(l * r);  break;
				case '/':  st.push_back(l / r);  break;
				case '%':  st.push_back(l % r);  break;
				}
			}
		}

		int calc(string & s) {
			bool may_unary = true;
			vector<int> st;
			vector<char> op;
			for (size_t i = 0; i < s.length(); ++i)
				if (!delim(s[i]))
					if (s[i] == '(') {
						op.push_back('(');
						may_unary = true;
					}
					else if (s[i] == ')') {
						while (op.back() != '(')
							process_op(st, op.back()), op.pop_back();
						op.pop_back();
						may_unary = false;
					}
					else if (is_op(s[i])) {
						char curop = s[i];
						if (may_unary)  curop = -curop;
						while (!op.empty() && (
							curop >= 0 && priority(op.back()) >= priority(curop)
							|| curop < 0 && priority(op.back()) > priority(curop))
							)
							process_op(st, op.back()), op.pop_back();
						op.push_back(curop);
						may_unary = true;
					}
					else {
						string operand;
						while (i < s.length() && isalnum(s[i]))
							operand += s[i++];
						--i;
						if (isdigit(operand[0]))
							st.push_back(atoi(operand.c_str()));
						else
							st.push_back(operand[i]);
						may_unary = false;
					}
			while (!op.empty())
				process_op(st, op.back()), op.pop_back();
			return st.back();
		}


		// END EXPRESSION CALCULATOR


		void variablesInfo(set <string>& infoTaker, string expression) {
			// Сортируется по возрастанию, записываем переменные которые были найдены в выражении
			for (int i = 0; i < expression.length(); i++) {
				if (expression.at(i) == 'A' || expression.at(i) == 'B' || expression.at(i) == 'C') {
					string temp;
					temp.push_back(expression[i]);
					//
					infoTaker.insert(temp);
				}
			}
		}

		int variableIndex(string var) {
			if (var == "A") return 0;
			if (var == "B") return 1;
			if (var == "C") return 2;
		}


		void getExpressionVariants(set <string> infoTaker, string expression) {
			// 0 - A
			// 1 - B
			// 2 - C
			// 3 - expression result
			// Логическая таблица
			vector <string> table[4];
			// Для проверки, потом удалишь
			vector <string> variants;
			string sourceExpression = expression;
			// Делаем перестановки, считаем результат выражения
			switch (infoTaker.size()) {
					// *std::next(my_set.begin(), n) - получает элемент по индексу из set
				case 1: {
					for (int i = 0; i <= 1; i++) {
						//
						expression = sourceExpression;
						//
						// Замена А
					    string currentVariableA = *std::next(infoTaker.begin(), 0);
						string currentValueA = std::to_string(i);
						char currentValueChA = i + '0';
						replace(expression.begin(), expression.end(), 'A', currentValueChA);
						table[variableIndex(currentVariableA)].push_back(currentValueA);
						// Запись результата для получившегося выражения
						int int_result = calc(expression);
						string str_result;
						if (int_result == 0) { str_result = "0"; }
						else { str_result = "1"; }
						table[3].push_back(str_result);
					}
					break;
				}
				case 2: {
					for (int i = 0; i <= 1; i++) {
						for (int j = 0; j <= 1; j++) {
							//
							expression = sourceExpression;
							//
						    // Замена A
						    string currentVariableA = *std::next(infoTaker.begin(), 0);
    						string currentValueA = std::to_string(i);
    						char currentValueChA = i + '0';
    						replace(expression.begin(), expression.end(), 'A', currentValueChA);
    						table[variableIndex(currentVariableA)].push_back(currentValueA);
    						// Замена B
							string currentVariableB = *std::next(infoTaker.begin(), 1);
							string currentValueB = std::to_string(j);
							char currentValueChB = j + '0';
							replace(expression.begin(), expression.end(), 'B', currentValueChB);
							table[variableIndex(currentVariableB)].push_back(currentValueB);
							// Запись результата для получившегося выражения
							int int_result = calc(expression);
							string str_result;
							if (int_result == 0) { str_result = "0"; } else { str_result = "1"; }
							table[3].push_back(str_result);
						}
					}
					break;
				}
				case 3: {
					for (int i = 0; i <= 1; i++) {
						for (int j = 0; j <= 1; j++) {
							for (int k = 0; k <= 1; k++) {
								//
								expression = sourceExpression;
								//
								// Замена A
    						    string currentVariableA = *std::next(infoTaker.begin(), 0);
        						string currentValueA = std::to_string(i);
        						char currentValueChA = i + '0';
        						replace(expression.begin(), expression.end(), 'A', currentValueChA);
        						table[variableIndex(currentVariableA)].push_back(currentValueA);
        						// Замена B
    							string currentVariableB = *std::next(infoTaker.begin(), 1);
    							string currentValueB = std::to_string(j);
    							char currentValueChB = j + '0';
    							replace(expression.begin(), expression.end(), 'B', currentValueChB);
    							table[variableIndex(currentVariableB)].push_back(currentValueB);
    							// Замена C
								string currentVariableC = *std::next(infoTaker.begin(), 2);
								string currentValueC = std::to_string(k);
								char currentValueChC = k + '0';
								replace(expression.begin(), expression.end(), 'C', currentValueChC);
								table[variableIndex(currentVariableC)].push_back(currentValueC);
								// Запись результата для получившегося выражения
								int int_result = calc(expression);
								string str_result;
								if (int_result == 0) { str_result = "0"; }
								else { str_result = "1"; }
								table[3].push_back(str_result);
							}
						}
					}
					break;
				}
			}
			// Запись результатов в таблицу
			for (int i = 0; i < table[0].size(); i++) {
				String^ a;
				String^ b;
				String^ c;
				String^ result = gcnew System::String(table[3].at(i).c_str());
				// Обработка исключей(если вдруг какая-то переменная в выражении не использовалась)
				if (infoTaker.find("A") != infoTaker.end()) {
					a = gcnew System::String(table[0].at(i).c_str());
				}
				else {
					a = "-";
				}
				if (infoTaker.find("B") != infoTaker.end()) {
					b = gcnew System::String(table[1].at(i).c_str());
				}
				else {
					b = "-";
				}
				if (infoTaker.find("C") != infoTaker.end()) {
					c = gcnew System::String(table[0].at(i).c_str());
				}
				else {
					c = "-";
				}
					resultTable->Rows->Add(a, b, c, result);
			}
		}
	
	private: System::Void Button_A_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += "A";
		_EXPRESSION += "A";
	}
	private: System::Void Button_B_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += "B";
		_EXPRESSION += "B";
	}
	private: System::Void Button_C_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += "C";
		_EXPRESSION += "C";
	}
	private: System::Void Button_Not_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += " NOT";
		_EXPRESSION += "-";
	}
	private: System::Void Button_And_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += " AND ";
		_EXPRESSION += "*";
	}
	private: System::Void Button_Or_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += " OR ";
		_EXPRESSION += "+";
	}
	private: System::Void Button_leftBrace_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += "(";
		_EXPRESSION += "(";
	}
	private: System::Void Button_rightBrace_Click(System::Object^ sender, System::EventArgs^ e) {
		expressionEdit->Text += ")";
		_EXPRESSION += ")";
	}
	private: System::Void Button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистка поля ввода
		expressionEdit->Text = "";
		// Очистка переменной, хранящей выражение
		_EXPRESSION = "";
		// Очистка таблицы
		resultTable->Rows->Clear();
	}
	private: System::Void Button_start_Click(System::Object^ sender, System::EventArgs^ e) {
		// Расчет результатов и вывод в таблицу по клику
		std::set <std::string> infoTaker;
		variablesInfo(infoTaker, _EXPRESSION);
		getExpressionVariants(infoTaker, _EXPRESSION);
	}
};
}
