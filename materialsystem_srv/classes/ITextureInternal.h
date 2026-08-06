// Generated header

class ITextureInternal : public ITexture
{
public:
	virtual ~ITextureInternal(); // vtable[43]
	virtual ~ITextureInternal(); // vtable[44]
	virtual void __cxa_pure_virtual(); // vtable[52]

	void CreateReferenceTextureFromHandle(char *param_1, char *param_2, intparam_3); // size[114]
	void Destroy(ITextureInternal *param_1); // size[23]
	void ChangeRenderTarget(ITextureInternal *param_1, intparam_2, intparam_3, RenderTargetSizeMode_tparam_4, ImageFormatparam_5, RenderTargetType_tparam_6, uintparam_7, uintparam_8); // size[167]
	void CreateFileTexture(char *param_1, char *param_2); // size[61]
	void CreateProceduralTexture(char *param_1, char *param_2, intparam_3, intparam_4, intparam_5, ImageFormatparam_6, intparam_7, ITextureRegenerator *param_8); // size[111]
	void CreateRenderTarget(char *param_1, intparam_2, intparam_3, RenderTargetSizeMode_tparam_4, ImageFormatparam_5, RenderTargetType_tparam_6, uintparam_7, uintparam_8); // size[103]
};
