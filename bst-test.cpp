#include <iostream>
#include <map>
#include "bst.h"
#include "avlbst.h"

using namespace std;


int main(int argc, char *argv[])
{
    // Binary Search Tree tests
    // BinarySearchTree<char,int> bt;
    // bt.insert(std::make_pair('a',1));
    // bt.insert(std::make_pair('b',2));
    
    // cout << "Binary Search Tree contents:" << endl;
    // for(BinarySearchTree<char,int>::iterator it = bt.begin(); it != bt.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // if(bt.find('b') != bt.end()) {
    //     cout << "Found b" << endl;
    // }
    // else {
    //     cout << "Did not find b" << endl;
    // }
    // cout << "Erasing b" << endl;
    // bt.remove('b');

    // // AVL Tree Tests
    // AVLTree<char,int> at;
    // at.insert(std::make_pair('a',1));
    // at.insert(std::make_pair('b',2));

    // cout << "\nAVLTree contents:" << endl;
    // for(AVLTree<char,int>::iterator it = at.begin(); it != at.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    // if(at.find('b') != at.end()) {
    //     cout << "Found b" << endl;
    // }
    // else {
    //     cout << "Did not find b" << endl;
    // }
    // cout << "Erasing b" << endl;
    // at.remove('b');


    // My tests
    BinarySearchTree<int, double> bst1;
	bst1.insert(std::make_pair(2, 1.0));
	bst1.insert(std::make_pair(1, 1.0));
	bst1.insert(std::make_pair(3, 1.0));
    bst1.print();
	bst1.remove(2);
    bst1.print();

    BinarySearchTree<int, double> bst2;
    bst2.insert(std::make_pair(5, 1.0));
	bst2.insert(std::make_pair(2, 1.0));
	bst2.insert(std::make_pair(6, 1.0));
	bst2.insert(std::make_pair(4, 1.0));
    bst2.print();
	bst2.remove(5);
    bst2.print();

    return 0;
}
