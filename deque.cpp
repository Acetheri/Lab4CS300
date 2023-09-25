#include <iostream>


class Deque{
private:
  struct Node{
    int val;
    Node* rightNode;
    Node* leftNode;

    Node(int val, Node* n, Node* p){
      val = val;
      leftNode = p;
      rightNode = n;
    }
  };
  Node* topOfStack;
  Node* bottomOfStack;
public:
  Deque(){
    topOfStack = nullptr;
    bottomOfStack = nullptr;
  }

  Node* getTopOfStack(){
    return topOfStack;
  }

  void setTopOfStack(Node* n){
    topOfStack = n;
  }

  Node* getBottomOfStack(){
    return bottomOfStack;
  }

  void setBottomOfStack(Node* p){
    bottomOfStack = p;
  }

  void push_front(int i){
    Node* oldAddress = topOfStack;
    Node* newNode = new Node(i, topOfStack, nullptr);
    setTopOfStack(newNode);
    oldAddress->leftNode = newNode;
  }

  void push_back(int i){
    Node* oldAddress = bottomOfStack;
    Node* newNode = new Node(i, nullptr, bottomOfStack);
    setBottomOfStack(newNode);
    oldAddress->rightNode=newNode;
  }

  int pop_front(){
    if(topOfStack != nullptr){
      int val = topOfStack->val;
      Node* ptrNewTop = topOfStack->rightNode;

      delete topOfStack;
      setTopOfStack(ptrNewTop);
      return val;
    }
    std::cout << "Error: Tried popping but stack is empty\n";
    return 0;
  }
  int pop_back(){
    if(bottomOfStack != nullptr){
      int val = bottomOfStack->val;
      Node* ptrNewBot = bottomOfStack->leftNode;

      delete bottomOfStack;
      setBottomOfStack(ptrNewBot);
      return val;
    }
    std::cout << "Error: Tried popping but stacj is empty\n";
    return 0;
  }

  int peak_front(){
    if(topOfStack != nullptr){
      return topOfStack-> val;
      }
    std::cout << "Error: Tried peaking empty stack\n";
    return 0;
  }

  int peak_back(){
    if(bottomOfStack != nullptr){
      return topOfStack -> val;
    }
    std::cout << "Error: Tried peaking empty stack\n";
    return 0;
  }


  void remove_all(){
    while(getTopOfStack() != nullptr){
      int temp = pop_front();
    }
  }

  ~Deque(){
    remove_all();
  }

};
  
  
