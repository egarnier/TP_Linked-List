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
#include "Node.h"



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
Node::Node(void)
{
	image=NULL;
	next=NULL;
}

Node::Node(const picture& im)
{
	image= new picture(im);
	next=NULL;
}

// ===========================================================================
//                                  Destructor
// ===========================================================================
Node::~Node(void)
{
	delete image;
	delete next;
}

// ===========================================================================
//                                 Public Methods
// ===========================================================================
Node* Node::GetNext(void) const
{
	return next;
}

picture* Node::GetPicture(void) const
{
	return image;
}

void Node::SetNext(Node* const OneNext)
{
	next = OneNext;
}

void Node::SetPicture(picture* const OnePicture)
{
	image = OnePicture;
}

// ===========================================================================
//                                Protected Methods
// ===========================================================================

// ===========================================================================
//                               Non inline accessors
// ===========================================================================
