#include "DocWriter.h"
#include <iostream>
#include <fstream>
using namespace std;

DocWriter::DocWriter()
	:m_fileName("noname.txt"), m_contents("�������")
{
	cout << "DocWriter ����Ʈ ������" << endl;
}
DocWriter::~DocWriter()
{
	cout << "DocWriter �Ҹ���" << endl;
}
DocWriter::DocWriter(const string& fileName, const string& contents)
	:m_fileName(fileName), m_contents(contents)
{
	cout << "DocWriter �����ִ� ������" << endl;
}
void DocWriter::setFileName(const string& fileName) {
	this->m_fileName = fileName;
}
void DocWriter::setContents(const string& contents) {
	this->m_contents = contents;
}
void DocWriter::write() {
	ofstream fout(m_fileName);	//m_fileName�� ������ fout ��ü ����
	fout << "## contents ##\n\n";
	fout << m_contents;
}
