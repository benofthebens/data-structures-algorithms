//
// Created by benja on 14/03/2025.
//

#ifndef NODE_H
#define NODE_H
class Node {
  public:
    Node(int data);
    ~Node();
    int get_data();
    Node* get_pointer() const;
    void set_pointer(Node* node);
  private:
    Node* pointer;
    int data;
};
#endif //NODE_H
