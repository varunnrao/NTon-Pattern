#include "NTon.h"

#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"


int main()
{
	//Display of Liskov's Principle
	
	NTon::set_N(4);
		
	{	
	
		A* a1 = A::get();
	
		a1->del();
		A* a2 = A::get();
	
	
		a2->del();
	
		a2 = A::get();
		
		NTon::disp();
	
		a2->del();
	
		A* a3 = B::get();
		a3->del();
	
		cout<<NTon::get_curr_num_of_objects()<<'\n';

	}
	
}
