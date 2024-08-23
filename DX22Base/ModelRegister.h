//	t@C¼FModelRegister.h
//	Tv		 FfÌÇÝÝAi[
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/02/08	18:13	ì¬	
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

//	=-=-= CN[hK[h =-=-=
#ifndef _____MODEL_REGISTER_H_____
#define _____MODEL_REGISTER_H_____

//	=-=-= CN[h =-=-=
#include <map>
#include <string>
#include "Model.h"
#include "SingletonsMng.hxx"

/// @brief fÌÇ
/// @brief ¥£¥£¥£ VOgÅ· ¥£¥£¥£
class ModelRegister final :public Singleton<ModelRegister>
{
	friend Singleton<ModelRegister>;
public:
	Model* LoadModel(const std::string& Path);

private:
	ModelRegister();
	~ModelRegister();

	std::map<std::string, Model*> m_Models;
};

#endif // !_____MODEL_REGISTER_H_____