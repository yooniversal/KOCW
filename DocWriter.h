#pragma once
#include <string>
using namespace std;

class DocWriter
{
protected:
	string m_fileName;
	string m_contents;
public:
	DocWriter();
	~DocWriter();
	DocWriter(const string& fileName, const string& contents);
	void setFileName(const string& fileName);
	void setContents(const string& contents);
	void write();
};

