#include "lab2_4.h"
#include "functions.h"
#include "lab2_4/lab2_4_func.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Lab24::lab2_4 form;
	Application::Run(% form);
}

static std::string filename = "E:\\!Univer\\Proga labs\\Lab2_4\\lab2_4\\graph.txt";
int n, m = 0;
std::vector <std::vector <int>> edges(0, std::vector<int>(3));
std::vector <std::vector <int>> mst (0, std::vector<int>(3));
std::vector <std::vector <int>> bigData (0, std::vector<int>(3));

void Lab24::lab2_4::showEmptyTable(int m)
{
	for (int i = 0; i < m; i++) {
		graphTable->Rows[i]->HeaderCell->Value = (i + 1).ToString();
		graphTable->Rows[i]->Cells[0]->Value = "";
		graphTable->Rows[i]->Cells[1]->Value = "";
		graphTable->Rows[i]->Cells[2]->Value = "";
	}
}

int Lab24::lab2_4::getDataFromFile()
{
	String^ path = convert_string_to_String(filename, path);
	array<String^>^ lines = File::ReadAllLines(path);
	int counter = 0;
	graphTable->Rows->Clear();
	graphTable->Refresh();
	for each (String ^ str in lines)
	{
		DataGridViewRow^ row = gcnew DataGridViewRow();
		row->CreateCells(graphTable);
		row->HeaderCell->Value = (counter + 1).ToString();
		for (int i = 0; i < str->Split(L' ')->Length; i++) {
			row->Cells[i]->Value = str->Split(L' ')[i];
		}
		graphTable->Rows->Add(row);
		counter++;
	}
	m = counter;
	return counter;
}
void Lab24::lab2_4::pushDataToG(std::vector <std::vector <int> >& arr)
{
	std::string temp = "";
	std::vector <int> edge(3);
	for (int i = 0; i < graphTable->RowCount - 1; ++i) {
		for (int j = 0; j < graphTable->ColumnCount; ++j) {
			convert_String_to_string(graphTable->Rows[i]->Cells[j]->Value->ToString(), temp);
			edge[j] = stoi(temp);
		}
		arr.push_back(edge);
	}

}
System::Void Lab24::lab2_4::addGraphFromFile_Click(System::Object^ sender, System::EventArgs^ e)
{
	consoleBox->Text = "";
	getDataFromFile();
	edges.clear();
	edges.shrink_to_fit();
	pushDataToG(edges);
	n = 0;
	for (auto& el : edges) {
		if (el[1] > n)
			n = el[1];
		if (el[2] > n)
			n = el[2];
	}
}
System::Void Lab24::lab2_4::addGraphFromTable_Click(System::Object^ sender, System::EventArgs^ e)
{
	consoleBox->Text = "";
	edges.clear();
	edges.shrink_to_fit();
	pushDataToG(edges);
	MessageBox::Show("Изменения сохранены!", "Саксессфул!");
	n = 0;
	for (auto& el : edges) {
		if (el[1] > n)
			n = el[1];
		if (el[2] > n)
			n = el[2];
	}
}
System::Void Lab24::lab2_4::initBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

	graphTable->Rows->Clear();
	graphTable->Refresh();
	edges.clear();
	edges.shrink_to_fit();
}
System::Void Lab24::lab2_4::findMstBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	consoleBox->Text = "Для начала отсортируем граф\n\n";
	if (edges.size() > 0) {
		bool isConnected = false;
		findMst(edges, mst, n, isConnected);
		showEdges();
		if (isConnected) {
			consoleBox->Text += "\n\nМинимальное остовное дерево:\n\n";
			showMsg();
		}
		else {
			consoleBox->Text += "\n\nЗаданный граф не является связным!\n\n";
		}
	}
	else MessageBox::Show("Сначала задайте граф!", "Ошибочка");
}




void Lab24::lab2_4::showMsg()
{

	String^ temp = "";
	for (const auto& edge : mst) {
		temp += edge[1].ToString() + "-" + edge[2].ToString() + "\n";
	}
	consoleBox->Text += temp;
}

void Lab24::lab2_4::showEdges()
{
	String^ temp = "";
	for (const auto& edge : edges) {
		temp += edge[0].ToString() + " " + edge[1].ToString() + " " + edge[2].ToString() + "\n";
	}
	consoleBox->Text += temp;
}

void Lab24::lab2_4::findMst(std::vector<std::vector<int>>& g, std::vector<std::vector<int>>& m, int nodes,  bool& isConnected)
{

	m.clear();
	m.shrink_to_fit();
	std::sort(g.begin(), g.end());
	std::vector <int> comp(nodes);
	for (int i = 0; i < nodes; ++i)
		comp[i] = i;
	int ans = 0;
	for (const auto& edge : g) {
		int weight = edge[0];
		int start = edge[1];
		int end = edge[2];
		if (comp[start - 1] != comp[end - 1])
		{
			m.push_back(edge);
			ans += weight;
			int a = comp[start - 1];
			int b = comp[end - 1];
			for (int i = 0; i < nodes; ++i)
				if (comp[i] == b)
					comp[i] = a;
		}
	}
	if (m.size() == nodes - 1)
		isConnected = true;
	else
		isConnected = false;
}



System::Void Lab24::lab2_4::generateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string temp = "";
	bool isConnected;
	bigData.clear();
	bigData.shrink_to_fit();
	convert_String_to_string(genTb->Text, temp);
	int nodes = stoi(temp);
	consoleBox->Text = "";
	consoleBox->Text = "\n\nГенерация графа на " + nodes.ToString() + " элементов...";
	bigData.assign(nodes, std::vector<int>(3));
	std::vector <std::vector <int>> m(0, std::vector<int>(3));
	srand(time(0));
	for (int i = 0; i < nodes; ++i) {
		bigData[i][0] = getRandomNumber(1, 10 * nodes);
		bigData[i][1] = getRandomNumber(1, nodes);
		bigData[i][2] = getRandomNumber(1, nodes);
	}

	consoleBox->Text += "\n\nГотово\n\nПопытка найти его минимальное остовное дерево...";
	findMst(bigData, m, nodes, isConnected);
	if (isConnected) {
		consoleBox->Text += "\n\nМинимальное остовное дерево получилось на " + m.size().ToString() + " элементов\n\n";
	}
	else {
		consoleBox->Text += "\n\nСгенерированный граф не является связным!\n\n";
	}

}

System::Void Lab24::lab2_4::sort_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (bigData.size() != 0) {
		labTimer t;
		if (sortCombo->SelectedIndex == 0) {
			insertSort(bigData);
			consoleBox->Text += "\n\nСортировка вставками. ";
		}
		else if (sortCombo->SelectedIndex == 1) {
			std::sort(bigData.begin(), bigData.end());
			consoleBox->Text += "\n\nВстроенная сортировка. ";
		}

		showEdges();
		consoleBox->Text += "Затраченное время: ";
		consoleBox->Text += t.elapsed().ToString() + " мкс";

	}
	else showErr("Сначала нужно сгенерировать граф");

}

void Lab24::lab2_4::insertSort(std::vector<std::vector<int>>& g)
{
	for (int i = 1; i < g.size(); i++) {
		for (int j = i; j > 0 && g[j - 1] > g[j]; j--)
			std::swap(g[j - 1], g[j]);
	}
}
