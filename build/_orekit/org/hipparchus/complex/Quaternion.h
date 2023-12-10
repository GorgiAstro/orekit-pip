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
          mid_init$_ebc26dcaf4761286,
          mid_init$_b67fd0977346c69b,
          mid_init$_667a7965403ed91a,
          mid_add_0e7f855d458365a2,
          mid_add_db46105533d82c9c,
          mid_dotProduct_b9494dc3dd6b577d,
          mid_dotProduct_9ed1ef90a914aabd,
          mid_equals_229c87223f486349,
          mid_equals_db455fda376bf6cf,
          mid_getConjugate_db551426640930fe,
          mid_getInverse_db551426640930fe,
          mid_getNorm_456d9a2f64d6b28d,
          mid_getPositivePolarForm_db551426640930fe,
          mid_getQ0_456d9a2f64d6b28d,
          mid_getQ1_456d9a2f64d6b28d,
          mid_getQ2_456d9a2f64d6b28d,
          mid_getQ3_456d9a2f64d6b28d,
          mid_getScalarPart_456d9a2f64d6b28d,
          mid_getVectorPart_7cdc325af0834901,
          mid_hashCode_f2f64475e4580546,
          mid_isPureQuaternion_e18fb1101b70dcca,
          mid_isUnitQuaternion_e18fb1101b70dcca,
          mid_multiply_0e7f855d458365a2,
          mid_multiply_aa27def6e99612f6,
          mid_multiply_db46105533d82c9c,
          mid_normalize_db551426640930fe,
          mid_subtract_0e7f855d458365a2,
          mid_subtract_db46105533d82c9c,
          mid_toString_0090f7797e403f43,
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
