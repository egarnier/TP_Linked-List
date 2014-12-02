//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __NODE_H__
#define __NODE_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>



// ===========================================================================
//                                Project Files
// ===========================================================================
#include "picture.h"



// ===========================================================================
//                              Class declarations
// ===========================================================================






class Node
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    Node(void);
    Node(const picture& im);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~Node(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
    Node* GetNext(void) const;
    picture* GetPicture(void) const;
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================
    void SetNext(Node* const OneNext);
    void SetPicture(picture* const OnePicture);
    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================

    // =======================================================================
    //                             Public Attributes
    // =======================================================================





  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*Template_class(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
    Node(const Node &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };


    // =======================================================================
    //                              Protected Methods
    // =======================================================================

    // =======================================================================
    //                             Protected Attributes
    // =======================================================================
Node* next;
picture* image;
};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================

// ===========================================================================
//                              Setters' definitions
// ===========================================================================

// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __NODE_H__

