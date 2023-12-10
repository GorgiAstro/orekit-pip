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
          mid_init$_fa9d415d19f69361,
          mid_init$_f617b8481082c6ea,
          mid_init$_b0a935b68e41d65a,
          mid_add_5f613698e2914831,
          mid_add_96add5f368389e9a,
          mid_dotProduct_d593b23f46fb0b5a,
          mid_dotProduct_824df456e9101c13,
          mid_equals_65c7d273e80d497a,
          mid_equals_aada2c4d1efd962c,
          mid_getConjugate_18aa64800eb51ca4,
          mid_getInverse_18aa64800eb51ca4,
          mid_getNorm_dff5885c2c873297,
          mid_getPositivePolarForm_18aa64800eb51ca4,
          mid_getQ0_dff5885c2c873297,
          mid_getQ1_dff5885c2c873297,
          mid_getQ2_dff5885c2c873297,
          mid_getQ3_dff5885c2c873297,
          mid_getScalarPart_dff5885c2c873297,
          mid_getVectorPart_60c7040667a7dc5c,
          mid_hashCode_570ce0828f81a2c1,
          mid_isPureQuaternion_2e401133981893e4,
          mid_isUnitQuaternion_2e401133981893e4,
          mid_multiply_5f613698e2914831,
          mid_multiply_40fb43ad9b6aa555,
          mid_multiply_96add5f368389e9a,
          mid_normalize_18aa64800eb51ca4,
          mid_subtract_5f613698e2914831,
          mid_subtract_96add5f368389e9a,
          mid_toString_11b109bd155ca898,
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
