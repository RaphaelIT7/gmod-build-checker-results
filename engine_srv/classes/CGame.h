// Generated header

class CGame : public IGame
{
public:
	virtual ~CGame() override; // vtable[0]
	virtual ~CGame() override; // vtable[1]
	virtual void Init(void *param_1); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void CreateGameWindow(); // vtable[4]
	virtual void DestroyGameWindow(); // vtable[5]
	virtual void SetGameWindow(void *param_1); // vtable[6]
	virtual void InputAttachToGameWindow(); // vtable[7]
	virtual void InputDetachFromGameWindow(); // vtable[8]
	virtual void PlayStartupVideos(); // vtable[9]
	virtual void GetMainWindow(); // vtable[10]
	virtual void GetMainDeviceWindow(); // vtable[11]
	virtual void GetMainWindowAddress(); // vtable[12]
	virtual void GetDesktopInfo(int *param_1, int *param_2, int *param_3); // vtable[13]
	virtual void SetWindowXY(int param_1, int param_2); // vtable[14]
	virtual void SetWindowSize(int param_1, int param_2); // vtable[15]
	virtual void GetWindowRect(int *param_1, int *param_2, int *param_3, int *param_4); // vtable[16]
	virtual void IsActiveApp(); // vtable[17]
	virtual void DispatchAllStoredGameMessages() override; // vtable[18]

	CGame(); // size[18]
	void SetActiveApp(bool param_1); // size[14]
};
