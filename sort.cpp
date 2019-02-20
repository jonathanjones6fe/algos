#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(auto &list) {
	for (unsigned int i = 1; i < list.size(); i++)
		for (unsigned int j = 0; j < list.size() -1; j++)
			if (list[j] > list[j + 1])
				swap(list[j], list[j + 1]);
}

void printList(auto list) {
	for(unsigned int i = 0; i < list.size(); i++)
		cout<<list[i]<<" ";
	cout<<endl;
}

int main() {
	vector<int> num;
	for(unsigned int i = 5; i > 0; i--)
		num.push_back(i);
	
	cout<<"Before sort"<<endl;
	printList(num);
	
	bubbleSort(num);
	
	cout<<"After sort"<<endl;
	printList(num);
	
	return 0;
}
