#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//Function to list processes 'PS'
void list_processes()
{
	FILE* pipe = popen("ps -e", "r"); // ps -e reads all current processes on the system
	if(!pipe) 
	{
		cerr << "Error while calling ps command" << endl;
		return;
	} 
	
	char buffer[128];
	while (fgets(buffer, sizeof(buffer), pipe) != nullptr) //fgets()  reafd lines and print them 
	{
		cout << buffer;
	}
}



int main()
{
	cout << "List of current programms: " << endl;
	list_processes();
	return 0;
}
