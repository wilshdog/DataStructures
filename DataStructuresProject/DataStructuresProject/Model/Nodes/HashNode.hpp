//
//  HashNode.hpp
//  DataStructuresProject
//
//  Created by Wilsher, Ethan on 4/27/18.
//  Copyright © 2018 Wilsher, Ethan. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
    
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    
    Type getData();
    long getKey() const;
    void setData(Type data);
};

template <class Type>
HashNode<Type> :: HashNode()
{
    
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}
#endif /* HashNode_hpp */
