#pragma once

const CMenuScreen aScreens[] = {
	// MENUPAGE_NONE = 0
	{ "", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0, },

	// MENUPAGE_STATS = 1
	{ "FET_STA", MENUPAGE_NONE, MENUPAGE_NONE, MENUPAGE_NONE, MENUROW_5, MENUROW_2,
		MENUACTION_CHANGEMENU, "FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_NEW_GAME = 2
	{ "FET_SGA", MENUPAGE_NONE, MENUPAGE_NONE, MENUPAGE_NONE, MENUROW_0, MENUROW_1,
		MENUACTION_CHANGEMENU, "FES_SNG", SAVESLOT_NONE, MENUPAGE_NEW_GAME_RELOAD,
		MENUACTION_CHANGEMENU, "GMLOAD",  SAVESLOT_NONE, MENUPAGE_CHOOSE_LOAD_SLOT,
		MENUACTION_CHANGEMENU, "FES_DGA", SAVESLOT_NONE, MENUPAGE_CHOOSE_DELETE_SLOT,
		MENUACTION_CHANGEMENU, "FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_BRIEFS = 3
	{ "FET_BRE", MENUPAGE_NONE, MENUPAGE_NONE, MENUPAGE_NONE, MENUROW_6, MENUROW_3,
		MENUACTION_CHANGEMENU, "FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENU_CONTROLLER_SETTINGS = 4
	{ "FET_CON", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_SOUND_SETTINGS = 5
	{ "FET_AUD", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_1, MENUROW_1,
		MENUACTION_MUSICVOLUME,		"FEA_MUS", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_SFXVOLUME,		"FEA_SFX", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_AUDIOHW,			"FEA_3DH", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_SPEAKERCONF,		"FEA_SPK", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_DYNAMICACOUSTIC,	"FET_DAM", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_RADIO,			"FEA_RSS", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_RESTOREDEF,		"FET_DEF", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_CHANGEMENU,		"FEDS_TB", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
	},

	// MENUPAGE_GRAPHICS_SETTINGS = 6
	{ "FET_DIS", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_2, MENUROW_2,
		MENUACTION_BRIGHTNESS,	"FED_BRI", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_DRAWDIST,	"FEM_LOD", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_FRAMESYNC,	"FEM_VSC", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_FRAMELIMIT,	"FEM_FRM", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_TRAILS,		"FED_TRA", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_SUBTITLES,	"FED_SUB", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_WIDESCREEN,	"FED_WIS", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_SCREENRES,	"FED_RES", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_RESTOREDEF,	"FET_DEF", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_CHANGEMENU,	"FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_LANGUAGE_SETTINGS = 7
	{ "FET_LAN", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_3, MENUROW_3,
		MENUACTION_LANG_ENG,	"FEL_ENG", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_LANG_FRE,	"FEL_FRE", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_LANG_GER,	"FEL_GER", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_LANG_ITA,	"FEL_ITA", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_LANG_SPA,	"FEL_SPA", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_CHOOSE_LOAD_SLOT = 8
	{ "FET_LG", MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUROW_1, MENUROW_1,
		MENUACTION_CHANGEMENU,	"FESZ_CA", SAVESLOT_NONE,	MENUPAGE_NEW_GAME,
		MENUACTION_CHECKSAVE,	"FEM_SL1", SAVESLOT_1,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL2", SAVESLOT_2,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL3", SAVESLOT_3,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL4", SAVESLOT_4,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL5", SAVESLOT_5,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL6", SAVESLOT_6,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL7", SAVESLOT_7,		MENUPAGE_LOAD_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL8", SAVESLOT_8,		MENUPAGE_LOAD_SLOT_CONFIRM,
	},

	// MENUPAGE_CHOOSE_DELETE_SLOT = 9
	{ "FET_DG", MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUROW_2, MENUROW_2,
		MENUACTION_CHANGEMENU,	"FESZ_CA",	SAVESLOT_NONE,	MENUPAGE_NEW_GAME,
		MENUACTION_CHECKSAVE,	"FEM_SL1",	SAVESLOT_1,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL2",	SAVESLOT_2,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL3",	SAVESLOT_3,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL4",	SAVESLOT_4,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL5",	SAVESLOT_5,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL6",	SAVESLOT_6,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL7",	SAVESLOT_7,		MENUPAGE_DELETE_SLOT_CONFIRM,
		MENUACTION_CHECKSAVE,	"FEM_SL8",	SAVESLOT_8,		MENUPAGE_DELETE_SLOT_CONFIRM,
	},

	// MENUPAGE_NEW_GAME_RELOAD = 10
	{ "FET_NG", MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUPAGE_NEW_GAME, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,		"FESZ_QR",	SAVESLOT_NONE,	MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEM_NO",	SAVESLOT_NONE,	MENUPAGE_NEW_GAME,
		MENUACTION_NEWGAME,		"FEM_YES",	SAVESLOT_NONE,	MENUPAGE_NONE,
	},

	// MENUPAGE_LOAD_SLOT_CONFIRM = 11
	{ "FET_LG", MENUPAGE_CHOOSE_LOAD_SLOT, MENUPAGE_CHOOSE_LOAD_SLOT, MENUPAGE_CHOOSE_LOAD_SLOT, MENUROW_0, MENUROW_0,
		 MENUACTION_LABEL,		"FESZ_QL",	SAVESLOT_NONE,	MENUPAGE_NONE,
		 MENUACTION_CHANGEMENU,	"FEM_NO",	SAVESLOT_NONE,	MENUPAGE_CHOOSE_LOAD_SLOT,
		 MENUACTION_CHANGEMENU,	"FEM_YES",	SAVESLOT_NONE,	MENUPAGE_LOADING_IN_PROGRESS,
	},

	// MENUPAGE_DELETE_SLOT_CONFIRM = 12
	{ "FET_DG", MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUROW_0, MENUROW_0,
		 MENUACTION_LABEL,		"FESZ_QD",	SAVESLOT_NONE,  MENUPAGE_NONE,
		 MENUACTION_CHANGEMENU,	"FEM_NO",	SAVESLOT_NONE,  MENUPAGE_CHOOSE_DELETE_SLOT,
		 MENUACTION_CHANGEMENU,	"FEM_YES",	SAVESLOT_NONE,	MENUPAGE_DELETING,
	},

	// MENUPAGE_13 = 13
	{ "FES_NOC", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_LOADING_IN_PROGRESS = 14
	{ "FET_LG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL, "FED_LDW", SAVESLOT_NONE, MENUPAGE_LOAD_SLOT_CONFIRM,
	},

	// MENUPAGE_DELETING_IN_PROGRESS = 15
	{ "FET_DG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL, "FEDL_WR", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_16 = 16
	{ "FET_LG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL, "FES_LOE", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_DELETE_FAILED = 17
	{ "FET_DG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL, "FES_DEE", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_CHANGEMENU, "FEC_OKK", SAVESLOT_NONE, MENUPAGE_CHOOSE_DELETE_SLOT,
	},

	// MENUPAGE_DEBUG_MENU = 18
	{ "FED_DBG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MEMORY_CARD_1 = 19
	{ "FEM_MCM", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MEMORY_CARD_2 = 20
	{ "FEM_MC2", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_MAIN = 21
	{ "FET_MP", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_SAVE_FAILED_1 = 22
	{ "MCDNSP", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_MEMCARDSAVECONFIRM, "JAILB_U", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_SAVE_FAILED_2 = 23
	{ "MCGNSP", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_MEMCARDSAVECONFIRM, "JAILB_U", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_SAVE = 24
	{ "FET_SG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,				"FES_SCG",	SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_UPDATESAVE,			"GMSAVE",	SAVESLOT_NONE, MENUPAGE_CHOOSE_SAVE_SLOT,
		MENUACTION_UPDATEMEMCARDSAVE,	"FESZ_CA",	SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_NO_MEMORY_CARD = 25
	{ "FES_NOC", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_CHOOSE_SAVE_SLOT = 26
	{ "FET_SG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		MENUACTION_UPDATEMEMCARDSAVE,	"FESZ_CA", SAVESLOT_NONE,	MENUPAGE_NONE,
		MENUACTION_UPDATESAVE,			"FEM_SL1", SAVESLOT_1,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL2", SAVESLOT_2,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL3", SAVESLOT_3,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL4", SAVESLOT_4,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL5", SAVESLOT_5,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL6", SAVESLOT_6,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL7", SAVESLOT_7,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
		MENUACTION_UPDATESAVE,			"FEM_SL8", SAVESLOT_8,		MENUPAGE_SAVE_OVERWRITE_CONFIRM,
	},

	// MENUPAGE_SAVE_OVERWRITE_CONFIRM = 27
	{ "FET_SG", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,		"FESZ_QO", SAVESLOT_NONE, MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEM_YES", SAVESLOT_NONE, MENUPAGE_SAVING_IN_PROGRESS,
		MENUACTION_CHANGEMENU,	"FEM_NO",  SAVESLOT_NONE, MENUPAGE_CHOOSE_SAVE_SLOT,
	},

	// MENUPAGE_MULTIPLAYER_MAP = 28
	{ "FET_MAP", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_CONNECTION = 29
	{ "FET_CON", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_FIND_GAME = 30
	{ "FET_FG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_MODE = 31
	{ "FET_GT", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_CREATE = 32
	{ "FET_HG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_MULTIPLAYER_START = 33
	{ "FEN_STA", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_SKIN_SELECT_OLD = 34
	{ "FET_PS", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_CONTROLLER_PC = 35
	{ "FET_CTL", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_0, MENUROW_0,
		MENUACTION_CTRLMETHOD,	"FET_CME", SAVESLOT_NONE, MENUPAGE_CONTROLLER_PC,
		MENUACTION_CHANGEMENU,	"FET_RDK", SAVESLOT_NONE, MENUPAGE_KEYBOARD_CONTROLS,
		MENUACTION_CHANGEMENU,	"FET_AMS", SAVESLOT_NONE, MENUPAGE_MOUSE_CONTROLS,
		MENUACTION_RESTOREDEF,	"FET_DEF", SAVESLOT_NONE, MENUPAGE_CONTROLLER_PC,
		MENUACTION_CHANGEMENU,	"FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
	},

	// MENUPAGE_CONTROLLER_PC_OLD1 = 36
	{ "FET_CTL", MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_CONTROLLER_PC_OLD2 = 37
	{ "FET_CTL", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

	},

	// MENUPAGE_CONTROLLER_PC_OLD3 = 38
   { "FET_CTL", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_CONTROLLER_PC_OLD4 = 39
   { "FET_CTL", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_CONTROLLER_DEBUG = 40
   { "FEC_DBG", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_OPTIONS = 41
   { "FET_OPT", MENUPAGE_NONE, MENUPAGE_NONE, MENUPAGE_NONE, MENUROW_1, MENUROW_4,
		MENUACTION_CHANGEMENU,		"FET_CTL", SAVESLOT_NONE, MENUPAGE_CONTROLLER_PC,
		MENUACTION_CHANGEMENU,		"FET_AUD", SAVESLOT_NONE, MENUPAGE_SOUND_SETTINGS,
		MENUACTION_CHANGEMENU,		"FET_DIS", SAVESLOT_NONE, MENUPAGE_GRAPHICS_SETTINGS,
		MENUACTION_CHANGEMENU,		"FET_LAN", SAVESLOT_NONE, MENUPAGE_LANGUAGE_SETTINGS,
		MENUACTION_CHANGEMENU,		"FET_PSU", SAVESLOT_NONE, MENUPAGE_SKIN_SELECT,
		MENUACTION_CHANGEMENU,		"FEDS_TB", SAVESLOT_NONE, MENUPAGE_NONE,
   },

   // MENUPAGE_EXIT = 42
   { "FET_QG", MENUPAGE_NONE, MENUPAGE_NONE, MENUPAGE_NONE, MENUROW_2, MENUROW_5,
	   MENUACTION_LABEL,		"FEQ_SRE",	SAVESLOT_NONE, MENUPAGE_NONE,
	   MENUACTION_CHANGEMENU,	"FEM_NO",	SAVESLOT_NONE, MENUPAGE_NONE,
	   MENUACTION_CANCLEGAME,	"FEM_YES",	SAVESLOT_NONE, MENUPAGE_NONE,
   },

   // MENUPAGE_SAVING_IN_PROGRESS = 43
   { "", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
	   MENUACTION_LABEL,	"FES_WAR",	SAVESLOT_NONE, MENUPAGE_NONE,
   },

   // MENUPAGE_SAVE_SUCCESSFUL = 44
   { "FET_SG", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
	   MENUACTION_LABEL,				"FES_SSC",	SAVESLOT_LABEL,	MENUPAGE_NONE,
	   MENUACTION_UPDATEMEMCARDSAVE,	"FEC_OKK",	SAVESLOT_NONE,	MENUPAGE_CHOOSE_SAVE_SLOT,
   },

   // MENUPAGE_DELETING = 45
   { "FET_DG", MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUROW_0, MENUROW_0,
	   MENUACTION_LABEL,	"FED_DLW",	SAVESLOT_NONE, MENUPAGE_NONE,
   },

   // MENUPAGE_DELETE_SUCCESS = 46
   { "FET_DG", MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUPAGE_CHOOSE_DELETE_SLOT, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,		"DEL_FNM", SAVESLOT_NONE,	MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEC_OKK", SAVESLOT_NONE,	MENUPAGE_CHOOSE_DELETE_SLOT,
   },

   // MENUPAGE_SAVE_FAILED = 47
   { "FET_SG", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,		"FEC_SVU",	SAVESLOT_NONE,	MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEC_OKK",	SAVESLOT_NONE,	MENUPAGE_CHOOSE_SAVE_SLOT,
   },

   // MENUPAGE_LOAD_FAILED = 48
   { "FET_SG", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,	"FEC_SVU",	SAVESLOT_NONE,	MENUPAGE_NONE,
   },

   // MENUPAGE_LOAD_FAILED_2 = 49
   { "FET_LG", MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUPAGE_CHOOSE_SAVE_SLOT, MENUROW_0, MENUROW_0,
		MENUACTION_LABEL,		"FEC_LUN",	SAVESLOT_NONE,  MENUPAGE_NONE,
		MENUACTION_CHANGEMENU,	"FEDS_TB",	SAVESLOT_NONE,  MENUPAGE_CHOOSE_LOAD_SLOT,
   },

   // MENUPAGE_FILTER_GAME = 50
   { "FIL_FLT", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_START_MENU = 51
   { "FEM_MM", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
		 MENUACTION_CHANGEMENU,	"FEN_STA",	SAVESLOT_NONE,	MENUPAGE_NEW_GAME,
		 MENUACTION_CHANGEMENU,	"FET_OPT",	SAVESLOT_NONE,	MENUPAGE_OPTIONS,
		 MENUACTION_CHANGEMENU,	"FEM_QT",	SAVESLOT_NONE,	MENUPAGE_EXIT,
   },

   // MENUPAGE_PAUSE_MENU = 52
   { "FET_PAU", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,
	   MENUACTION_RESUME,		"FEM_RES",	SAVESLOT_NONE, MENUPAGE_NONE,
	   MENUACTION_CHANGEMENU,	"FEN_STA",	SAVESLOT_NONE, MENUPAGE_NEW_GAME,
	   MENUACTION_CHANGEMENU,	"FEP_STA",	SAVESLOT_NONE, MENUPAGE_STATS,
	   MENUACTION_CHANGEMENU,	"FEP_BRI",	SAVESLOT_NONE, MENUPAGE_BRIEFS,
	   MENUACTION_CHANGEMENU,	"FET_OPT",	SAVESLOT_NONE, MENUPAGE_OPTIONS,
	   MENUACTION_CHANGEMENU,	"FEM_QT",	SAVESLOT_NONE, MENUPAGE_EXIT,
   },

   // MENUPAGE_CHOOSE_MODE = 53
   { "FEN_STA", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_SKIN_SELECT = 54
   { "FET_PSU", MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUPAGE_OPTIONS, MENUROW_4, MENUROW_4,
		//MENUACTION_CHANGEMENU,		"FEDS_TB",	SAVESLOT_NONE, MENUPAGE_MULTIPLAYER_MAIN,
   },

   // MENUPAGE_KEYBOARD_CONTROLS = 55
   { "FET_STI", MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUROW_1, MENUROW_1,
		//MENUACTION_CHANGEMENU,		"FEDS_TB",	SAVESLOT_NONE, MENUPAGE_CONTROLLER_PC,
   },

   // MENUPAGE_MOUSE_CONTROLS = 56
   { "FET_MTI", MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUPAGE_CONTROLLER_PC, MENUROW_2, MENUROW_2,
	   MENUACTION_MOUSESENS,	"FEC_MSH",	SAVESLOT_NONE, MENUPAGE_MOUSE_CONTROLS,
	   MENUACTION_INVVERT,		"FEC_IVV",	SAVESLOT_NONE, MENUPAGE_MOUSE_CONTROLS,
	   MENUACTION_MOUSESTEER,	"FET_MST",	SAVESLOT_NONE, MENUPAGE_MOUSE_CONTROLS,
	   MENUACTION_CHANGEMENU,	"FEDS_TB",	SAVESLOT_NONE, MENUPAGE_NONE,
   },

   // MENUPAGE_57 = 57
   { "", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },

   // MENUPAGE_58 = 58
   { "", MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUPAGE_DISABLED, MENUROW_0, MENUROW_0,

   },
};