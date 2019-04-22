// Copyright 2019 Korobeinikov Aleksey

#ifndef MODULES_DIAMETER_OF_THE_GRAPH_INCLUDE_DIAMETER_H_
#define MODULES_DIAMETER_OF_THE_GRAPH_INCLUDE_DIAMETER_H_

#include <vector>


class Graph {
 private:
    std::vector<std::vector<int>> v_;
    int count_;  // count of vertex
    int **dist_;
 public:
    ~Graph();
    Graph();
    Graph(std::vector<std::vector<int>> && v, int _n);
    Graph(int *** dist, int _n);
    Graph(const Graph& g);
    Graph& operator=(const Graph& g);
    int diameter_of_tree(void);
    int diameter_of_Graph(void);
    void print_dist();
 private:
    void floid(void);
    void bfs(int x);
};
#endif  // MODULES_DIAMETER_OF_THE_GRAPH_INCLUDE_DIAMETER_H_
