#include "HTMLWriter.h"
#include <iostream>
#include <fstream>
using namespace std;

HTMLWriter::HTMLWriter()
	:DocWriter("noname.html", "내용없음"), m_fontName("돋움체"), m_fontSize(15), m_fontColor("red")
{
	cout << "HTMLWriter 디폴트 생성자" << endl;
	//this->m_fileName = "noname.html";
}
HTMLWriter::HTMLWriter(const string& fileName, const string& contents)
	:DocWriter(fileName, contents), m_fontName("돋움체"), m_fontSize(15), m_fontColor("red")
{
}
HTMLWriter::~HTMLWriter()
{
	cout << "HTMLWriter 소멸자" << endl;
}
void HTMLWriter::setFont(const string& fontName, const int& fontSize, const string& fontColor) {
	this->m_fontName = fontName;
	this->m_fontSize = fontSize;
	this->m_fontColor = fontColor;
}

void HTMLWriter::write()
{
	//파일을 연다.
	ofstream fout(m_fileName);

	//HTML 헤더 부분을 저장한다.
	fout << "<HTML><HEAD>";
	fout << "<TITLE>This document was generated by HTMLWriter </TITLE>";
	fout << "</HEAD><BODY>";
	fout << "<H1>Content</H1>";

	fout << "<Font name='" << m_fontName << "'size='" << m_fontSize << "'color='" << m_fontColor << "'>";

	fout << m_contents;

	fout << "</FONT></BODY></HTML>";
}
