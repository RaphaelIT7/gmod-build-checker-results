// Generated header

class ITextureInternal : public ITexture
{
public:
	virtual ~ITextureInternal(); // vtable[43]
	virtual ~ITextureInternal(); // vtable[44]
	virtual void __cxa_pure_virtual(); // vtable[52]

	void CreateReferenceTextureFromHandle(char *param_1, char *param_2, int param_3); // size[114]
	void Destroy(ITextureInternal *param_1); // size[23]
	void ChangeRenderTarget(ITextureInternal *param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, RenderTargetType_t param_6, uint param_7, uint param_8); // size[135]
	void CreateFileTexture(char *param_1, char *param_2); // size[61]
	void CreateProceduralTexture(char *param_1, char *param_2, int param_3, int param_4, int param_5, ImageFormat param_6, int param_7, ITextureRegenerator *param_8); // size[111]
	void CreateRenderTarget(char *param_1, int param_2, int param_3, RenderTargetSizeMode_t param_4, ImageFormat param_5, RenderTargetType_t param_6, uint param_7, uint param_8); // size[103]
};
