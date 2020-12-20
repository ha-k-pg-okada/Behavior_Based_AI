#include "Behavior_Based_AI.h"

Node* Node::Getdate(int search_value)
{
	return Search(search_value);
}


Node* Node::Search(int search_value)
{
	//一致
	if (search_value == Value)
	{
		return this;
	}

	//子ノードで検索
	for (auto i = Children.begin(); i != Children.end(); i++)
	{
		Node* root = (*i)->Search(search_value);

		if (root != nullptr)
		{
			return root;
		}


	}

	return nullptr;
}

