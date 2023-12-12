#ifndef org_hipparchus_stat_descriptive_vector_VectorialCovariance_H
#define org_hipparchus_stat_descriptive_vector_VectorialCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          class VectorialCovariance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_746492bb94848925,
              mid_clear_0640e6acf969ed28,
              mid_equals_221e8e85cb385209,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_70a207fcbc031df2,
              mid_hashCode_412668abc8d889e9,
              mid_increment_cc18240f4a737f14,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VectorialCovariance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VectorialCovariance(const VectorialCovariance& obj) : ::java::lang::Object(obj) {}

            VectorialCovariance(jint, jboolean);

            void clear() const;
            jboolean equals(const ::java::lang::Object &) const;
            jlong getN() const;
            ::org::hipparchus::linear::RealMatrix getResult() const;
            jint hashCode() const;
            void increment(const JArray< jdouble > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {
          extern PyType_Def PY_TYPE_DEF(VectorialCovariance);
          extern PyTypeObject *PY_TYPE(VectorialCovariance);

          class t_VectorialCovariance {
          public:
            PyObject_HEAD
            VectorialCovariance object;
            static PyObject *wrap_Object(const VectorialCovariance&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
