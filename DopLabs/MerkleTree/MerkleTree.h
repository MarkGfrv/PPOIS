#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <openssl/evp.h>

// Класс узла дерева Меркла
class MerkleNode {
public:
    std::string hash;
    MerkleNode* left;
    MerkleNode* right;

    // Конструктор для листового узла
    MerkleNode(const std::string& data);

    // Конструктор для узла с двумя дочерними узлами
    MerkleNode(MerkleNode* l, MerkleNode* r);

    // Хэширование данных с использованием SHA-256
    std::string sha256(const std::string& data);
};

// Класс дерева Меркла
class MerkleTree {
public:
    MerkleNode* root;

    // Конструктор
    MerkleTree(const std::vector<std::string>& data);

    // Метод для построения дерева Меркла
    MerkleNode* buildTree(const std::vector<std::string>& data);
};

