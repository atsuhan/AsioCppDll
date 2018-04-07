#pragma once

#ifdef TESTFUNCDLL_EXPORT
#define TESTFUNCDLL_API __declspec(dllexport) 
#else
#define TESTFUNCDLL_API __declspec(dllimport) 
#endif

extern "C" {

//asiodrivers.cpp
	//ASIO�h���C�o����ruturn
	TESTFUNCDLL_API int GetAsioDriverSum();
	//ASIO�h���C�o���s���return
	TESTFUNCDLL_API char* GetAsioDriverNames(int j);
	//Unity�̃Z�b�e�B���Oscene����h���C�o�ԍ����擾
	TESTFUNCDLL_API void SelectAsioDriver(int driverID);

//asiocppdll.cpp
	//�T���v�����O���g���A�T���v������ݒ�
	TESTFUNCDLL_API void ConfigSampleRateLength(int sampleRate, int sampleLength);
	//ASIO���N��
	TESTFUNCDLL_API void StartAsioMain();
	//4�̐M�����擾
	TESTFUNCDLL_API void GetFourSoundSignal(int* tempMem0, int* tempMem1, int* tempMem2, int* tempMem3);
	//ASIO���I��
	TESTFUNCDLL_API void StopAsioMain();
}