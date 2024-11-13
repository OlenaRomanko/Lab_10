#pragma once
#using <Microsoft.VisualBasic.dll>
using namespace System::Collections::Generic;

namespace Lab10 {
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
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::ListBox^ listBox1;
        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;

        System::ComponentModel::Container^ components;

        // Оголошення черги
        System::Collections::Generic::Queue<int> myQueue;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           bool isQueueInitialized = false;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(525, 141);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(119, 19);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Додати елементи";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(542, 84);
            this->textBox1->Margin = System::Windows::Forms::Padding(2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(76, 20);
            this->textBox1->TabIndex = 1;
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(398, 128);
            this->listBox1->Margin = System::Windows::Forms::Padding(2);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(123, 121);
            this->listBox1->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(525, 176);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(119, 19);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Видалити елементи";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(542, 208);
            this->button3->Margin = System::Windows::Forms::Padding(2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(89, 19);
            this->button3->TabIndex = 4;
            this->button3->Text = L"Обчислити";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(154, 30);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(381, 13);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Створити чергу цілих чисел. Обчислити суму елементів черги, які більші 5.";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(395, 84);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(113, 13);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Введіть розмір черги";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(12, 94);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(348, 167);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(655, 415);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Перевірка на ініціалізацію черги
        if (!isQueueInitialized) {
            isQueueInitialized = true;
        }

        // Отримуємо розмір черги з textBox1
        int size = Convert::ToInt32(textBox1->Text);

        // Додавання елементів до черги
        for (int i = 0; i < size; ++i) {
            String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("Введіть елемент черги:", "Додавання елемента", "0");
            if (valueInput == "") return;

            int inputValue = Convert::ToInt32(valueInput);
            myQueue.Enqueue(inputValue);
            listBox1->Items->Add(inputValue.ToString());
        }
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Видалення елементів з черги
        if (myQueue.Count > 0) {
            myQueue.Dequeue();
            listBox1->Items->Clear();
            for each (int value in myQueue) {
                listBox1->Items->Add(value.ToString());
            }
        }
        else {
            listBox1->Items->Add("Черга порожня");
        }
    }

   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
       // Обчислення суми елементів черги, які більші за 5
       int sum = 0;
       for each (int value in myQueue) {
           if (value > 5) {
               sum += value;
           }
       }
       MessageBox::Show("Сума елементів, які більші за 5: " + sum.ToString());
   }

    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->pictureBox1->Image = System::Drawing::Image::FromFile("147.gif");
    }
};
}
