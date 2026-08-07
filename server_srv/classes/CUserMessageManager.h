// Generated header

class CUserMessageManager : public CAutoGameSystemPerFrame
{
public:
	virtual void Name() override; // vtable[0]
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual ~CUserMessageManager() override; // vtable[13]
	virtual ~CUserMessageManager() override; // vtable[14]
	virtual void PreClientUpdate() override; // vtable[17]

	void Destroy(QueuedMessage_t *param_1); // size[71]
	void SendMessage(QueuedMessage_t *param_1); // size[193]
	CUserMessageManager(); // size[155]
	void AddToQueue(QueuedMessage_t *param_1); // size[263]
};
