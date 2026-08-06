// Generated header

class CGame : public IGame
{
public:
	virtual void ~CGame() override; // vtable[0]
	virtual void ~CGame() override; // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void CreateGameWindow(); // vtable[4]
	virtual void DestroyGameWindow(); // vtable[5]
	virtual void SetGameWindow(); // vtable[6]
	virtual void InputAttachToGameWindow(); // vtable[7]
	virtual void InputDetachFromGameWindow(); // vtable[8]
	virtual void PlayStartupVideos(); // vtable[9]
	virtual void GetMainWindow(); // vtable[10]
	virtual void GetMainDeviceWindow(); // vtable[11]
	virtual void GetMainWindowAddress(); // vtable[12]
	virtual void GetDesktopInfo(); // vtable[13]
	virtual void SetWindowXY(); // vtable[14]
	virtual void SetWindowSize(); // vtable[15]
	virtual void GetWindowRect(); // vtable[16]
	virtual void IsActiveApp(); // vtable[17]
	virtual void DispatchAllStoredGameMessages() override; // vtable[18]

	void CGame();
	void SetActiveApp();
};
