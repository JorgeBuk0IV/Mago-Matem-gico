#include "MisLibrerias.h"
#include "Wizzard.h"
int main() {
	Wizzard* mago = new Wizzard();
	while (true)
	{
		mago->Delete();
		mago->Move();
		mago->Show();
		_sleep(100);
	}

	return 0;
}