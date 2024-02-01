#ifndef org_hipparchus_complex_Quaternion_H
#define org_hipparchus_complex_Quaternion_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace complex {
      class Quaternion;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class Quaternion : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a71c45509eaf92d1,
          mid_init$_bb630ae4b8ab9248,
          mid_init$_cd5724127cc72e96,
          mid_add_dfdc255ca1b77803,
          mid_add_ca44ccaabf8f585e,
          mid_dotProduct_292953670e6340c7,
          mid_dotProduct_b80df851df880bd1,
          mid_equals_72faff9b05f5ed5e,
          mid_equals_5917d1034ab0e20b,
          mid_getConjugate_c78679230082648b,
          mid_getInverse_c78679230082648b,
          mid_getNorm_9981f74b2d109da6,
          mid_getPositivePolarForm_c78679230082648b,
          mid_getQ0_9981f74b2d109da6,
          mid_getQ1_9981f74b2d109da6,
          mid_getQ2_9981f74b2d109da6,
          mid_getQ3_9981f74b2d109da6,
          mid_getScalarPart_9981f74b2d109da6,
          mid_getVectorPart_be783177b060994b,
          mid_hashCode_d6ab429752e7c267,
          mid_isPureQuaternion_7bc657d327f0f830,
          mid_isUnitQuaternion_7bc657d327f0f830,
          mid_multiply_dfdc255ca1b77803,
          mid_multiply_d98ee69a81baf7cf,
          mid_multiply_ca44ccaabf8f585e,
          mid_normalize_c78679230082648b,
          mid_subtract_dfdc255ca1b77803,
          mid_subtract_ca44ccaabf8f585e,
          mid_toString_d2c8eb4129821f0e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Quaternion(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Quaternion(const Quaternion& obj) : ::java::lang::Object(obj) {}

        static Quaternion *I;
        static Quaternion *IDENTITY;
        static Quaternion *J;
        static Quaternion *K;
        static Quaternion *ZERO;

        Quaternion(const JArray< jdouble > &);
        Quaternion(jdouble, const JArray< jdouble > &);
        Quaternion(jdouble, jdouble, jdouble, jdouble);

        Quaternion add(const Quaternion &) const;
        static Quaternion add(const Quaternion &, const Quaternion &);
        jdouble dotProduct(const Quaternion &) const;
        static jdouble dotProduct(const Quaternion &, const Quaternion &);
        jboolean equals(const ::java::lang::Object &) const;
        jboolean equals(const Quaternion &, jdouble) const;
        Quaternion getConjugate() const;
        Quaternion getInverse() const;
        jdouble getNorm() const;
        Quaternion getPositivePolarForm() const;
        jdouble getQ0() const;
        jdouble getQ1() const;
        jdouble getQ2() const;
        jdouble getQ3() const;
        jdouble getScalarPart() const;
        JArray< jdouble > getVectorPart() const;
        jint hashCode() const;
        jboolean isPureQuaternion(jdouble) const;
        jboolean isUnitQuaternion(jdouble) const;
        Quaternion multiply(const Quaternion &) const;
        Quaternion multiply(jdouble) const;
        static Quaternion multiply(const Quaternion &, const Quaternion &);
        Quaternion normalize() const;
        Quaternion subtract(const Quaternion &) const;
        static Quaternion subtract(const Quaternion &, const Quaternion &);
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(Quaternion);
      extern PyTypeObject *PY_TYPE(Quaternion);

      class t_Quaternion {
      public:
        PyObject_HEAD
        Quaternion object;
        static PyObject *wrap_Object(const Quaternion&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
