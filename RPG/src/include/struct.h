/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

typedef struct event
{
    sfEvent event;
    sfVector2f size_event;
    sfSound *sound;
    sfSoundBuffer *s_buf;
} event_t;

typedef struct text_but_menu
{
    sfText *play;
    sfText *option;
    sfText *tuto;
    sfText *quit;
    sfFont *font;
} text_but_menu_t;

typedef struct title
{
    sfText *title1;
    sfText *title2;
    sfFont *police;
    sfColor color_title;
} title_t;

typedef struct but_menu
{
    sfSprite *play;
    sfSprite *option;
    sfSprite *tuto;
    sfSprite *quit;
    sfTexture *but_p;
    sfTexture *but_o;
    sfTexture *but_t;
    sfTexture *but_q;
    sfTexture *but_q_hover;
    int but_pressed;
} but_menu_t;

typedef struct menu
{
    sfSprite *background;
    sfTexture *t_background;
    but_menu_t *b_menu;
    text_but_menu_t *t_b_menu;
} menu_t;

typedef struct txt_inside_cadre_s
{
    sfText *txt_attack;
    sfText *txt_defender;
    sfText *txt_heal;
    sfText *txt_item;
} txt_inside_cadre_t;

typedef struct mimine_s
{
    sfSprite *s_mimine;
    sfTexture *t_mimine;
    int index;
    int i;
} mimine_t;

typedef struct cadre_s
{
    sfSprite *middle_cadre;
    sfTexture *t_middle_cadre;
    sfSprite *cadre_attack;
    sfTexture *t_cadre_attack;
    sfSprite *cadre_defendre;
    sfTexture *t_cadre_defendre;
    sfSprite *cadre_soin;
    sfTexture *t_cadre_soin;
    sfSprite *cadre_item;
    sfTexture *t_cadre_item;
    sfSprite *cadre_enemy;
    sfTexture *t_cadre_enemy;
    sfSprite *cadre_hero;
    sfTexture *t_cadre_hero;
    sfSprite *inside_cadre_enemy;
    sfTexture *t_inside_cadre_enemy;
    sfSprite *inside_cadre_hero;
    sfTexture *t_inside_cadre_hero;
    mimine_t *mimine;
    txt_inside_cadre_t *txt;
} cadre_t;

typedef struct boss_s
{
    sfSprite *img_boss;
    sfTexture *t_img_boss;
    sfSprite *jauge_life_boss;
    sfTexture *t_jauge_life_boss;
    sfText *boss_name;
    sfText *boss_life;
    int done;
    char *name;
    int life;
    int attak;
} boss_t;

typedef struct hero_s
{
    sfSprite *img_hero;
    sfTexture *t_img_hero;
    sfSprite *jauge_life_hero;
    sfTexture *t_jauge_life_hero;
    sfText *hero_name;
    sfText *hero_life;
    char *name;
    int life;
    int attak;
} hero_t;

typedef struct character_s
{
    sfColor font_color;
    boss_t *boss;
    hero_t *hero;
    int win;
} character_t;

typedef struct particles_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float elapsed;
    sfTexture *texture_t;
    sfSprite *sprite_t;
    sfVector2f position_t;
    sfIntRect rect_t;
    sfClock *clock_t;
    sfTime time_t;
    float elapsed_t;
} particles_t;

typedef struct last_lose_page_s
{
    sfSprite *background;
    sfTexture *t_background;
    sfSprite *button;
    sfTexture *t_button;
    sfText *text;
} last_lose_page_t;

typedef struct last_win_page_s
{
    sfSprite *background;
    sfTexture *t_background;
    sfSprite *button;
    sfTexture *t_button;
    sfText *text;
} last_win_page_t;

typedef struct final_s
{
    int win;
    int anim;
    int anim2;
    sfClock *clock_g;
    sfTime time_g;
    float elapsed_g;
    sfClock *clock_g_t;
    sfTime time_g_t;
    float elapsed_g_t;
    sfSprite *background;
    sfTexture *t_background;
    last_win_page_t *win_page;
    last_win_page_t *lose_page;
    particles_t *particles;
    cadre_t *cadre;
    but_menu_t *b_menu;
    text_but_menu_t *t_b_menu;
    character_t *character;
} final_t;

typedef struct window
{
    sfRenderWindow *win;
    sfVideoMode video_mode;
    sfVector2u size_window;
    sfVector2i mouse_pos;
} window_t;

typedef struct option
{
    sfSprite *background;
    sfTexture *text;
    sfSprite *window;
    sfTexture *text_wind;
    sfSprite *bar_sfx;
    sfTexture *text_sfx_bar;
    sfSprite *mute_sfx;
    sfTexture *text_mute_sfx;
    sfSprite *bar_music;
    sfTexture *text_music_bar;
    sfSprite *mute_music;
    sfTexture *text_mute_music;
    sfEvent event;
    sfVector2i mous_p;
    sfSprite *exit;
    sfTexture *t_exit;
    int i;
    int j;
    int k;
    int l;
}option_t;

typedef struct text_op
{
    sfText *t_option;
    sfFont *fond;
    sfText *t_music;
    sfFont *music;
    sfText *t_sfx;
    sfFont *sfx;
    sfText *t_lang;
    sfFont *lang;
    sfText *t_x;
    sfFont *x;
    sfText *t_x2;
    sfFont *x2;
}text_op_t;

typedef struct sound
{
    sfMusic *music;
    sfMusic *music_play;
    sfSound *sfx;
    sfSoundBuffer *sound_buffer;
    sfSprite *volume1;
    sfSprite *volume2;
    sfTexture *t_volume;
    sfIntRect r_sfx;
    sfIntRect r_music;
    int vol_sfx;
    int vol_music;
}sound_t;

typedef struct vol
{
    int s;
    int m;
    int vm;
    int vs;
    int tmp;
    int vol_m;
    int vol_s;
    sfIntRect tmp1x;
    int tmpx;
    sfIntRect tmp2m;
    int tmpm;
}vol_t;

typedef struct langue
{
    sfSprite *case_fr;
    sfTexture *t_case;
    sfSprite *case_en;
    sfSprite *case_es;
    sfText *t_FR;
    sfFont *FR;
    sfText *t_EN;
    sfFont *EN;
    sfText *t_ES;
    sfFont *ES;
    int f;
}langue_t;

typedef struct langue2
{
    sfText *t_x_fr;
    sfFont *x_fr;
    sfText *t_x_en;
    sfFont *x_en;
    sfText *t_x_es;
    sfFont *x_es;
    sfSprite *exit_yellow;
    sfTexture *t_exit_y;
    int i;
}langue2_t;

typedef struct stats
{
    sfSprite *stats;
    sfSprite *charac;
    sfTexture *t_char;
    sfTexture *t_stats;
}stats_t;

typedef struct v_space_map
{
    int ship_val;
    float second;
    float second_p[12];
    float dir_ship;
    float last_pos_planet[4];
    int i;
    int k[4];
    int spe_p[4][50];
    int spe_pos[4][50];
    int j;
    int v_planet;
    int v_m_ship;
    int p;
}v_space_map_t;

typedef struct space_map
{
    sfSprite *planet[13];
    sfSprite *map[4];
    sfSprite *ship;
    sfTexture *t_ship[2];
    sfTexture *t_map;
    sfTexture *c_planet[13];
    sfIntRect r_planet[12];
    sfVector2f pos_planet[13];
    sfVector2f pos_map[4];
    sfVector2f pos_ship;
    sfClock *clock;
    sfClock *clock_p[12];
    sfTime time;
    sfTime time_p[12];
}space_map_t;

typedef struct inventory
{
    sfSprite *inv;
    sfTexture *t_inv;
    sfVector2f p_inv;
    int press;
}inventory_t;

typedef struct collision_s
{
    sfSprite *bubble_text_s;
    sfSprite *ok_s;
    sfSprite *no_s;
    sfTexture *bubble_text_t;
    sfTexture *ok_t;
    sfTexture *no_t;
    sfText *good_text;
    sfText *wrong_text;
    sfText *dlc_text;
    sfFont *font_text;
}collision_t;

typedef struct loading_s
{
    sfSprite *ship_travel_s;
    sfSprite *ship_land_s;
    sfSprite *button;
    sfTexture *ship_travU_t;
    sfTexture *ship_landU_t;
    sfTexture *ship_travX_t;
    sfTexture *ship_landX_t;
}loading_t;

typedef struct play
{
    int scene_play;
    inventory_t *inv;
    stats_t *stat;
    space_map_t *s_map;
    v_space_map_t *v_s_map;
    collision_t *colli;
    loading_t *load;
}play_t;

typedef struct custom
{
    sfSprite *bg_c;
    sfTexture *t_bg_c;
    int c;
    int s;
    sfText *ok_c;
    sfFont *f_ok_c;
    sfSprite *table_ok;
    sfTexture *t_table_ok;
    sfText *text_titre_cus;
}custom_t;

typedef struct charactere
{
    sfSprite *chara;
    sfTexture *t_chara1;
    sfTexture *t_chara2;
    sfTexture *t_chara3;
    sfTexture *t_chara4;
    sfTexture *t_chara5;
    sfText *text_chara;
}charactere_t;

typedef struct ship
{
    sfSprite *ship;
    sfTexture *t_ship_x;
    sfTexture *t_ship_USS;
    sfTexture *right_y;
    sfTexture *left_y;
    sfText *text_ship;
    sfFont *font_space;
}ship_t;

typedef struct arrow
{
    sfSprite *leftc;
    sfSprite *lefts;
    sfSprite *rightc;
    sfSprite *rights;
    sfTexture *t_left;
    sfTexture *t_right;
    sfSprite *arrow_rturn;
    sfTexture *t_arrow_rturn;
    sfTexture *t_arrow_y;
}arrow_t;

typedef struct story
{
    sfSprite *bg_story;
    sfTexture *t_bg_story;
    sfSprite *woman;
    sfTexture *t_woman;
    sfSprite *bulle_story;
    sfTexture *t_bule_story;
}story_t;

typedef struct text_story
{
    sfText *text_story;
    sfFont *font_story;
}text_story_t;

typedef struct button_story
{
    sfSprite *b_retrn;
    sfSprite *b_skip;
    sfText *skip;
}b_story_t;

typedef struct echap
{
    sfRectangleShape *noir;
    sfColor trans;
    sfSprite *b_resume;
    sfSprite *b_quit;
    sfSprite *b_menu;
    sfText *rturn_menu;
    sfText *pause_echap;
    sfText *resume_echap;
    sfText *quit_echap;
    int i;
}echap_t;

typedef struct tuto
{
    sfSprite *ship;
    sfSprite *separator;
    sfSprite *touche;
    sfSprite *bg_tu;
    sfSprite *fond;
    sfSprite *perso;
    sfSprite *touche2;
    sfSprite *touche3;
    sfSprite *boss;
    sfSprite *espace;
    sfTexture *t_touche;
    sfTexture *t_separator;
    sfTexture *t_bg_tu;
    sfTexture *t_fond;
    sfTexture *t_ship;
    sfTexture *t_perso;
    sfTexture *t_boss;
    sfTexture *t_espace;
}tuto_t;

typedef struct tuto_text
{
    sfText *space;
    sfText *custom;
    sfText *planete;
    sfText *boss;
    sfSprite *b_exit;
}tuto2_t;

typedef struct game
{
    int scene;
    window_t *win;
    play_t *play;
    menu_t *menu;
    final_t *final;
    event_t *ev;
    title_t *title;
    option_t *opt;
    text_op_t *text;
    sound_t *sound;
    vol_t *vol;
    langue_t *lang;
    langue2_t *lang2;
    custom_t *custom;
    charactere_t *char1;
    ship_t *ship;
    arrow_t *arrow;
    story_t *story;
    text_story_t *t_story;
    b_story_t *b_story;
    echap_t *echap;
    tuto_t *tuto;
    tuto2_t *tuto_text;
    int b;
} game_t;