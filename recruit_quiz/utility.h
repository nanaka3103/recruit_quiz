#pragma once
#include <vector>

//�z����V���b�t������
void shuffle(std::vector<int>& indices);

//�V���b�t�������ԍ��z����쐬����
std::vector<int> CreateRandomIndices(int n);

//�Ԉ�����ԍ��̔z����쐬����
// n
// correctIndex
std::vector<int>CreateWrongIndices(int n, int correctIndex);