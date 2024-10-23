#pragma once
#include <vector>

//配列をシャッフルする
void shuffle(std::vector<int>& indices);

//シャッフルした番号配列を作成する
std::vector<int> CreateRandomIndices(int n);

//間違った番号の配列を作成する
// n
// correctIndex
std::vector<int>CreateWrongIndices(int n, int correctIndex);