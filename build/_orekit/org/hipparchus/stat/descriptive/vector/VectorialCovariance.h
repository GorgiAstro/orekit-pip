#ifndef org_hipparchus_stat_descriptive_vector_VectorialCovariance_H
#define org_hipparchus_stat_descriptive_vector_VectorialCovariance_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          class VectorialCovariance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_06c90d8be18d8afa,
              mid_clear_ff7cb6c242604316,
              mid_equals_72faff9b05f5ed5e,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_b2eebabce70526d8,
              mid_hashCode_d6ab429752e7c267,
              mid_increment_a71c45509eaf92d1,
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
