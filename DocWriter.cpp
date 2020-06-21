#include "DocWriter.h"
#include <iostream>
#include <fstream>
using namespace std;

DocWriter::DocWriter()
	:m_fileName("noname.txt"), m_contents("내용없음")
{
	cout << "DocWriter 디폴트 생성자" << endl;
}
DocWriter::~DocWriter()
{
	cout << "DocWriter 소멸자" << endl;
}
DocWriter::DocWriter(const string& fileName, const string& contents)
	:m_fileName(fileName), m_contents(contents)
{
	cout << "DocWriter 인자있는 생성자" << endl;
}
void DocWriter::setFileName(const string& fileName) {
	this->m_fileName = fileName;
}
void DocWriter::setContents(const string& contents) {
	this->m_contents = contents;
}
void DocWriter::write() {
	ofstream fout(m_fileName);	//m_fileName을 가지는 fout 객체 선언
	fout << "## contents ##\n\n";
	fout << m_contents;
}
