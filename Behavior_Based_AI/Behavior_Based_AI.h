#ifndef BEHAVIOR_BASED_AI
#define BEHAVIOR_BASED_AI

#include <vector>

class Node
{

public:
	Node* Getdate(int  search_value);
	

public:

	Node(int v) :
		Value(v),
		Parent(nullptr)
	{
		Children.clear();

		if (Value == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				Node* new_node = new Node(i + 1);
				Children.push_back(new_node);
			}

		}
		
	}

private:

	Node* Search(int search_value);

	int Value;
	Node* Parent;
	std::vector<Node*>Children;


};



#endif // !BEHAVIOR_BASED_AI
