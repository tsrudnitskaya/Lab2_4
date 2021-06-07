#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <chrono>
#include <algorithm>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;



std::string& convert_String_to_string(String^ s, std::string& os); //������� �� String^ � string
std::string& convert_String_to_string(String^ s); //������� �� String^ � string 2
String^ convert_string_to_String(std::string& os, String^ s);//������� ��������
String^ convert_string_to_String(std::string& os);//������� �������� 2
DateTime convertDate(String^ d);
int getNumOfLines(std::string filename);//��������� ���������� ����� � �����
std::string getStringFromFile(std::string filename);//��������� ������ �� �����
int getNumOfNumsFromString(std::string& s);//��������� ���������� ��������� � ������, ���������� ���������
int emptyValidate(std::string s);
int onlyTextValidate(std::string s);//��������� ������(��� ���� � ������)
int onlyDigitsValidate(std::string s);//��������� ������(������ �����)
int getRandomNumber(int min, int max);//��������� ���������� �����
int getIntFromString(String^ s, int& num);//������� ��� �� �������� �������
int isTextBoxFill(TextBox^ tb);
std::string getStringFromTextbox(TextBox^ tb);//������� ������ �� ����������

bool getNumFromTextbox(TextBox^ tb, int& num);//������� ����� �� ����������

int getFirstNumFromString(std::string& s);//�������� ������ ����� � ������
int getLastNumFromString(std::string& s);//�������� ��������� ����� � ������
std::string browseFile(OpenFileDialog^ ofd);//�������� ���� � ����� �� �������
int checkFile(std::string filename);//�������� ��������� �����
void showErr(String^ text); //�������� ����������� � �������
void parseString(std::string s, std::vector<std::string>& parseSubst, char delimeter = ' ');//���������� � ������ ������ �� ����������� (�� ��������� ������)




class labTimer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	labTimer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<std::chrono::microseconds>(clock_t::now() - m_beg).count();
			
	}
};