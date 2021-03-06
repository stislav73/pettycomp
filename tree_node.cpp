#include "tree_node.h"

tree_node::tree_node(tree_node *lhs, tree_node *rhs) :
    lhs_    (lhs),
    rhs_    (rhs)
    {}
tree_node::~tree_node()
    {
        if (lhs_)
        {
            delete lhs_;
            lhs_ = nullptr;
        }
        if (rhs_)
        {
            delete rhs_;
            rhs_ = nullptr;
        }
    }
tree_node* tree_node::get_lhs() const {
        return lhs_;
    }
tree_node* tree_node::get_rhs() const {
        return rhs_;
    }

num_node::num_node(tree_node *lhs, tree_node *rhs, double data) :
    tree_node::tree_node(lhs, rhs),
    data_   (data)
    {}
double num_node::get_data() const {
        return data_;
    }
num_node::~num_node()
{
    if (lhs_)
    {
        delete lhs_;
        lhs_ = nullptr;
    }
    if (rhs_)
    {
        delete rhs_;
        rhs_ = nullptr;
    }
}

id_node::id_node(tree_node *lhs, tree_node *rhs, const char *name) :
    tree_node::tree_node(lhs, rhs),
    name_   (name)
    {}
const char* id_node::get_name() const {
        return name_;
    }
id_node::~id_node()
{
    if (lhs_)
    {
        delete lhs_;
        lhs_ = nullptr;
    }
    if (rhs_)
    {
        delete rhs_;
        rhs_ = nullptr;
    }
}

operator_node::operator_node(tree_node *lhs, tree_node *rhs, int type) :
    tree_node(lhs, rhs),
    type_   (type)
    {}
int operator_node::get_type() const {
        return type_;
    }
operator_node::~operator_node()
{
    if (lhs_)
    {
        delete lhs_;
        lhs_ = nullptr;
    }
    if (rhs_)
    {
        delete rhs_;
        rhs_ = nullptr;
    }
}

eq_node::eq_node(tree_node *lhs, tree_node *rhs) :
    tree_node::tree_node(lhs, rhs)
    {}
eq_node::~eq_node()
{
    if (lhs_)
    {
        delete lhs_;
        lhs_ = nullptr;
    }
    if (rhs_)
    {
        delete rhs_;
        rhs_ = nullptr;
    }
}
