
#include "stack.h"

void init(stack *ps){
	ps->top=0;}

void push(Entry e, stack *ps){
	ps->entry[ps->top++] = e;}

int full(stack *ps){
	return ps->top == MAX;}

void pop(Entry *pe, stack *ps){
	*pe=ps->entry[--ps->top];}

int empty(stack *ps){
	return ps->top==0;}

void top(Entry *pe, stack *ps){
	*pe=ps->entry[ps->top-1];}

int size(stack *ps){
	return ps->top;}

void clear(stack *ps){
	ps->top=0;}

void traverse(stack *ps, void (*pf) (Entry)){
	for(int i=ps->top;i>0;i--){
		(*pf)(ps->entry[i-1]);}}
		
