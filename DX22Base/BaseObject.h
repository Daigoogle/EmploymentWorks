//	t@C¼FBaseObject.h
//	Tv		 FR|[lgwüÉ¨¯éIuWFNgÌîB
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/02/09	03:26	ì¬	
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

//	=-=-= CN[hK[h =-=-=
#ifndef _____BASE_OBJECT_H_____
#define _____BASE_OBJECT_H_____

//	=-=-= CN[h =-=-=
#include "BaseObjectInstance.h"

class BaseObject
{
public:
	BaseObject();
	~BaseObject();

	void SetInstance(BaseObjectInstance* pInstance);
	bool IsNull();

	const int GetID();
	void SetID(int nID);
	const int GetTag();
	void SetTag(int nTagNo);
	void SetTag(std::string strTagName);
	const bool IsActive();
	void SetActive(bool bIsActive);
	const bool IsStopUpdate();
	void SetStopUpdate(bool bStopUpdate);
	BaseObject GetParent();
	const std::string GetName();
	void SetName(std::string sName);
	void AddChild(BaseObject& pChild);
	void RemoveChild(BaseObject& pChild);
	SceneBase* GetScene();

	template<typename TypeComponent>
	TypeComponent* AddComponent()
	{
		if (m_pInstance == nullptr)
			return nullptr;
		return m_pInstance->AddComponent<TypeComponent>();
	}

	template<typename TypeComponent>
	TypeComponent* GetComponent()
	{
		if (m_pInstance == nullptr)
			return nullptr;
		return m_pInstance->GetComponent<TypeComponent>();
	}

protected:

private:
	BaseObjectInstance* m_pInstance;	//	ÀÌ
};

#endif // !_____BASE_OBJECT_H_____