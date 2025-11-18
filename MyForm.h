#pragma once
#include <cmath>

namespace FunctionCalculation {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ labelTitle;
        System::Windows::Forms::Label^ labelFormula;
        System::Windows::Forms::Label^ labelVariables;
        System::Windows::Forms::Label^ labelA;
        System::Windows::Forms::Label^ labelB;
        System::Windows::Forms::Label^ labelC;
        System::Windows::Forms::TextBox^ textBoxA;
        System::Windows::Forms::TextBox^ textBoxB;
        System::Windows::Forms::TextBox^ textBoxC;
        System::Windows::Forms::Button^ buttonCalculate;
        System::Windows::Forms::Button^ buttonClear;
        System::Windows::Forms::Button^ buttonExit;
        System::Windows::Forms::Label^ labelResult;
        System::Windows::Forms::TextBox^ textBoxResult;
        System::Windows::Forms::Label^ labelAuthor;

        System::Windows::Forms::GroupBox^ groupBoxInput;
        System::Windows::Forms::GroupBox^ groupBoxOutput;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->labelTitle = (gcnew System::Windows::Forms::Label());
            this->labelFormula = (gcnew System::Windows::Forms::Label());
            this->labelVariables = (gcnew System::Windows::Forms::Label());
            this->labelA = (gcnew System::Windows::Forms::Label());
            this->labelB = (gcnew System::Windows::Forms::Label());
            this->labelC = (gcnew System::Windows::Forms::Label());
            this->textBoxA = (gcnew System::Windows::Forms::TextBox());
            this->textBoxB = (gcnew System::Windows::Forms::TextBox());
            this->textBoxC = (gcnew System::Windows::Forms::TextBox());
            this->buttonCalculate = (gcnew System::Windows::Forms::Button());
            this->buttonClear = (gcnew System::Windows::Forms::Button());
            this->buttonExit = (gcnew System::Windows::Forms::Button());
            this->labelResult = (gcnew System::Windows::Forms::Label());
            this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
            this->labelAuthor = (gcnew System::Windows::Forms::Label());
            this->groupBoxInput = (gcnew System::Windows::Forms::GroupBox());
            this->groupBoxOutput = (gcnew System::Windows::Forms::GroupBox());
            this->groupBoxInput->SuspendLayout();
            this->groupBoxOutput->SuspendLayout();
            this->SuspendLayout();
            // 
            // labelTitle
            // 
            this->labelTitle->AutoSize = true;
            this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelTitle->ForeColor = System::Drawing::Color::Blue;
            this->labelTitle->Location = System::Drawing::Point(120, 20);
            this->labelTitle->Name = L"labelTitle";
            this->labelTitle->Size = System::Drawing::Size(362, 26);
            this->labelTitle->TabIndex = 0;
            this->labelTitle->Text = L"Обчислення значення функції f";
            // 
            // labelFormula
            // 
            this->labelFormula->AutoSize = true;
            this->labelFormula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelFormula->Location = System::Drawing::Point(50, 70);
            this->labelFormula->Name = L"labelFormula";
            this->labelFormula->Size = System::Drawing::Size(297, 20);
            this->labelFormula->TabIndex = 1;
            this->labelFormula->Text = L"Формула: f = (-b - √(b² + 4ac)) / (2a) + |c|";
            // 
            // labelVariables
            // 
            this->labelVariables->AutoSize = true;
            this->labelVariables->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelVariables->Location = System::Drawing::Point(50, 130);
            this->labelVariables->Name = L"labelVariables";
            this->labelVariables->Size = System::Drawing::Size(328, 17);
            this->labelVariables->TabIndex = 2;
            this->labelVariables->Text = L"Контрольні значення: a = 5; b = 9; c = -2.5";
            // 
            // labelA
            // 
            this->labelA->AutoSize = true;
            this->labelA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelA->Location = System::Drawing::Point(20, 30);
            this->labelA->Name = L"labelA";
            this->labelA->Size = System::Drawing::Size(69, 17);
            this->labelA->TabIndex = 3;
            this->labelA->Text = L"Змінна a:";
            // 
            // labelB
            // 
            this->labelB->AutoSize = true;
            this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelB->Location = System::Drawing::Point(20, 70);
            this->labelB->Name = L"labelB";
            this->labelB->Size = System::Drawing::Size(69, 17);
            this->labelB->TabIndex = 4;
            this->labelB->Text = L"Змінна b:";
            // 
            // labelC
            // 
            this->labelC->AutoSize = true;
            this->labelC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelC->Location = System::Drawing::Point(20, 110);
            this->labelC->Name = L"labelC";
            this->labelC->Size = System::Drawing::Size(68, 17);
            this->labelC->TabIndex = 5;
            this->labelC->Text = L"Змінна c:";
            // 
            // textBoxA
            // 
            this->textBoxA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxA->Location = System::Drawing::Point(90, 27);
            this->textBoxA->Name = L"textBoxA";
            this->textBoxA->Size = System::Drawing::Size(100, 23);
            this->textBoxA->TabIndex = 6;
            // 
            // textBoxB
            // 
            this->textBoxB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxB->Location = System::Drawing::Point(90, 67);
            this->textBoxB->Name = L"textBoxB";
            this->textBoxB->Size = System::Drawing::Size(100, 23);
            this->textBoxB->TabIndex = 7;
            // 
            // textBoxC
            // 
            this->textBoxC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxC->Location = System::Drawing::Point(90, 107);
            this->textBoxC->Name = L"textBoxC";
            this->textBoxC->Size = System::Drawing::Size(100, 23);
            this->textBoxC->TabIndex = 8;
            // 
            // buttonCalculate
            // 
            this->buttonCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCalculate->Location = System::Drawing::Point(30, 160);
            this->buttonCalculate->Name = L"buttonCalculate";
            this->buttonCalculate->Size = System::Drawing::Size(120, 35);
            this->buttonCalculate->TabIndex = 9;
            this->buttonCalculate->Text = L"Обчислити";
            this->buttonCalculate->UseVisualStyleBackColor = true;
            this->buttonCalculate->Click += gcnew System::EventHandler(this, &MyForm::buttonCalculate_Click);
            // 
            // buttonClear
            // 
            this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonClear->Location = System::Drawing::Point(160, 160);
            this->buttonClear->Name = L"buttonClear";
            this->buttonClear->Size = System::Drawing::Size(120, 35);
            this->buttonClear->TabIndex = 10;
            this->buttonClear->Text = L"Очистити";
            this->buttonClear->UseVisualStyleBackColor = true;
            this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
            // 
            // buttonExit
            // 
            this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonExit->Location = System::Drawing::Point(290, 160);
            this->buttonExit->Name = L"buttonExit";
            this->buttonExit->Size = System::Drawing::Size(120, 35);
            this->buttonExit->TabIndex = 11;
            this->buttonExit->Text = L"Вихід";
            this->buttonExit->UseVisualStyleBackColor = true;
            this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
            // 
            // labelResult
            // 
            this->labelResult->AutoSize = true;
            this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelResult->Location = System::Drawing::Point(20, 30);
            this->labelResult->Name = L"labelResult";
            this->labelResult->Size = System::Drawing::Size(90, 17);
            this->labelResult->TabIndex = 12;
            this->labelResult->Text = L"Результат:";
            // 
            // textBoxResult
            // 
            this->textBoxResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxResult->ForeColor = System::Drawing::Color::Red;
            this->textBoxResult->Location = System::Drawing::Point(110, 27);
            this->textBoxResult->Name = L"textBoxResult";
            this->textBoxResult->ReadOnly = true;
            this->textBoxResult->Size = System::Drawing::Size(150, 23);
            this->textBoxResult->TabIndex = 13;
            // 
            // labelAuthor
            // 
            this->labelAuthor->AutoSize = true;
            this->labelAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelAuthor->Location = System::Drawing::Point(50, 400);
            this->labelAuthor->Name = L"labelAuthor";
            this->labelAuthor->Size = System::Drawing::Size(251, 15);
            this->labelAuthor->TabIndex = 14;
            this->labelAuthor->Text = L"Автор програми: Прізвище Ім\'я, група XXX";
            // 
            // groupBoxInput
            // 
            this->groupBoxInput->Controls->Add(this->buttonExit);
            this->groupBoxInput->Controls->Add(this->buttonClear);
            this->groupBoxInput->Controls->Add(this->buttonCalculate);
            this->groupBoxInput->Controls->Add(this->textBoxC);
            this->groupBoxInput->Controls->Add(this->textBoxB);
            this->groupBoxInput->Controls->Add(this->textBoxA);
            this->groupBoxInput->Controls->Add(this->labelC);
            this->groupBoxInput->Controls->Add(this->labelB);
            this->groupBoxInput->Controls->Add(this->labelA);
            this->groupBoxInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxInput->Location = System::Drawing::Point(50, 170);
            this->groupBoxInput->Name = L"groupBoxInput";
            this->groupBoxInput->Size = System::Drawing::Size(450, 210);
            this->groupBoxInput->TabIndex = 16;
            this->groupBoxInput->TabStop = false;
            this->groupBoxInput->Text = L"Введення даних та керування";
            // 
            // groupBoxOutput
            // 
            this->groupBoxOutput->Controls->Add(this->textBoxResult);
            this->groupBoxOutput->Controls->Add(this->labelResult);
            this->groupBoxOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxOutput->Location = System::Drawing::Point(50, 390);
            this->groupBoxOutput->Name = L"groupBoxOutput";
            this->groupBoxOutput->Size = System::Drawing::Size(450, 70);
            this->groupBoxOutput->TabIndex = 17;
            this->groupBoxOutput->TabStop = false;
            this->groupBoxOutput->Text = L"Результат обчислення";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
            this->ClientSize = System::Drawing::Size(650, 480);
            this->Controls->Add(this->groupBoxOutput);
            this->Controls->Add(this->groupBoxInput);
            this->Controls->Add(this->labelAuthor);
            this->Controls->Add(this->labelVariables);
            this->Controls->Add(this->labelFormula);
            this->Controls->Add(this->labelTitle);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Обчислення значення функції";
            this->groupBoxInput->ResumeLayout(false);
            this->groupBoxInput->PerformLayout();
            this->groupBoxOutput->ResumeLayout(false);
            this->groupBoxOutput->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        // Обробник події для кнопки "Обчислити"
        System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                // Перетворення введених даних з текстового формату в числовий
                double a = Convert::ToDouble(textBoxA->Text);
                double b = Convert::ToDouble(textBoxB->Text);
                double c = Convert::ToDouble(textBoxC->Text);

                // Перевірка, щоб a не дорівнювало 0 (щоб уникнути ділення на 0)
                if (a == 0) {
                    MessageBox::Show("Помилка: значення 'a' не може дорівнювати 0!", "Помилка вводу",
                        MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }

                // Перевірка підкореневого виразу (b² + 4ac) на невід'ємність
                double discriminant = b * b + 4 * a * c;
                if (discriminant < 0) {
                    MessageBox::Show("Помилка: вираз під коренем (b² + 4ac) від'ємний!", "Помилка обчислення",
                        MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }

                // Обчислення значення функції за заданою формулою:
                // f = (-b - √(b² + 4ac)) / (2a) + |c|
                double sqrtValue = Math::Sqrt(discriminant);  // √(b² + 4ac)
                double numerator = -b - sqrtValue;           // -b - √(b² + 4ac)
                double denominator = 2 * a;                  // 2a
                double fraction = numerator / denominator;   // (-b - √(b² + 4ac)) / (2a)
                double absoluteC = Math::Abs(c);             // |c|
                double result = fraction + absoluteC;        // фінальний результат

                // Виведення результату з округленням до 4 знаків після коми
                textBoxResult->Text = String::Format("{0:F4}", result);

                // Додаткове повідомлення з детальними обчисленнями
                String^ details = String::Format(
                    "Деталі обчислення:\n" +
                    "b² + 4ac = {0}² + 4*{1}*{2} = {3}\n" +
                    "√(b² + 4ac) = √{3} = {4:F4}\n" +
                    "(-b - √(b² + 4ac)) = -{0} - {4:F4} = {5:F4}\n" +
                    "2a = 2*{1} = {6}\n" +
                    "(-b - √(b² + 4ac)) / (2a) = {5:F4} / {6} = {7:F4}\n" +
                    "|c| = |{2}| = {8:F4}\n" +
                    "Результат: {7:F4} + {8:F4} = {9:F4}",
                    b, a, c, discriminant, sqrtValue, numerator, denominator, fraction, absoluteC, result);

                MessageBox::Show(details, "Деталі обчислення",
                    MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (FormatException^) {
                MessageBox::Show("Помилка: будь ласка, введіть коректні числові значення!", "Помилка вводу",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            catch (OverflowException^) {
                MessageBox::Show("Помилка: введені значення занадто великі!", "Помилка вводу",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Сталася неочікувана помилка: " + ex->Message, "Помилка",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        // Обробник події для кнопки "Очистити"
        System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
            // Очищення всіх полів вводу та результату
            textBoxA->Text = "";
            textBoxB->Text = "";
            textBoxC->Text = "";
            textBoxResult->Text = "";

            // Повернення фокусу на перше поле вводу
            textBoxA->Focus();

            MessageBox::Show("Всі поля очищено. Можете ввести нові значення.", "Інформація",
                MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

        // Обробник події для кнопки "Вихід"
        System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
            if (MessageBox::Show("Ви впевнені, що хочете вийти з програми?", "Підтвердження виходу",
                MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
                Application::Exit();
            }
        }
    };
}