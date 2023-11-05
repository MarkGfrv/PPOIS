#pragma once
#include <iostream>
#include <list>
#include <stdexcept>
using namespace std;
template <typename T>
class DirectedGraph {
public:
    using VertexIterator = typename list<T>::iterator;
    using EdgeIterator = typename list<pair<T, T>>::iterator;
    using IncidentEdgeIterator = typename list<pair<T, T>>::iterator;
    using AdjacentVertexIterator = typename list<T>::iterator;

    DirectedGraph() {}

    ~DirectedGraph() {}

    bool containsVertex(const T& v) const {
        for (const auto& vertex : vertices) {
            if (vertex == v) {
                return true;
            }
        }
        return false;
    }

    bool containsEdge(const T& source, const T& target) const {
        for (const auto& edge : edges) {
            if (edge.first == source && edge.second == target) {
                return true;
            }
        }
        return false;
    }

    size_t getVertexCount() const {
        return vertices.size();
    }

    size_t getEdgeCount() const {
        return edges.size();
    }

    void addVertex(const T& v) {
        if (containsVertex(v)) {
            throw invalid_argument("Vertex already exists in the graph");
        }
        vertices.push_back(v);
    }

    void addEdge(const T& source, const T& target) {
        if (!containsVertex(source) || !containsVertex(target)) {
            throw invalid_argument("One or both vertices do not exist in the graph");
        }
        if (containsEdge(source, target)) {
            throw invalid_argument("Edge already exists in the graph");
        }
        edges.push_back(make_pair(source, target));
    }

    void removeVertex(const T& v) {
        if (!containsVertex(v)) {
            throw invalid_argument("Vertex does not exist in the graph");
        }
        vertices.remove(v);
        removeIncidentEdges(v);
    }

    void removeEdge(const T& source, const T& target) {
        if (!containsVertex(source) || !containsVertex(target)) {
            throw invalid_argument("One or both vertices do not exist in the graph");
        }
        edges.remove(make_pair(source, target));
    }

    VertexIterator beginVertices() {
        return vertices.begin();
    }

    VertexIterator endVertices() {
        return vertices.end();
    }

    EdgeIterator beginEdges() {
        return edges.begin();
    }

    EdgeIterator endEdges() {
        return edges.end();
    }

    IncidentEdgeIterator beginIncidentEdges(const T& v) {
        return edges.begin();
    }

    IncidentEdgeIterator endIncidentEdges(const T& v) {
        return edges.end();
    }

    AdjacentVertexIterator beginAdjacentVertices(const T& v) {
        return vertices.begin();
    }

    AdjacentVertexIterator endAdjacentVertices(const T& v) {
        return vertices.end();
    }

private:
    list<T> vertices;
    list<pair<T, T>> edges;

    void removeIncidentEdges(const T& v) {
        edges.remove_if([&](const pair<T, T>& edge) {
            return edge.first == v || edge.second == v;
            });
    }
};
