#include "MerkleTree.h"

// Конструктор для листового узла
MerkleNode::MerkleNode(const std::string& data) {
    hash = sha256(data);
    left = nullptr;
    right = nullptr;
}

// Конструктор для узла с двумя дочерними узлами
MerkleNode::MerkleNode(MerkleNode* l, MerkleNode* r) {
    left = l;
    right = r;
    hash = sha256(l->hash + r->hash);
}

// Хэширование данных с использованием SHA-256
std::string MerkleNode::sha256(const std::string& data) {
    EVP_MD_CTX* mdctx;
    const EVP_MD* md;
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;

    md = EVP_sha256();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, data.c_str(), data.length());
    EVP_DigestFinal_ex(mdctx, hash, &hash_len);
    EVP_MD_CTX_free(mdctx);

    std::string hashedString = "";
    for (unsigned int i = 0; i < hash_len; i++) {
        char buf[3];
        sprintf(buf, "%02x", hash[i]);
        hashedString += buf;
    }

    return hashedString;
}

// Конструктор
MerkleTree::MerkleTree(const std::vector<std::string>& data) {
    root = buildTree(data);
}

// Метод для построения дерева Меркла
MerkleNode* MerkleTree::buildTree(const std::vector<std::string>& data) {
    std::vector<MerkleNode*> nodes;

    // Создаем листовые узлы для каждого элемента данных
    for (const std::string& datum : data) {
        nodes.push_back(new MerkleNode(datum));
    }

    if (nodes.empty()) {
        return new MerkleNode("");
    }

    // Строим дерево, объединяя пары узлов и вычисляя их хэш
    while (nodes.size() > 1) {
        std::vector<MerkleNode*> newLevel;
        for (size_t i = 0; i < nodes.size(); i += 2) {
            MerkleNode* left = nodes[i];
            MerkleNode* right = (i + 1 < nodes.size()) ? nodes[i + 1] : nodes[i];
            newLevel.push_back(new MerkleNode(left, right));
        }
        nodes = newLevel;
    }
    return nodes[0]; // Возвращаем корень дерева
}

