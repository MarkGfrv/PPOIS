#include "pch.h"
#include "CppUnitTest.h"
#include "../Project64/MerkleTree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Test class for MerkleNode
TEST_CLASS(MerkleNodeTests)
{
public:
    // Test hashing of MerkleNode with data
    TEST_METHOD(TestMerkleNodeHashWithData)
    {
        MerkleNode node("Hello");
        Assert::AreNotEqual(std::string(""), node.hash);
    }

    // Test hashing of MerkleNode without data
    TEST_METHOD(TestMerkleNodeHashWithoutData)
    {
        MerkleNode node("");
        Assert::AreNotEqual(std::string(""), node.hash);
    }

    // Test MerkleNode equality
    TEST_METHOD(TestMerkleNodeEquality)
    {
        MerkleNode node1("Hello");
        MerkleNode node2("Hello");
        Assert::AreEqual(node1.hash, node2.hash);
    }

    // Test MerkleNode inequality
    TEST_METHOD(TestMerkleNodeInequality)
    {
        MerkleNode node1("Hello");
        MerkleNode node2("World");
        Assert::AreNotEqual(node1.hash, node2.hash);
    }
};

// Test class for MerkleTree
TEST_CLASS(MerkleTreeTests)
{
public:
    // Test construction of MerkleTree
    TEST_METHOD(TestMerkleTreeConstruction)
    {
        std::vector<std::string> data = { "Hello", "Merkle", "Tree", "Example" };
        MerkleTree tree(data);
        Assert::IsNotNull(tree.root);
    }

    // Test MerkleTree root hash
    TEST_METHOD(TestMerkleTreeRootHash)
    {
        std::vector<std::string> data = { "Hello", "Merkle", "Tree", "Example" };
        MerkleTree tree(data);
        Assert::AreNotEqual(std::string(""), tree.root->hash);
    }
};

