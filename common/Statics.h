/*
This file is part of jN, a plugin for Notepad++
Copyright (C)2013 Eugen Kremer <eugen DOT kremer AT gmail DOT com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once
#include <OAIDl.h>


// This class loads type library for given dll. It works as proxy between consumer and the
// real type library. It loads type library if there is at least one real consumer and releases it otherwise
class Statics 
{
public:
	HINSTANCE hInstance;
	HWND	  hWindow;

	Statics();

	ITypeLib* GetTypeLib();

	static Statics& instance();
};