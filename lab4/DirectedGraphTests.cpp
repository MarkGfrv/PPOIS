#include "pch.h"
#include "CppUnitTest.h"
#include "../Project54/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DirectedGraphTests {
    TEST_CLASS(DirectedGraphTests) {
public:
    TEST_METHOD(TestContainsVertex) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);

        Assert::IsTrue(graph.containsVertex(1));
        Assert::IsTrue(graph.containsVertex(2));
        Assert::IsTrue(graph.containsVertex(3));
        Assert::IsFalse(graph.containsVertex(4));
    }

    TEST_METHOD(TestContainsEdge) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);
        graph.addEdge(1, 2);
        graph.addEdge(2, 3);

        Assert::IsTrue(graph.containsEdge(1, 2));
        Assert::IsTrue(graph.containsEdge(2, 3));
        Assert::IsFalse(graph.containsEdge(1, 3));
        Assert::IsFalse(graph.containsEdge(3, 2));
    }

    TEST_METHOD(TestGetVertexCount) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);

        Assert::AreEqual(static_cast<size_t>(3), graph.getVertexCount());
    }

    TEST_METHOD(TestGetEdgeCount) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);
        graph.addEdge(1, 2);
        graph.addEdge(2, 3);

        Assert::AreEqual(static_cast<size_t>(2), graph.getEdgeCount());
    }

    TEST_METHOD(TestAddVertex) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);

        Assert::IsTrue(graph.containsVertex(1));
        Assert::IsTrue(graph.containsVertex(2));
    }

    TEST_METHOD(TestAddEdge) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addEdge(1, 2);

        Assert::IsTrue(graph.containsEdge(1, 2));
    }

    TEST_METHOD(TestRemoveVertex) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addVertex(3);

        graph.removeVertex(2);

        Assert::IsTrue(graph.containsVertex(1));
        Assert::IsFalse(graph.containsVertex(2));
        Assert::IsTrue(graph.containsVertex(3));
    }

    TEST_METHOD(TestRemoveEdge) {
        DirectedGraph<int> graph;
        graph.addVertex(1);
        graph.addVertex(2);
        graph.addEdge(1, 2);

        graph.removeEdge(1, 2);

        Assert::IsFalse(graph.containsEdge(1, 2));
    }

    // Добавьте другие тесты для остальных методов

    };
}
