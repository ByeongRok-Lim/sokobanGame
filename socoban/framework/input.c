#include "stdafx.h"
#include "input.h"

static bool s_currentKeyStates[256] = { false };
static bool s_prevKeyStates[256] = { false };
void UpdateInput()
{

}

bool GetButtonDown(EKeyCode keyCode)
{
	if (false == s_prevKeyStates[keyCode] && s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool GetButtonUp(EKeyCode keyCode)
{
	if (false == s_prevKeyStates[keyCode] && s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool GetButoon(EKeyCode keyCode)
{
	if (false == s_prevKeyStates[keyCode] && s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}