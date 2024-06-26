#ifndef LISTNODE_HPP
#define LISTNODE_HPP

template <typename T>
list_node<T>::list_node() : data(0), next(nullptr) {}

template <typename T>
list_node<T>::list_node(const T data) : data(data), next(nullptr) {}

template <typename T>
list_node<T>::list_node(const std::shared_ptr<list_node<T>> &node)
{
    this->data = node->data;
    this->next = node->next;
}

template <typename T>
void list_node<T>::set(const T data)
{
    this->data = data;
}

template <typename T>
void list_node<T>::set_next(const list_node<T> &node)
{
    this->next = std::shared_ptr<list_node<T>>(node);
}

template <typename T>
void list_node<T>::set_next(const std::shared_ptr<list_node<T>> &node)
{
    this->next = node;
}

template <typename T>
T list_node<T>::get() const
{
    return this->data;
}

template <typename T>
T &list_node<T>::get_ptr()
{
    return this->data;
}

template <typename T>
std::shared_ptr<list_node<T>> list_node<T>::get_next(void) const
{
    return this->next;
}

template <typename T>
bool list_node<T>::operator == (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data == node->data) ? true : false;
}

template <typename T>
bool list_node<T>::operator != (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data != node->data) ? true : false;
}

template <typename T>
bool list_node<T>::operator > (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data > node->data) ? true : false;
}

template <typename T>
bool list_node<T>::operator < (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data < node->data) ? true : false;
}

template <typename T>
bool list_node<T>::operator >= (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data >= node->data) ? true : false;
}

template <typename T>
bool list_node<T>::operator <= (const std::shared_ptr<list_node<T>> &node) const
{
    return (this->data <= node->data) ? true: false;
}

#endif
