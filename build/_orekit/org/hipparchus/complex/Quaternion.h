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
    namespace complex {
      class Quaternion;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_ab69da052b88f50c,
          mid_init$_d606d0c99c70c093,
          mid_init$_49f4b5153d696ea5,
          mid_add_01ac48796580219f,
          mid_add_b69a97c51c98fa2e,
          mid_dotProduct_24198900daf3a400,
          mid_dotProduct_da75e7ed21a401a1,
          mid_equals_460c5e2d9d51c6cc,
          mid_equals_63b840827824f2cb,
          mid_getConjugate_6890e724ec73e493,
          mid_getInverse_6890e724ec73e493,
          mid_getNorm_b74f83833fdad017,
          mid_getPositivePolarForm_6890e724ec73e493,
          mid_getQ0_b74f83833fdad017,
          mid_getQ1_b74f83833fdad017,
          mid_getQ2_b74f83833fdad017,
          mid_getQ3_b74f83833fdad017,
          mid_getScalarPart_b74f83833fdad017,
          mid_getVectorPart_25e1757a36c4dde2,
          mid_hashCode_55546ef6a647f39b,
          mid_isPureQuaternion_716249baa52d209e,
          mid_isUnitQuaternion_716249baa52d209e,
          mid_multiply_01ac48796580219f,
          mid_multiply_91809ff51dea6aaf,
          mid_multiply_b69a97c51c98fa2e,
          mid_normalize_6890e724ec73e493,
          mid_subtract_01ac48796580219f,
          mid_subtract_b69a97c51c98fa2e,
          mid_toString_1c1fa1e935d6cdcf,
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
