#ifndef org_hipparchus_complex_Quaternion_H
#define org_hipparchus_complex_Quaternion_H

#include "java/lang/Object.h"

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
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class Quaternion : public ::java::lang::Object {
       public:
        enum {
          mid_init$_cc18240f4a737f14,
          mid_init$_092013acd44a9e63,
          mid_init$_bc3712e794ac7a81,
          mid_add_37c713f90f85ec7a,
          mid_add_d60006ca19659f21,
          mid_dotProduct_df61a033821d7ce9,
          mid_dotProduct_4e92dca16a9ca947,
          mid_equals_221e8e85cb385209,
          mid_equals_d9091f6e7df43c9e,
          mid_getConjugate_ed563d4dda2b9f62,
          mid_getInverse_ed563d4dda2b9f62,
          mid_getNorm_557b8123390d8d0c,
          mid_getPositivePolarForm_ed563d4dda2b9f62,
          mid_getQ0_557b8123390d8d0c,
          mid_getQ1_557b8123390d8d0c,
          mid_getQ2_557b8123390d8d0c,
          mid_getQ3_557b8123390d8d0c,
          mid_getScalarPart_557b8123390d8d0c,
          mid_getVectorPart_a53a7513ecedada2,
          mid_hashCode_412668abc8d889e9,
          mid_isPureQuaternion_dd69c3ab2404bb71,
          mid_isUnitQuaternion_dd69c3ab2404bb71,
          mid_multiply_37c713f90f85ec7a,
          mid_multiply_e6749c879fbbeb60,
          mid_multiply_d60006ca19659f21,
          mid_normalize_ed563d4dda2b9f62,
          mid_subtract_37c713f90f85ec7a,
          mid_subtract_d60006ca19659f21,
          mid_toString_3cffd47377eca18a,
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
