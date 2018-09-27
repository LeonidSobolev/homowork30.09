struct quaternion{
  double a;
  double i;
  double j;
  double k;
  quaternion(double p, double o, double x, double e):a(p), i(o), j(x), k(e) {
    }

  void operator += (  quaternion&  z  ){
    this->a = this->a + z.a;
    this->i = this->i + z.i;
    this->j = this->j + z.j;
    this->k = this->k + z.k;
    }

  void operator *= (  quaternion&  z  ){
    this->a = this->a * z.a - this->i * z.i - this->j * z.j - this->k * z.k;
    this->i = this->i * z.a + this->a * z.i + this->j * z.k - this->k * z.j;
    this->j = this->j * z.a + this->a * z.j + this->k * z.i - this->i * z.k;
    this->k = this->k * z.a + this->a * z.k + this->i * z.j - this->j * z.i;
    }

  void operator -= (  quaternion&  z  ){
    this->a = this->a - z.a;
    this->i = this->i - z.i;
    this->j = this->j - z.j;
    this->k = this->k - z.k;
    }

  void operator *= (  int&  scalar  ){
    this->a = this->a * scalar;
    this->i = this->i * scalar;
    this->j = this->j * scalar;
    this->k = this->k * scalar;
    }
};

int main(){

}
