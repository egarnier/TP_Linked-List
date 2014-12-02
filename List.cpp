//****************************************************************************
//
//
//
//****************************************************************************


 
 
// ===========================================================================
//                                   Libraries
// ===========================================================================



// ===========================================================================
//                                 Project Files
// ===========================================================================
#include "List.h"



//############################################################################
//                                                                           #
//                           Class Template_class                            #
//                                                                           #
//############################################################################

// ===========================================================================
//                         Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                  Constructors
// ===========================================================================
List::List(void)
{
	nb_elements = 0;
	head = NULL;
}

// ===========================================================================
//                                  Destructor
// ===========================================================================
List::~List(void)
{
	delete head;
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
//Getters

int List::GetNbElement(void) const
{
	return nb_elements;
}

Node* List::GetHead(void) const
{
	return head;
}

void List::NewList(const picture& FirstPicture)
{
	nb_elements = 1;
	Node* FirstNode = new Node(FirstPicture);
	head = FirstNode;
}

void List::append(picture NewPicture)
{
	if(head == NULL)
	{
		printf("First you have to create a NewList before adding a NewElement.\n");
	}
	else
	{
		Node* cur = new Node();
		cur=head;

		while(cur->GetNext() != NULL)
		{
			cur = cur->GetNext();
		}

		Node* NewNode = new Node(NewPicture);
		cur->SetNext(NewNode);
		nb_elements += 1;
		cur->~Node();
	}
}

void List::remove(picture DelPicture)
{
	if(head == NULL)
	{
		printf("First you have to create a NewList before removing an element.\n");
	}
	else
	{
		Node* cur = new Node();
		cur=head;

		while(cur->GetNext() != NULL)
		{
			cur = cur->GetNext();
		}
		cur->SetPicture(NULL);
		cur->SetNext(NULL);
		nb_elements -= 1;
		cur->~Node();
	}
}
// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
