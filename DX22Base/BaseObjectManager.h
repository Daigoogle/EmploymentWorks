//	t@CผFBaseObjectManager.h
//	Tv		 Fx[XIuWFNgฬว
//	์ฌา	 Fษกๅๅ
//	XVL^	 F2024/02/17	21:40	Rgวม
//ธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถฒ

// =-=-= CN[hK[h =-=-=
#ifndef _____BASE_OBJECT_MANAGER_H_____
#define _____BASE_OBJECT_MANAGER_H_____

// =-=-= CN[h =-=-=
#include <memory>
#include <vector>
#include <queue>
#include "BaseObject.h"
#include "BaseObjectInstance.h"
#include "SingletonsMng.hxx"

/// @brief BaseObjectฬว
/// @brief ฅฃฅฃฅฃ VOgลท ฅฃฅฃฅฃ
class BaseObjectManager final :public Singleton<BaseObjectManager>
{
	friend Singleton<BaseObjectManager>;
public:
	enum class ProcessMode
	{
		MainScene,
		LoadScene,
		_Max
	};

	bool Init();
	void Update();
	void UnInit();

	BaseObject Make(SceneBase*);

	void SetMode(ProcessMode mode);
	ProcessMode GetMode();

	void DeleteMainObject();
	void DeleteLoadObject();

	void InitMainObjects();
private:
	BaseObjectManager();
	~BaseObjectManager();

	static void ResetFirstMainID();
	static void ResetFirstLoadID();

	void InitLoadObjects();
	void UpdateMainObjects();
	void UpdateLoadObjects();

	std::vector<std::unique_ptr<BaseObjectInstance>> m_MainObjects;
	std::queue<BaseObjectInstance*>					 m_InitMainObjQueue;
	static int										 ms_nLastGenerateMainID;

	std::vector<std::unique_ptr<BaseObjectInstance>> m_LoadObjects;
	std::queue<BaseObjectInstance*>					 m_InitLoadObjQueue;
	static int										 ms_nLastGenerateLoadID;

	ProcessMode m_Mode;
};

namespace ObjectManager
{
	BaseObject Make(SceneBase*);
}

#endif // !_____BASE_OBJECT_MANAGER_H_____