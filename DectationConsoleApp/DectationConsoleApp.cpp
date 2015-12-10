// DectationConsoleApp.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>

#include <opencv2\opencv.hpp>
#include <pxcsession.h>

int _tmain(int argc, _TCHAR* argv[])
{
	PXCSession *session = PXCSession_Create();
	PXCSession::ImplVersion version = session->QueryVersion();

	std::cout << version.major << "." << version.minor;
	return 0;
}

