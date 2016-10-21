struct CNode {
	int data;
	CNode* next;
	CNode(int x = 0) :data(x), next(0) {};
};

bool is_palindrom(CNode* node);