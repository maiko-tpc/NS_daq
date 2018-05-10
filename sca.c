void sca(void){
#ifdef USE_V830
  init_ncscaler(SCAID);
  v830_map_ridf_nscaler(V830_MAPN);
  end_ncscaler32();
#endif

#ifdef USE_V560
  init_ncscaler(SCAID);
  v560_map_ridf_nscaler(V560_MAPN);
  end_ncscaler32();
  //  end_ncscaler(); // changed on 17/12/14
#endif

}

void scrinit(void){

}
