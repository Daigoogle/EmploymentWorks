//	t@C¼FShaderList.h
//	Tv		 FVF[_[ÌÇÝÝAi[
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/02/08	18:58	ì¬	
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

//	=-=-= CN[hK[h =-=-=
#ifndef _____SHADER_LIST_H_____
#define _____SHADER_LIST_H_____

//	=-=-= CN[h =-=-=
#include <map>
#include <string>
#include "Shader.h"
#include "SingletonsMng.hxx"

/// @brief VF[_[ÌÇ
/// @brief ¥£¥£¥£ VOgÅ· ¥£¥£¥£
class ShaderList final :public Singleton<ShaderList>
{
	friend Singleton<ShaderList>;
public:
	PixelShader* LoadPixelShader(const std::string& path);
	VertexShader* LoadVertexShader(const std::string& path);

private:
	ShaderList();
	~ShaderList();

	std::map<std::string, PixelShader*>		m_PixelShaders;
	std::map<std::string, VertexShader*>	m_VertexShaders;
};

#endif // !_____SHADER_LIST_H_____