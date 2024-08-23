//	t@CผFModelManager.h
//	Tv		 Ffฬว
//	์ฌา	 Fษกๅๅ
//	XVL^	 F2024/02/20	00:07	์ฌ	
//ธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถฒ

// =-=-= CN[hK[h =-=-=
#ifndef _____MODEL_MANAGER_H_____
#define _____MODEL_MANAGER_H_____

// =-=-= CN[h =-=-=
#include <queue>
#include "ModelComponent.h"
#include "SingletonsMng.hxx"

/// @brief fฬว
/// @brief ฅฃฅฃฅฃ VOgลท ฅฃฅฃฅฃ
class ModelManager :public Singleton<ModelManager>
{
	friend Singleton<ModelManager>;
public:
	bool Init();
	void Update();
	void Draw();
	void UnInit();

	void AddQueue(ModelComponent* comp);

private:
	ModelManager();
	~ModelManager();
	struct tPositionCBuffer
	{
		DirectX::XMFLOAT4X4 world;		// [hs๑
		DirectX::XMFLOAT4X4 view;		// r[s๑
		DirectX::XMFLOAT4X4 projection;	// หes๑
	};									//// ภWฬ่obt@

	struct tLightCBuffer
	{
		DirectX::XMFLOAT4	sourcePos;	// ๕นฬภW
		float				alpha;		// ฟl
	};									//// Cgฬ่obt@	

	std::vector<ModelComponent*>	m_modelQueue;// f๐i[ท้z๑
	//std::unique_ptr<VertexShader>					m_vertexShader;
	//std::unique_ptr<PixelShader>					m_pixelShader;
	tPositionCBuffer						m_posCBuf;// ภWฬ่obt@
	tLightCBuffer							m_ligCBuf;// CeBOobt@

	std::queue<ModelComponent*> m_queue;
};

#endif // !_____MODEL_MANAGER_H_____