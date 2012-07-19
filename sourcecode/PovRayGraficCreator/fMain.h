#pragma once

#include "graphicManager.h"
namespace PovRayGraficCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form{
	#pragma region vom system generiert
		public:
			MainForm(void){
				InitializeComponent();
				//
				//TODO: Konstruktorcode hier hinzufügen.
				//
			}

		protected:
			/// <summary>
			/// Verwendete Ressourcen bereinigen.
			/// </summary>
			~MainForm(){
				if (components){
					delete components;
				}
			}
		private: System::Windows::Forms::MenuStrip^  mainMenu;
		protected: 
		private: System::Windows::Forms::ToolStripMenuItem^  miFile;
		private: System::Windows::Forms::ToolStripMenuItem^  miHelp;
		private: System::Windows::Forms::TreeView^  tvObjects;

		private:
			/// <summary>
			/// Erforderliche Designervariable.
			/// </summary>
			System::ComponentModel::Container ^components;
	#pragma endregion
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void){
			this->mainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->miFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tvObjects = (gcnew System::Windows::Forms::TreeView());
			this->mainMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainMenu
			// 
			this->mainMenu->BackColor = System::Drawing::SystemColors::ControlDark;
			this->mainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->miFile, this->miHelp});
			this->mainMenu->Location = System::Drawing::Point(0, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->Size = System::Drawing::Size(1056, 33);
			this->mainMenu->TabIndex = 0;
			this->mainMenu->Text = L"menuStrip1";
			// 
			// miFile
			// 
			this->miFile->Name = L"miFile";
			this->miFile->Size = System::Drawing::Size(63, 29);
			this->miFile->Text = L"File";
			// 
			// miHelp
			// 
			this->miHelp->Name = L"miHelp";
			this->miHelp->Size = System::Drawing::Size(72, 29);
			this->miHelp->Text = L"Help";
			// 
			// tvObjects
			// 
			this->tvObjects->Location = System::Drawing::Point(0, 36);
			this->tvObjects->Name = L"tvObjects";
			this->tvObjects->Size = System::Drawing::Size(244, 405);
			this->tvObjects->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 705);
			this->Controls->Add(this->tvObjects);
			this->Controls->Add(this->mainMenu);
			this->MainMenuStrip = this->mainMenu;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"PovRayGraficCreator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->mainMenu->ResumeLayout(false);
			this->mainMenu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
	#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private:
		TGraphicManager *mGraphicManager;

	}; // end of class MainForm

}// end of namespace

