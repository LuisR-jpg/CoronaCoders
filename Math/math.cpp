bool isPrimo(int a){
  for(int i = 2; i*i <= a; i++)
    if( a % i == 0 ) return false;
  return true;
}
