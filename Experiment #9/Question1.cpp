// Dogukan kaan Bozkurt
 
#include <iostream>
#include <list>
using namespace std;

void printList(list<string> &);

main()
{
	const int SIZE=4;
	string array[SIZE]={"You and Me","Mamma","Killing me Softly","Vivo per lei"};
	
	list<string>playlist; 				// create list of strings
	list<string>playlist2; 				// create list of strings

	// insert items in playlist
	playlist.push_front("My Way");
	playlist.push_front("Time To Say Goodbye");
	playlist.push_back("Ave Maria");
	playlist.push_back("Love in Portofino");
	
	cout << "Playlist contains:\n";
	printList(playlist);
	
	playlist.sort(); // sort playlist
	cout << "Playlist after sorting contains:\n";
	printList(playlist);
	
	// insert elements of array into playlist2
	playlist2.insert(playlist2.begin(),array,array+SIZE);
	cout << "After insert, second playlist contains:\n";
 	printList(playlist2);
 	
 	// remove playlist2 elements and insert at end of playlist
	playlist.splice(playlist.end(),playlist2);
 	cout << "After splice, playlist contains:\n";
 	printList(playlist);
 	cout << "After splice, second playlist contains:\n";
 	printList(playlist2);
 	
 	playlist.sort(); // sort playlist
	cout << "After sort, playlist contains:\n";
	printList(playlist);
	
	// insert elements of array into playlist2
	playlist2.insert(playlist2.begin(),array,array+SIZE);
	playlist2.sort();
 	cout << "After insert and sort, second playlist contains:\n";
 	printList(playlist2);
 	
 	// remove playlist2 elements and insert into playlist in sorted order
	playlist.merge(playlist2);
 	cout << "After merge playlist contains:\n";
 	printList(playlist);
 	cout << "After merge second playlist contains:\n";
 	printList(playlist2);
 	
 	playlist.pop_front(); 		// remove element from front
	playlist.pop_back(); 		// remove element from back
 	cout << "After pop_front and pop_back playlist contains:\n";
	printList(playlist);
 	
 	playlist.unique(); 		// remove duplicate	elements
 	cout << "\nAfter unique, playlist contains:\n";
 	printList(playlist);
 	
 	// swap elements of playlist and playlist2
	playlist.swap(playlist2);
 	cout << "After swap, playlist contains:\n";
 	printList(playlist);
 	cout << "After swap, second playlist contains:\n";
 	printList(playlist2);
 	
 	// replace contents of playlist with elements of playlist2
	playlist.assign(playlist2.begin(),playlist2.end());
 	cout << "After assign, playlist contains:\n";
 	printList(playlist);
 	cout << "After assign, second playlist contains:\n";
 	printList(playlist2);
 	
 	playlist.remove("My Way"); 		// remove all My Ways
 	cout << "After remove, playlist contains:\n";
 	printList(playlist);
}

void printList(list<string> &a)
{
	for(list<string>::iterator it=a.begin(); it!=a.end(); it++)
		cout << *it << " " << endl;
	cout << endl;
}
