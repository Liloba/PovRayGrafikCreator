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
	private:
		TGraphicManager *mGraphicManager;

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
	private: System::Windows::Forms::TreeView^  tvPovrayFigure;


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
			this->tvPovrayFigure = (gcnew System::Windows::Forms::TreeView());
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
			// tvPovrayFigure
			// 
			this->tvPovrayFigure->Location = System::Drawing::Point(0, 36);
			this->tvPovrayFigure->Name = L"tvPovrayFigure";
			this->tvPovrayFigure->Size = System::Drawing::Size(244, 405);
			this->tvPovrayFigure->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 705);
			this->Controls->Add(this->tvPovrayFigure);
			this->Controls->Add(this->mainMenu);
			this->MainMenuStrip = this->mainMenu;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"PovRayGraficCreator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Leave += gcnew System::EventHandler(this, &MainForm::MainForm_Leave);
			this->mainMenu->ResumeLayout(false);
			this->mainMenu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		// eigene Funktionen:
		void UpdateFiguresAtTreeView(){
			int i;
			for(i = 0; i < (int)mGraphicManager->mAvailableFigureList.size(); ++i){ 
				//this->tvPovrayFigure->Nodes->add(mGraphicManager->mAvailableFigureList.at(i));
//				this->tvPovrayFigure->Nodes->add("hi");
			}
		}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				mGraphicManager = new TGraphicManager();
				UpdateFiguresAtTreeView();
			 }

	private: System::Void MainForm_Leave(System::Object^  sender, System::EventArgs^  e) {
				 if( mGraphicManager ){
					 delete mGraphicManager;
				 }

			 }
	}; // end of class MainForm

}// end of namespace

