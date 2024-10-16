#pragma once
#include <string>
#include <vector>

// 問題文と答えをまとめる構造体
struct Question
{
	std::string q; //問題文
	std::string a;	  //答え
};

//問題の配列を表す型
using QuestionList = std::vector<Question>;