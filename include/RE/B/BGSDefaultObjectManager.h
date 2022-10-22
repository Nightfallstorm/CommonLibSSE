#pragma once

#include "RE/B/BSTSingleton.h"
#include "RE/F/FormTypes.h"
#include "RE/T/TESForm.h"

namespace RE
{
	struct DEFAULT_OBJECTS
	{
		enum DEFAULT_OBJECT
		{
			kWerewolfSpell = 0,
			kSittingAngleLimit = 1,
			kAllowPlayerShout = 2,
			kGold = 3,
			kLockpick = 4,
			kSkeletonKey = 5,
			kPlayerFaction = 6,
			kGuardFaction = 7,
			kDefaultMusic = 8,
			kBattleMusic = 9,
			kDeathMusic = 10,
			kSuccessMusic = 11,
			kLevelUpMusic = 12,
			kDungeonClearedMusic = 13,
			kPlayerVoiceMale = 14,
			kPlayerVoiceMaleChild = 15,
			kPlayerVoiceFemale = 16,
			kPlayerVoiceFemaleChild = 17,
			kEatPackageDefaultFood = 18,
			kLeftHandEquip = 19,
			kRightHandEquip = 20,
			kEitherHandEquip = 21,
			kVoiceEquip = 22,
			kPotionEquip = 23,
			kEveryActorAbility = 24,
			kCommandedActorAbility = 25,
			kDrugWearsOffImageSpace = 26,
			kFootstepSet = 27,
			kLandscapeMaterial = 28,
			kDragonLandZoneMarker = 29,
			kDragonCrashZoneMarker = 30,
			kCombatStyle = 31,
			kDefaultPackList = 32,
			kWaitForDialoguePackage = 33,
			kLocRefTypeBoss = 34,
			kVirtualLocation = 35,
			kPersistAllLocation = 36,
			kInventoryPlayer = 37,
			kPathingTestNPC = 38,
			kFavorCostSmall = 39,
			kFavorCostMedium = 40,
			kFavorCostLarge = 41,
			kFavorGiftsPerDay = 42,
			kActionSwimStateChange = 43,
			kActionLook = 44,
			kActionLeftAttack = 45,
			kActionLeftReady = 46,
			kActionLeftRelease = 47,
			kActionLeftInterrupt = 48,
			kActionRightAttack = 49,
			kActionRightReady = 50,
			kActionRightRelease = 51,
			kActionRightInterrupt = 52,
			kActionDualAttack = 53,
			kActionDualRelease = 54,
			kActionActivate = 55,
			kActionJump = 56,
			kActionFall = 57,
			kActionLand = 58,
			kActionSneak = 59,
			kActionVoice = 60,
			kActionVoiceReady = 61,
			kActionVoiceRelease = 62,
			kActionVoiceInterrupt = 63,
			kActionIdle = 64,
			kActionSprintStart = 65,
			kActionSprintStop = 66,
			kActionDraw = 67,
			kActionSheath = 68,
			kActionLeftPowerAttack = 69,
			kActionRightPowerAttack = 70,
			kActionDualPowerAttack = 71,
			kActionStaggerStart = 72,
			kActionBlockHit = 73,
			kActionBlockAnticipate = 74,
			kActionRecoil = 75,
			kActionLargeRecoil = 76,
			kActionBleedoutStart = 77,
			kActionBleedoutStop = 78,
			kActionIdleStop = 79,
			kActionWardHit = 80,
			kActionForceEquip = 81,
			kActionShieldChange = 82,
			kActionPathStart = 83,
			kActionPathEnd = 84,
			kActionLargeMovementDelta = 85,
			kActionFlyStart = 86,
			kActionFlyStop = 87,
			kActionHoverStart = 88,
			kActionHoverStop = 89,
			kActionBumpedInto = 90,
			kActionSummonedStart = 91,
			kActionTalkingIdle = 92,
			kActionListenIdle = 93,
			kActionDeath = 94,
			kActionDeathWait = 95,
			kActionIdleWarn = 96,
			kActionMoveStart = 97,
			kActionMoveStop = 98,
			kActionTurnRight = 99,
			kActionTurnLeft = 100,
			kActionTurnStop = 101,
			kActionMoveForward = 102,
			kActionMoveBackward = 103,
			kActionMoveLeft = 104,
			kActionMoveRight = 105,
			kActionResetAnimationGraph = 106,
			kActionKnockdown = 107,
			kActionGetUp = 108,
			kActionIdleStopInstant = 109,
			kActionRagdollInstant = 110,
			kActionWaterwalkStart = 111,
			kActionReload = 112,
			kPickupSoundGeneric = 113,
			kPutdownSoundGeneric = 114,
			kPickupSoundWeapon = 115,
			kPutdownSoundWeapon = 116,
			kPickupSoundArmor = 117,
			kPutdownSoundArmor = 118,
			kPickupSoundBook = 119,
			kPutdownSoundBook = 120,
			kPickupSoundIngredient = 121,
			kPutdownSoundIngredient = 122,
			kHarvestSound = 123,
			kHarvestFailedSound = 124,
			kWardBreakSound = 125,
			kWardAbsorbSound = 126,
			kWardDeflectSound = 127,
			kMagicFailSound = 128,
			kShoutFailSound = 129,
			kHeartbeatSoundFast = 130,
			kHeartbeatSoundSlow = 131,
			kImagespaceLowHealth = 132,
			kSoulCapturedSound = 133,
			kNoActivationSound = 134,
			kMapMenuLoopingSound = 135,
			kDialogueVoiceCategory = 136,
			kNonDialogueVoiceCategory = 137,
			kSFXToFadeInDialogueCategory = 138,
			kPauseDuringMenuCategoryFade = 139,
			kPauseDuringMenuCategoryImmediate = 140,
			kPauseDuringLoadingMenuCategory = 141,
			kMusicSoundCategory = 142,
			kStatsMuteCategory = 143,
			kStatsMusic = 144,
			kMasterSoundCategory = 145,
			kTimeSensitiveSoundCategory = 146,
			kDialogueOutputModel3D = 147,
			kDialogueOutputModel2D = 148,
			kPlayersOutputModel1stPerson = 149,
			kPlayersOutputModel3rdPerson = 150,
			kInterfaceOutputModel = 151,
			kReverbType = 152,
			kUnderwaterLoopSound = 153,
			kUnderwaterReverbType = 154,
			kKeywordHorse = 155,
			kKeywordUndead = 156,
			kKeywordNPC = 157,
			kKeywordBeastRace = 158,
			kKeywordDummyObject = 159,
			kKeywordUseGeometryEmitter = 160,
			kKeywordMustStop = 161,
			kKeywordUpdateDuringArchery = 162,
			kKeywordSkipOutfitItems = 163,
			kMaleFaceTextureSetHead = 164,
			kMaleFaceTextureSetMouth = 165,
			kMaleFaceTextureSetEyes = 166,
			kFemaleFaceTextureSetHead = 167,
			kFemaleFaceTextureSetMouth = 168,
			kFemaleFaceTextureSetEyes = 169,
			kImageSpaceModifierforinventorymenu = 170,
			kPackagetemplate = 171,
			kMainMenuCell = 172,
			kDefaultMovementTypeWalk = 173,
			kDefaultMovementTypeRun = 174,
			kDefaultMovementTypeSwim = 175,
			kDefaultMovementTypeFly = 176,
			kDefaultMovementTypeSneak = 177,
			kDefaultMovementTypeSprint = 178,
			kKeywordSpecialFurniture = 179,
			kKeywordFurnitureForces1stPerson = 180,
			kKeywordFurnitureForces3rdPerson = 181,
			kKeywordActivatorFurnitureNoPlayer = 182,
#ifndef SKYRIMVR
			kTelekinesisGrabSound = 183,
			kTelekinesisThrowSound = 184,
			kWorldMapWeather = 185,
			kHelpManualPC = 186,
			kHelpManualXBox = 187,
			kKeywordTypeAmmo = 188,
			kKeywordTypeArmor = 189,
			kKeywordTypeBook = 190,
			kKeywordTypeIngredient = 191,
			kKeywordTypeKey = 192,
			kKeywordTypeMisc = 193,
			kKeywordTypeSoulGem = 194,
			kKeywordTypeWeapon = 195,
			kKeywordTypePotion = 196,
			kBaseWeaponEnchantment = 197,
			kBaseArmorEnchantment = 198,
			kBasePotion = 199,
			kBasePoison = 200,
			kKeywordDragon = 201,
			kKeywordMovable = 202,
			kArtObjectAbsorbEffect = 203,
			kWeaponMaterialList = 204,
			kArmorMaterialList = 205,
			kKeywordDisallowEnchanting = 206,
			kFavortravelmarkerlocation = 207,
			kKeywordHoldLocation = 208,
			kKeywordCivilWarOwner = 209,
			kKeywordCivilWarNeutral = 210,
			kLocRefTypeCivilWarSoldier = 211,
			kKeywordClearableLocation = 212,
			kLocRefTypeResourceDestructible = 213,
			kFormListHairColorList = 214,
			kComplexSceneObject = 215,
			kKeywordReusableSoulGem = 216,
			kKeywordAnimal = 217,
			kKeywordDaedra = 218,
			kKeywordRobot = 219,
			kKeywordNirnroot = 220,
			kFightersGuildFaction = 221,
			kMagesGuildFaction = 222,
			kThievesGuildFaction = 223,
			kDarkBrotherhoodFaction = 224,
			kJarlFaction = 225,
			kBunnyFaction = 226,
			kPlayerIsVampireVariable = 227,
			kPlayerIsWerewolfVariable = 228,
			kRoadMarker = 229,
			kKeywordScaleActorTo10 = 230,
			kKeywordVampire = 231,
			kKeywordForge = 232,
			kKeywordCookingPot = 233,
			kKeywordSmelter = 234,
			kKeywordTanningRack = 235,
			kHelpBasicLockpickingPC = 236,
			kHelpBasicLockpickingConsole = 237,
			kHelpBasicForging = 238,
			kHelpBasicCooking = 239,
			kHelpBasicSmelting = 240,
			kHelpBasicTanning = 241,
			kHelpBasicObjectCreation = 242,
			kHelpBasicEnchanting = 243,
			kHelpBasicSmithingWeapon = 244,
			kHelpBasicSmithingArmor = 245,
			kHelpBasicAlchemy = 246,
			kHelpBarter = 247,
			kHelpLevelingup = 248,
			kHelpSkillsMenu = 249,
			kHelpMapMenu = 250,
			kHelpJournal = 251,
			kHelpLowHealth = 252,
			kHelpLowMagicka = 253,
			kHelpLowStamina = 254,
			kHelpJail = 255,
			kHelpTeamateFavor = 256,
			kHelpWeaponCharge = 257,
			kHelpFavorites = 258,
			kKinectHelpFormList = 259,
			kHelpFlyingMount = 260,
			kHelpTargetLock = 261,
			kHelpAttackTarget = 262,
			kImagespaceLoadscreen = 263,
			kKeywordWeaponMaterialDaedric = 264,
			kKeywordWeaponMaterialDraugr = 265,
			kKeywordWeaponMaterialDraugrHoned = 266,
			kKeywordWeaponMaterialDwarven = 267,
			kKeywordWeaponMaterialEbony = 268,
			kKeywordWeaponMaterialElven = 269,
			kKeywordWeaponMaterialFalmer = 270,
			kKeywordWeaponMaterialFalmerHoned = 271,
			kKeywordWeaponMaterialGlass = 272,
			kKeywordWeaponMaterialImperial = 273,
			kKeywordWeaponMaterialIron = 274,
			kKeywordWeaponMaterialOrcish = 275,
			kKeywordWeaponMaterialSteel = 276,
			kKeywordWeaponMaterialWood = 277,
			kKeywordWeaponTypeBoundArrow = 278,
			kKeywordArmorMaterialDaedric = 279,
			kKeywordArmorMaterialDragonplate = 280,
			kKeywordArmorMaterialDragonscale = 281,
			kKeywordArmorMaterialDragonbone = 282,
			kKeywordArmorMaterialDwarven = 283,
			kKeywordArmorMaterialEbony = 284,
			kKeywordArmorMaterialElven = 285,
			kKeywordArmorMaterialElvenSplinted = 286,
			kKeywordArmorMaterialFullLeather = 287,
			kKeywordArmorMaterialGlass = 288,
			kKeywordArmorMaterialHide = 289,
			kKeywordArmorMaterialImperial = 290,
			kKeywordArmorMaterialImperialHeavy = 291,
			kKeywordArmorMaterialImperialReinforced = 292,
			kKeywordArmorMaterialIron = 293,
			kKeywordArmorMaterialIronBanded = 294,
			kKeywordArmorMaterialOrcish = 295,
			kKeywordArmorMaterialScaled = 296,
			kKeywordArmorMaterialSteel = 297,
			kKeywordArmorMaterialSteelPlate = 298,
			kKeywordArmorMaterialStormcloak = 299,
			kKeywordArmorMaterialStudded = 300,
			kKeywordGenericCraftableKeyword01 = 301,
			kKeywordGenericCraftableKeyword02 = 302,
			kKeywordGenericCraftableKeyword03 = 303,
			kKeywordGenericCraftableKeyword04 = 304,
			kKeywordGenericCraftableKeyword05 = 305,
			kKeywordGenericCraftableKeyword06 = 306,
			kKeywordGenericCraftableKeyword07 = 307,
			kKeywordGenericCraftableKeyword08 = 308,
			kKeywordGenericCraftableKeyword09 = 309,
			kKeywordGenericCraftableKeyword10 = 310,
			kKeywordJewelry = 311,
			kKeywordCuirass = 312,
			kLocalMapHidePlane = 313,
			kSnowLODMaterial = 314,
			kSnowLODMaterialHD = 315,
			kAshLODMaterial = 316,
			kAshLODMaterialHD = 317,
			kDialogueFollowerQuest = 318,
			kPotentialFollowerFaction = 319,
			kWerewolfAvailablePerks = 320,
			kVampireAvailablePerks = 321,
			kSurvivalModeToggle = 322,
			kSurvivalModeEnabled = 323,
			kSurvivalModeShowOption = 324,
			kSurvivalTemperature = 325,
			kSurvivalColdPenalty = 326,
			kSurvivalHungerPenalty = 327,
			kSurvivalSleepPenalty = 328,
			kSurvivalKeywordCold = 329,
			kSurvivalKeywordWarm = 330,
			kSurvivalKeywordArmorHands = 331,
			kSurvivalKeywordClothingHands = 332,
			kSurvivalKeywordArmorFeet = 333,
			kSurvivalKeywordClothingFeet = 334,
			kSurvivalKeywordArmorBody = 335,
			kSurvivalKeywordClothingBody = 336,
			kSurvivalKeywordArmorHead = 337,
			kSurvivalKeywordClothingHead = 338,
			kWerewolfRace = 339,
			kVampireRace = 340,
			kVampireSpells = 341,
			kDragonMountNoLandList = 342,
			kPlayerCanMountDragonHereList = 343,
			kFlyingMountAllowedSpells = 344,
			kFlyingMountDisallowedSpells = 345,
			kKeywordMount = 346,
			kVerletCape = 347,
			kFurnitureTestNPC = 348,
			kKeywordConditionalExplosion = 349,
			kVampireFeedNoCrimeFaction = 350,
			kSkyrimWorldspace = 351,
			kKeywordArmorMaterialLightBonemold = 352,
			kKeywordArmorMaterialLightChitin = 353,
			kKeywordArmorMaterialLightNordic = 354,
			kKeywordArmorMaterialLightStalhrim = 355,
			kFlyingMountFlyFastWorldspaces = 356,
			kKeywordArmorMaterialHeavyBonemold = 357,
			kKeywordArmorMaterialHeavyChitin = 358,
			kKeywordArmorMaterialHeavyNordic = 359,
			kKeywordArmorMaterialHeavyStalhrim = 360,
			kKeywordWeaponMaterialNordic = 361,
			kKeywordWeaponMaterialStalhrim = 362,
#	ifdef SKYRIM_SUPPORT_AE
			kHelpManualInstalledContent = 363,
			kHelpManualInstalledContentAE = 364,
			kModsHelpFormList = 365,
			kTotal = 366
#	else
			kModsHelpFormList = 363,
			kTotal = 364
#	endif
#else  // SKYRIMVR
			kisJarlChair = 184,
			kFurnitureAnimatesFast = 185,
			isCartTravelPlayer = 186,
			kTelekinesisGrabSound = 187,
			kTelekinesisThrowSound = 188,
			kWorldMapWeather = 189,
			kHelpManualPC = 190,
			kHelpManualXBox = 191,
			kHelpManualUnknown1 = 192,
			kHelpManualUnknown2 = 193,
			kKeywordTypeAmmo = 194,
			kKeywordTypeArmor = 195,
			kKeywordTypeBook = 196,
			kKeywordTypeIngredient = 197,
			kKeywordTypeKey = 198,
			kKeywordTypeMisc = 199,
			kKeywordTypeSoulGem = 200,
			kKeywordTypeWeapon = 201,
			kKeywordTypePotion = 202,
			kBaseWeaponEnchantment = 203,
			kBaseArmorEnchantment = 204,
			kBasePotion = 205,
			kBasePoison = 206,
			kKeywordDragon = 207,
			kKeywordMovable = 208,
			kArtObjectAbsorbEffect = 209,
			kWeaponMaterialList = 210,
			kArmorMaterialList = 211,
			kKeywordDisallowEnchanting = 212,
			kFavortravelmarkerlocation = 213,
			kKeywordHoldLocation = 214,
			kKeywordCivilWarOwner = 215,
			kKeywordCivilWarNeutral = 216,
			kLocRefTypeCivilWarSoldier = 217,
			kKeywordClearableLocation = 218,
			kLocRefTypeResourceDestructible = 219,
			kFormListHairColorList = 220,
			kComplexSceneObject = 221,
			kKeywordReusableSoulGem = 222,
			kKeywordAnimal = 223,
			kKeywordDaedra = 224,
			kKeywordRobot = 225,
			kKeywordNirnroot = 226,
			kFightersGuildFaction = 227,
			kMagesGuildFaction = 228,
			kThievesGuildFaction = 229,
			kDarkBrotherhoodFaction = 230,
			kJarlFaction = 231,
			kBunnyFaction = 232,
			kPlayerIsVampireVariable = 233,
			kPlayerIsWerewolfVariable = 234,
			kRoadMarker = 235,
			kKeywordScaleActorTo10 = 236,
			kKeywordVampire = 237,
			kKeywordForge = 238,
			kKeywordCookingPot = 239,
			kKeywordSmelter = 240,
			kKeywordTanningRack = 241,
			kHelpBasicLockpickingPC = 242,
			kHelpBasicLockpickingConsole = 243,

			kHelpBasicForging = 245,
			kHelpBasicCooking = 246,
			kHelpBasicSmelting = 247,
			kHelpBasicTanning = 248,
			kHelpBasicObjectCreation = 249,
			kHelpBasicEnchanting = 250,
			kHelpBasicSmithingWeapon = 251,
			kHelpBasicSmithingArmor = 252,
			kHelpBasicAlchemy = 253,
			kHelpBarter = 254,
			kHelpLevelingup = 255,
			kHelpSkillsMenu = 256,
			kHelpMapMenu = 257,
			kHelpJournal = 258,
			kHelpLowHealth = 259,
			kHelpLowMagicka = 260,
			kHelpLowStamina = 261,
			kHelpJail = 262,
			kHelpTeamateFavor = 263,
			kHelpWeaponCharge = 264,
			kHelpFavorites = 265,
			kKinectHelpFormList = 266,
			//kHelpFlyingMount = 260,
			kHelpTargetLock = 267,
			kHelpSwitchTarget = 268,
			kHelpAttackTarget = 269,
			kHelp270 = 270,
			kHelp271 = 271,
			kHelp272 = 271,
			kHelpSwimming = 273,
			kHelpArchery = 274,
			kHelp275 = 275,
			kImagespaceLoadscreen = 280,
			kKeywordWeaponMaterialDaedric = 281,
			kKeywordWeaponMaterialDraugr = 282,
			kKeywordWeaponMaterialDraugrHoned = 283,
			kKeywordWeaponMaterialDwarven = 284,
			kKeywordWeaponMaterialEbony = 285,
			kKeywordWeaponMaterialElven = 286,
			kKeywordWeaponMaterialFalmer = 287,
			kKeywordWeaponMaterialFalmerHoned = 288,
			kKeywordWeaponMaterialGlass = 289,
			kKeywordWeaponMaterialImperial = 290,
			kKeywordWeaponMaterialIron = 291,
			kKeywordWeaponMaterialOrcish = 292,
			kKeywordWeaponMaterialSteel = 293,
			kKeywordWeaponMaterialWood = 294,
			kKeywordWeaponTypeBoundArrow = 295,
			kKeywordArmorMaterialDaedric = 296,
			kKeywordArmorMaterialDragonplate = 297,
			kKeywordArmorMaterialDragonscale = 298,
			kKeywordArmorMaterialDragonbone = 299,
			kKeywordArmorMaterialDwarven = 300,
			kKeywordArmorMaterialEbony = 301,
			kKeywordArmorMaterialElven = 302,
			kKeywordArmorMaterialElvenSplinted = 303,
			kKeywordArmorMaterialFullLeather = 304,
			kKeywordArmorMaterialGlass = 305,
			kKeywordArmorMaterialHide = 306,
			kKeywordArmorMaterialImperial = 307,
			kKeywordArmorMaterialImperialHeavy = 308,
			kKeywordArmorMaterialImperialReinforced = 309,
			kKeywordArmorMaterialIron = 310,
			kKeywordArmorMaterialIronBanded = 311,
			kKeywordArmorMaterialOrcish = 312,
			kKeywordArmorMaterialScaled = 313,
			kKeywordArmorMaterialSteel = 314,
			kKeywordArmorMaterialSteelPlate = 315,
			kKeywordArmorMaterialStormcloak = 316,
			kKeywordArmorMaterialStudded = 317,
			kKeywordGenericCraftableKeyword01 = 318,
			kKeywordGenericCraftableKeyword02 = 319,
			kKeywordGenericCraftableKeyword03 = 320,
			kKeywordGenericCraftableKeyword04 = 321,
			kKeywordGenericCraftableKeyword05 = 322,
			kKeywordGenericCraftableKeyword06 = 323,
			kKeywordGenericCraftableKeyword07 = 324,
			kKeywordGenericCraftableKeyword08 = 325,
			kKeywordGenericCraftableKeyword09 = 326,
			kKeywordGenericCraftableKeyword10 = 327,
			kKeywordJewelry = 328,
			kKeywordCuirass = 329,
			kLocalMapHidePlane = 330,
			kSnowLODMaterial = 331,
			kSnowLODMaterialHD = 332,
			kAshLODMaterial = 333,
			kAshLODMaterialHD = 334,
			kDialogueFollowerQuest = 335,
			kPotentialFollowerFaction = 336,
			kWerewolfAvailablePerks = 337,
			kVampireAvailablePerks = 338,
			kWerewolfRace = 339,
			kVampireRace = 340,
			kVampireSpells = 341,
			kDragonMountNoLandList = 342,
			kPlayerCanMountDragonHereList = 343,
			kFlyingMountAllowedSpells = 344,
			kFlyingMountDisallowedSpells = 345,
			kKeywordMount = 346,
			kVerletCape = 347,
			kFurnitureTestNPC = 348,
			kKeywordConditionalExplosion = 349,
			kVampireFeedNoCrimeFaction = 350,
			kSkyrimWorldspace = 351,
			kKeywordArmorMaterialLightBonemold = 352,
			kKeywordArmorMaterialLightChitin = 353,
			kKeywordArmorMaterialLightNordic = 354,
			kKeywordArmorMaterialLightStalhrim = 355,
			kFlyingMountFlyFastWorldspaces = 356,
			kKeywordArmorMaterialHeavyBonemold = 357,
			kKeywordArmorMaterialHeavyChitin = 358,
			kKeywordArmorMaterialHeavyNordic = 359,
			kKeywordArmorMaterialHeavyStalhrim = 360,
			kKeywordWeaponMaterialNordic = 361,
			kKeywordWeaponMaterialStalhrim = 362,
			kModsHelpFormList = 363,
			kVrPlayerStaggerImod = 364,
			kVRPlayroomQuest = 366,
			kVRPlayroom = 367,
			kVRSettingsWarning = 368,
			kTotal = 369
#endif
		};
	};
	using DEFAULT_OBJECT = DEFAULT_OBJECTS::DEFAULT_OBJECT;

	enum class DEFAULT_OBJECT_TYPE
	{
		kMisc = 0,
		kFaceGen = 1,
		kMovement = 2,
		kActions = 3,
		kItems = 4,
		kSounds = 5,
		kKeywords = 6
	};

	struct DEFAULT_OBJECT_DATA
	{
	public:
		// members
		const char*                                          name;         // 00
		stl::enumeration<FormType, std::uint8_t>             type;         // 08
		std::uint8_t                                         pad09;        // 09
		std::uint16_t                                        pad0A;        // 0A
		char                                                 uniqueID[4];  // 0C
		stl::enumeration<DEFAULT_OBJECT_TYPE, std::uint32_t> doType;       // 10
		std::uint32_t                                        pad14;        // 14
	};
	static_assert(sizeof(DEFAULT_OBJECT_DATA) == 0x18);

	class BGSDefaultObjectManager :
		public TESForm,                                       // 000
		public BSTSingletonImplicit<BGSDefaultObjectManager>  // 020
	{
	public:
		inline static constexpr auto RTTI = RTTI_BGSDefaultObjectManager;
		inline static constexpr auto VTABLE = VTABLE_BGSDefaultObjectManager;

		using DefaultObject = DEFAULT_OBJECT;
		inline static constexpr auto FORMTYPE = FormType::DefaultObject;

		struct RecordFlags
		{
			enum RecordFlag : std::uint32_t
			{
			};
		};

		~BGSDefaultObjectManager() override;  // 00

		// override (TESForm)
		bool Load(TESFile* a_mod) override;  // 06
		void InitItemImpl() override;        // 13

		[[nodiscard]] static BGSDefaultObjectManager* GetSingleton()
		{
			using func_t = decltype(&BGSDefaultObjectManager::GetSingleton);
			REL::Relocation<func_t> func{ RELOCATION_ID(10878, 13894) };
			return func();
		}

		[[nodiscard]] TESForm* GetObject(DefaultObject a_object) const noexcept { return GetObject(stl::to_underlying(a_object)); }

		template <class T>
		[[nodiscard]] T* GetObject(DefaultObject a_object) const noexcept
		{
			return GetObject<T>(stl::to_underlying(a_object));
		}

		[[nodiscard]] TESForm* GetObject(std::size_t a_idx) const noexcept
		{
			assert(a_idx < stl::to_underlying(DefaultObject::kTotal));
			return objectInit[a_idx] ? objects[a_idx] : nullptr;
		}

		template <class T>
		[[nodiscard]] T* GetObject(std::size_t a_idx) const noexcept
		{
			const auto obj = GetObject(a_idx);
			return obj ? obj->As<T>() : nullptr;
		}

		// members
		TESForm* objects[DEFAULT_OBJECTS::kTotal];     // 020 - DNAM
		bool     objectInit[DEFAULT_OBJECTS::kTotal];  // B80
#ifndef SKYRIM_SUPPORT_AE
		std::uint32_t padCEC;  // CEC
#endif
	};
#ifndef SKYRIMVR
	static_assert(sizeof(BGSDefaultObjectManager) == 0xCF0);
#else
	static_assert(sizeof(BGSDefaultObjectManager) == 0xD20);
#endif
}
