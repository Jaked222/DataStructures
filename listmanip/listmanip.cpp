// ============================================================================ 
// listmanip.cpp
// ~~~~~~~~~~~~~
// YOUR NAME
// implement the missing functions
// ============================================================================ 

#include <iostream>
#include <stdexcept>
#include <sstream>
#include "listmanip.h"
#include "Lexer.h"
#include "term_control.h"

using namespace std; // BAD PRACTICE

extern const string usage_msg = "List Manipulation Toy. Version 0.1\n"
                                "Author: YOURNAME\n"
                                "Report bugs to yourid@buffalo.edu";
/**
 * -----------------------------------------------------------------------------
 * create a new singly linked list containing keys which are integers from 
 * a given vector of tokens
 * return the pointer to the head of the newly created list
 * -----------------------------------------------------------------------------
 */
Node* new_list(const vector<Token>& tok_vec)
{
    // YOUR CODE GOES HERE
    return NULL; // and don't return NULL unless you have to
}

/**
 * -----------------------------------------------------------------------------
 * given the pointers to the heads of two singly linked lists
 * modify (only the pointers of) the first list so that only the common elements
 * remain. 
 * - return the head pointer to the resulting first list
 * - assume the two input list are already sorted and each of them has no
 *   duplicate key. 
 * - if any of of them is not sorted or has duplicate keys, then throw a
 *   runtime_error() with the appropriate message
 * - do remember to free-up the space of the deleted elements
 * -----------------------------------------------------------------------------
 */
Node* keep_common(Node* head1, Node* head2)
{
    // YOUR CODE GOES HERE
    return NULL; // and don't return NULL unless you have to
}


/**
 * -----------------------------------------------------------------------------
 * given the pointer to the head of a singly linked list, remove the duplicate
 * elements and return the pointer to the head of the new list
 * return the head pointer to the resulting list
 * - assumes that the given list (pointed to by head) is sorted in
 *   non-decreasing order
 * - if not, throw a runtime_error exception stating the error
 * -----------------------------------------------------------------------------
 */
Node* remove_duplicates(Node* head)
{
    // YOUR CODE GOES HERE
    return NULL; // and don't return NULL unless you have to
}

/**
 * -----------------------------------------------------------------------------
 * merge two sorted lists pointed to by head1 and head2
 * throw runetime_error("Please give me two sorted lists") if any one of them
 * is not already sorted
 * return pointer to the head of the merged list
 * only modify pointers. DONOT modify the key of any node
 * -----------------------------------------------------------------------------
 */
Node* merge_lists(Node* head1, Node* head2) 
{
    // YOUR CODE GOES HERE
    return NULL; // and don't return NULL unless you have to
}

/**
 * -----------------------------------------------------------------------------
 * sort the list pointed to by 'head'
 * return the pointer to the head of the new list
 * DO NOT modify the keys, just manipulate the pointers
 * -----------------------------------------------------------------------------
 */
Node* sort_list(Node* head) 
{
    // YOUR CODE GOES HERE
    return NULL; // and don't return NULL unless you have to
}

// *****************************************************************************
// DO NOT MODIFY THIS FILE BEYOND THIS POINT
// *****************************************************************************

/**
 * -----------------------------------------------------------------------------
 * free the memory of all nodes starting from ptr down
 * -----------------------------------------------------------------------------
 */
void free_list(Node* ptr) {
    Node* temp;
    while (ptr != NULL) {
        temp = ptr;
        ptr = ptr->next;
        delete temp;
    }
}
