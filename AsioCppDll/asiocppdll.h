#pragma once

#ifdef TESTFUNCDLL_EXPORT
#define TESTFUNCDLL_API __declspec(dllexport) 
#else
#define TESTFUNCDLL_API __declspec(dllimport) 
#endif

extern "C" {

//asiodrivers.cpp
	//ASIOドライバ数をruturn
	TESTFUNCDLL_API int GetAsioDriverSum();
	//ASIOドライバ名行列をreturn
	TESTFUNCDLL_API char* GetAsioDriverNames(int j);
	//Unityのセッティングsceneからドライバ番号を取得
	TESTFUNCDLL_API void SelectAsioDriver(int driverID);

//asiocppdll.cpp
	//サンプリング周波数、サンプル数を設定
	TESTFUNCDLL_API void ConfigSampleRateLength(int sampleRate, int sampleLength);
	//ASIOを起動
	TESTFUNCDLL_API void StartAsioMain();
	//4つの信号を取得
	TESTFUNCDLL_API void GetFourSoundSignal(int* tempMem0, int* tempMem1, int* tempMem2, int* tempMem3);
	//ASIOを終了
	TESTFUNCDLL_API void StopAsioMain();
}