// Generated header

class CBaseAnimatingOverlay : public CBaseAnimating
{
public:
	virtual void ~CBaseAnimatingOverlay() override; // vtable[0]
	virtual void ~CBaseAnimatingOverlay() override; // vtable[1]

	void GetBaseMap();
	void VerifyOrder();
	void SetLayerDuration();
	void GetLayerDuration();
	void IsValidLayer();
	void SetLayerPriority();
	void FindGestureLayer();
	void FindGestureSequenceLayer();
	void IsPlayingGesture();
	void SetLayerCycle();
	void SetLayerCycle();
	void SetLayerCycle();
	void GetLayerCycle();
	void SetLayerPlaybackRate();
	void SetLayerWeight();
	void GetLayerWeight();
	void SetLayerBlendIn();
	void SetLayerBlendOut();
	void SetLayerAutokill();
	void SetLayerLooping();
	void SetLayerNoRestore();
	void GetLayerActivity();
	void GetLayerSequence();
	void RemoveLayer();
	void RemoveGesture();
	void RemoveAllGestures();
	void FastRemoveLayer();
	void GetAnimOverlay();
	void HasActiveLayer();
	void AllocateLayer();
	void AddLayeredSequence();
	void AddGestureSequence();
	void AddGestureSequence();
	void AddGesture();
	void AddGesture();
	void RestartGesture();
	void SetNumAnimOverlays();
};
