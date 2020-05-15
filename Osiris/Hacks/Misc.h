#pragma once

enum class FrameStage;
class GameEvent;
struct UserCmd;

namespace Misc
{
    inline int teamDamage = 0;
    inline int teamKills = 0;

    void edgejump(UserCmd* cmd) noexcept;
    void slowwalk(UserCmd* cmd) noexcept;
    void inverseRagdollGravity() noexcept;
    void updateClanTag(bool = false) noexcept;
    void spectatorList() noexcept;
    void sniperCrosshair() noexcept;
    void recoilCrosshair() noexcept;
    void watermark() noexcept;
    void prepareRevolver(UserCmd*) noexcept;
    void fastPlant(UserCmd*) noexcept;
    void drawBombTimer() noexcept;
    void stealNames() noexcept;
    void disablePanoramablur() noexcept;
    void quickReload(UserCmd*) noexcept;
    bool changeName(bool, const char*, float) noexcept;
    void bunnyHop(UserCmd*) noexcept;
    void fakeBan(bool = false) noexcept;
    void nadePredict() noexcept;
    void quickHealthshot(UserCmd*) noexcept;
    void fixTabletSignal() noexcept;
    void fakePrime() noexcept;
    void killMessage(GameEvent& event) noexcept;
    void fixMovement(UserCmd* cmd, float yaw) noexcept;
    void antiAfkKick(UserCmd* cmd) noexcept;
    void fixAnimationLOD(FrameStage stage) noexcept;
    void autoPistol(UserCmd* cmd) noexcept;
    void autoReload(UserCmd* cmd) noexcept;
    void revealRanks(UserCmd* cmd) noexcept;
    void autoStrafe(UserCmd* cmd) noexcept;
    void removeCrouchCooldown(UserCmd* cmd) noexcept;
    void moonwalk(UserCmd* cmd) noexcept;
    void playHitSound(GameEvent& event) noexcept;
    void fakeDuck(UserCmd* cmd, bool& sendPacket) noexcept;
    float RandomFloat(float min, float max) noexcept;
    void chokePackets(bool& sendPacket, UserCmd* cmd) noexcept;
    void killSound(GameEvent& event) noexcept;
    void drawAimbotFov() noexcept;
    void purchaseList(GameEvent* event = nullptr) noexcept;
    void teamDamageCounter(GameEvent* event) noexcept;
    void MLP() noexcept;
    void customViewmodel() noexcept;
    void pure() noexcept;
    void setName(bool set) noexcept;
    void fakeItem(bool set) noexcept;
}
