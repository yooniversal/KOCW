#pragma once
#include "DocWriter.h"
class HTMLWriter : public DocWriter
{
private:
	string m_fontName;
	int m_fontSize;
	string m_fontColor;
public:
	HTMLWriter();
	HTMLWriter(const string& fileName, const string& contents);
	~HTMLWriter();
	void setFont(const string& fontName, const int& fontSize, const string& fontColor);
	void write();

};

