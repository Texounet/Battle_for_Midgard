#include "../header/main.h"

void anim_erupt(SDL_Surface *ecran, int mstr)
{
  eff_ecr(ecran, mstr);
  aff_img(ecran, "./imagem/mnt.png", 500, 260);
  SDL_Flip(ecran);
  usleep(200000);
  aff_img(ecran, "./imagem/mnt.png", 500, 240);
  SDL_Flip(ecran);
  usleep(200000);
  aff_img(ecran, "./imagem/mnt.png", 500, 220);
  SDL_Flip(ecran);
  usleep(200000);
  aff_img(ecran, "./imagem/mnt.png", 500, 200);
  SDL_Flip(ecran);
  usleep(200000);
  eff_ecr(ecran, mstr);
  SDL_Flip(ecran);
}

void anim_typh(SDL_Surface *ecran, int mstr)
{
  int i;
  eff_ecr(ecran, mstr);
  for(i = 300; i < 600; i = i + 30)
  {
  aff_img(ecran, "./imagem/typh.png", i, 200);
  SDL_Flip(ecran);
  usleep(100000);
  }
  eff_ecr(ecran, mstr);
}

void anim_cycl(SDL_Surface *ecran, int mstr)
{
  int i;
  eff_ecr(ecran, mstr);
  for(i = 300; i < 600; i = i + 30)
  {
  aff_img(ecran, "./imagem/cycl.png", i, 220);
  SDL_Flip(ecran);
  usleep(100000);
  eff_ecr(ecran, mstr);
  }
}

void anim_sei(SDL_Surface *ecran, int mstr)
{
  int i;
  eff_ecr(ecran, mstr);
  for (i = 0; i < 10; i++)
  {
  aff_img(ecran, "./imagem/bataille.png", 0, 0);
  SDL_Flip(ecran);
  aff_img(ecran, "./imagem/bataille.png", 10, 10);
  SDL_Flip(ecran);
  }
  eff_ecr(ecran, mstr);
  }