using namespace std;
template<typename T>
class node{
public:
	// int data;
	T data;
	node<T>*next;
	//constructor
	// node(int d){
	node(T d){
		data=d;
		next=NULL;

	}
};