class Node{
	public:
		int info;
		Node* next;
};

class Linkedlist{
	private:
		Node* HEAD;
		Node* TAIL;
		
		public:
			Linkedlist();
			~Linkedlist();
			bool isEmpty();
			void addToHead(int data);
			void traverse();
			void remove(int data);
			void removeFromHead();
};


