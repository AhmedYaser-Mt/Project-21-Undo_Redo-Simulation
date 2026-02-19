#pragma once
#include <iostream>
#include "clsMyStack.h"

using namespace std;

class clsMyString
{
protected:

	string _Value;
	clsMyStack <string> _Undo;
	clsMyStack <string> _Redo;

public:

	void SetValue(string Value)
	{
		_Undo.Push(_Value);
		_Value = Value;
	}

	string GetValue()
	{
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo()
	{
		if (!_Undo.IsEmpty())
		{
			_Redo.Push(_Value);
			_Value = _Undo.Top();
			_Undo.Pop();
		}
	}

	void Redo()
	{
		if (!_Redo.IsEmpty())
		{
			_Undo.Push(_Value);
			_Value = _Redo.Top();
			_Redo.Pop();
		}
	}
};

